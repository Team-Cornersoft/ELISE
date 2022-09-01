#include "engine/math_util.h"
#include "../print.h"



#define SECONDS_TO_TICKS(_a) _a * 30

/*

Things remaining to do:
Spin attack
Vulnerability
Mario groundpound to hit
Death
Thrown Torpedo Attack
Torpedo Attack

*/

// #define DESPAIR_RESTING_Y 400 // Original, probably won't keep
#define DESPAIR_RESTING_Y 600
#define DESPAIR_BOBBING_DISTANCE_Y 100

#define DESPAIR_HOMING_SPEED 20.0f // This is per tick, so 30x this for speed per second
#define DESPAIR_CHARGING_SPEED 5.0f

// Attack Cooldowns and Timers
#define NO_COOLDOWN                  0
#define NO_TIME                      0
#define HOMING_ATTACK_TIME           SECONDS_TO_TICKS(4)
#define CHARGING_ATTACK_COOLDOWN     SECONDS_TO_TICKS(0.5f)
#define CHARGING_SWIPE_COOLDOWN      SECONDS_TO_TICKS(0.5f)
#define SPINNING_ATTACK_TIME         SECONDS_TO_TICKS(5)
#define SPINNING_ATTACK_COOLDOWN     SECONDS_TO_TICKS(8)
#define THROW_TORPEDO_COOLDOWN       SECONDS_TO_TICKS(2)
#define STUN_TIMER                   SECONDS_TO_TICKS(7)

static struct ObjectHitbox sDespairSpinHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 255,
    /* damageOrCoinValue: */ 4,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 0,
    /* height:            */ 0,
    /* hurtboxRadius:     */ 200,
    /* hurtboxHeight:     */ 1000,
};

Vec3f sAnchorPositions[] = {
    {0,     DESPAIR_RESTING_Y,  -1200 },  // North
    {2000,  DESPAIR_RESTING_Y,  0     },  // East
    {0,     DESPAIR_RESTING_Y,  1200  },  // South
    {-2000, DESPAIR_RESTING_Y,  0     },  // West
};

enum DespairAnimations {
    IDLE_ANIM,
    TORPEDO_CHARGE_ANIM,
};

enum DespairDirection {
    NORTH,
    EAST,
    SOUTH,
    WEST,
};

enum DespairState {
    IDLE,
    MIN_ATTACK,
    HOMING = MIN_ATTACK,
    THROWING_TORPEDO,
    LAUNCHING_TORPEDOS,
    MAX_ATTACK,
    SPINNING_ATTACK,
    STUNNED,
    CHARGING,
    RESETTING,
};

void change_attack(s32 action, s32 cooldown, s32 timer) {
    o->oAction = action;
    o->oDespairAttackCooldown = cooldown;
    o->oDespairAttackTimer = timer;
    o->oDespairSwipes = 0;
}

s32 is_cooldown(void) {
    if (o->oDespairAttackCooldown > 0) {
        o->oDespairAttackCooldown--;
    }

    return o->oDespairAttackCooldown <= 0;
}

s32 is_timer(void) {
    if (o->oDespairAttackTimer > 0) {
        o->oDespairAttackTimer--;
    }

    return o->oDespairAttackTimer <= 0;
}

s32 can_attack(void) {
    return is_cooldown() && is_timer();
}

void take_damage(void) {
    o->oDespairHits++;

    cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
    if (o->oDespairHits >= o->oDespairMaxHits) {
        obj_mark_for_deletion(o);
    }

    change_attack(RESETTING, NO_COOLDOWN, NO_TIME);
}

void choose_attack(void) {
    if (o->oDespairCurrentAttacks == 0) {
        change_attack(SPINNING_ATTACK, NO_COOLDOWN, SPINNING_ATTACK_TIME);
        o->oDespairSpinAngle = 270.0f;
        o->oDespairCurrentAttacks = 0;
        return;
    }

    s8 action = MIN_ATTACK + (s8) (random_float() * (MAX_ATTACK - MIN_ATTACK));

    action = HOMING;

    switch(action) {
        case HOMING: change_attack(action, NO_COOLDOWN, HOMING_ATTACK_TIME); break;
        case THROWING_TORPEDO: change_attack(action, THROW_TORPEDO_COOLDOWN, 0); break;
        // case LAUNCHING_TORPEDOS: change_attack(action, , 0); break;

        default: return;
    }

    o->oDespairCurrentAttacks++;
}

void direction_to_target(Vec3f dest, Vec3f target) {
    vec3f_diff(dest, target, &o->oPosX);

    dest[1] = 0;

    vec3f_normalize(dest);
}

// Returns angle, can discard if desired
s32 move_toward(Vec3f target, f32 speed) {
    Vec3f pos;

    direction_to_target(pos, target);

    Vec3f scale = {speed, speed, speed};

    vec3f_mul(pos, scale);

    vec3f_add(&o->oPosX, pos);

    return atan2s(pos[2], pos[0]);
}

void update_gfx(void) {
    cur_obj_scale(0.6f);
}

void despair_bob(void) {
    o->oPosY = sAnchorPositions[NORTH][1] + sinf(o->oTimer / 10.0f) * DESPAIR_BOBBING_DISTANCE_Y;
}

// Fuckin sit still ig
void update_idle(void) {
    cur_obj_init_animation_with_accel_and_sound(IDLE_ANIM, 0.5f);
    despair_bob();
    if (can_attack()) {
        choose_attack();
    }
}

// Chase toward mario, after a set amount of time, lock in place and swipe in his direction
void update_homing(void) {
    cur_obj_init_animation_with_accel_and_sound(TORPEDO_CHARGE_ANIM, 0.5f);

    f32 dist;

    Vec3f pos;
    vec3f_copy(pos, &o->oPosX);
    pos[1] = gMarioState->pos[1];

    vec3f_get_dist(pos, gMarioState->pos, &dist);

    if (dist > 200) {
        o->oFaceAngleYaw = move_toward(gMarioState->pos, DESPAIR_HOMING_SPEED);
    }

    despair_bob();

    if (can_attack()) {
        change_attack(CHARGING, CHARGING_ATTACK_COOLDOWN, 0);
    }
}

// Spawn a swipe object, this will delete itself after a time, but acts as a hitbox to give the illusion that I know how damage works
void swipe_attack(void) {
    o->oDespairAttackCooldown = CHARGING_SWIPE_COOLDOWN;
    o->oDespairAttackTimer++;

    Vec3f dir;

    direction_to_target(dir, gMarioState->pos);

    o->oFaceAngleYaw = atan2s(dir[2], dir[0]);

    Vec3f scale = {250.0f, 250.0f, 250.0f};

    vec3f_mul(dir, scale);

    dir[1] = -300;

    struct Object* spawnedAttack = spawn_object(o, MODEL_GOOMBA, bhvDespairSwipe);

    spawnedAttack->oPosX = o->oPosX + dir[0];
    spawnedAttack->oPosY = o->oPosY + dir[1];
    spawnedAttack->oPosZ = o->oPosZ + dir[2];
}

/*  Plan for charging: Before first charge, chase mario for Cooldown.
    Afterwards, charge, then use cooldown for swipes
*/ 
void update_charging(void) {
    s16 isCooldown = is_cooldown();

    if (o->oDespairSwipes == 0) {
        if (isCooldown) {
            swipe_attack();
        } else {

            Vec3f dir;
            direction_to_target(dir, gMarioState->pos);
            o->oFaceAngleYaw = atan2s(dir[2], dir[0]);    
        }
    } else {
        if (isCooldown) {
            swipe_attack();
        }
    }

    // Max swipes for now
    if (o->oDespairAttackTimer == 3) {
        change_attack(RESETTING, SECONDS_TO_TICKS(0.5f), 0);
    }

}

void spawn_crystal_attack(void) {
    struct Object* crystal = spawn_object(o, MODEL_CRYSTAL_PROJECTILE, bhvCrystalProjectile);

    // Set 2nd byte to TRUE so it fall down instead of forward
    crystal->oBehParams2ndByte = TRUE;

    f32 rx = random_f32_around_zero(sAnchorPositions[EAST][0]);
    f32 rz = random_f32_around_zero(sAnchorPositions[SOUTH][2]);

    crystal->oPosX = rx;
    crystal->oPosY = 3000.0f;
    crystal->oPosZ = rz;

    o->oDespairAttackTimer = SECONDS_TO_TICKS(0.5f);
    o->oDespairSwipes++;
}

// Aim at mario, throw a single one
void update_throwing(void) {


    // Use cooldown for initial launching
    // Use timer in between each throw
    // After last throw, return to resetting

    //TODO: Replace, this just make him spin to show it happening
    if (!is_cooldown()) {
        o->oFaceAngleYaw += degrees_to_angle(10.0f);
    } else {
        if (o->oDespairSwipes <= 5) {
            if (is_timer()) {
                spawn_crystal_attack();
            }
        } else {
            change_attack(RESETTING, SECONDS_TO_TICKS(5), 0);
        }
    }
}

// Launch torpedos in the air, have them fall randomly on the stage
void update_torpedo(void) {
    print_text(20, 20, "Torpedo");
    if (can_attack()) {
        choose_attack();
    }
}

// Bounce around stage or swirl inwards while spinning, afterwards, transition to STUN state
void update_spin(void) {

    f32 radius = 1000.0f;

    f32 ratio = (f32)(o->oDespairAttackTimer) / (f32)(SPINNING_ATTACK_TIME);

    ratio = slerp(0.0, 0.95f, 1.0f, ratio);

    radius *= ratio;

    o->oDespairSpinAngle += 2.0f + (8.0f * (1 - ratio));

    if (o->oDespairSpinAngle > 360.0f) {
        o->oDespairSpinAngle -= 360.0f;
    }

    f32 radianAngle = degrees_to_radians(o->oDespairSpinAngle);

    f32 sz = sinf(radianAngle);
    f32 sx = cosf(radianAngle);

    o->oPosX = sx*radius;
    o->oPosZ = sz*radius;

    o->oFaceAngleYaw -= degrees_to_angle(10.0f + (30.0f * (1 - ratio)));

    s32 b = does_intersect_with_cylinder(&o->oPosX, sDespairSpinHitbox.hurtboxHeight, sDespairSpinHitbox.hurtboxRadius, &gMarioObject->oPosX);
    
    if (b && gMarioState->invincTimer == 0) {
        hurt_and_set_mario_action(gMarioState, ACT_BACKWARD_GROUND_KB, 0, 0xc);
        gMarioState->invincTimer = 50;
    }

    if (can_attack()) {
        change_attack(STUNNED, NO_COOLDOWN, STUN_TIMER);
    }
}

// mf is stunned, can hit him by ground pounding
void update_stunned(void) {
    s32 ticksSinceStunned = STUN_TIMER - o->oDespairAttackTimer;

    // For the first second
    if (ticksSinceStunned <= 30) {
        // Returns 0 - 1 based on how far into the second we are
        f32 ratio = (f32)ticksSinceStunned / 30.0f;

        o->oFaceAngleYaw -= degrees_to_angle(40.0f * (1.0f - ratio));
    }

    s32 b = does_intersect_with_cylinder(&o->oPosX, sDespairSpinHitbox.hurtboxHeight, sDespairSpinHitbox.hurtboxRadius, &gMarioObject->oPosX);

    if (b && (gMarioState->action == ACT_GROUND_POUND || gMarioState->action == ACT_GROUND_POUND_LAND)) {
        take_damage();
    }

    if (can_attack()) {
        change_attack(RESETTING, SECONDS_TO_TICKS(0.5f), NO_TIME);
    }

}

// Return to resting position of NORTH
void update_resetting(void) {
    cur_obj_init_animation_with_accel_and_sound(IDLE_ANIM, 0.5f);

    move_toward(sAnchorPositions[NORTH], 50.0f);
    f32 dist;

    vec3f_get_dist(&o->oPosX, sAnchorPositions[NORTH], &dist);
    o->oFaceAngleYaw = obj_angle_to_object(o, gMarioObject);

    if (dist <= 300.0f) {
        vec3f_copy(&o->oPosX, sAnchorPositions[NORTH]);
        change_attack(IDLE, o->oDespairAttackCooldown, o->oDespairAttackTimer);
    }
}

void bhv_despair_init(void) {
    f32 *startPos = sAnchorPositions[NORTH];
    o->oPosX = startPos[0];
    o->oPosY = startPos[1];
    o->oPosZ = startPos[2];

    o->oDespairAttackCooldown = SECONDS_TO_TICKS(3);
    o->oDespairMaxHits = 3;
}

void bhv_despair_loop(void) {
    switch (o->oAction) {
        case IDLE:               update_idle();      break;
        case HOMING:             update_homing();    break;
        case THROWING_TORPEDO:   update_throwing();  break;
        case LAUNCHING_TORPEDOS: update_torpedo();   break;
        case SPINNING_ATTACK:    update_spin();      break;
        case CHARGING:           update_charging();  break;
        case RESETTING:          update_resetting(); break;
        case STUNNED:            update_stunned();   break;
        default:                                     break;
    }

    update_gfx();
}