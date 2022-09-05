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
#define LAUNCH_TORPEDO_COOLDOWN      SECONDS_TO_TICKS(2)
#define THROW_TORPEDO_COOLDOWN       SECONDS_TO_TICKS(0.75f)
#define THROW_TORPEDO_TIME           SECONDS_TO_TICKS(2)
#define STUN_TIMER                   SECONDS_TO_TICKS(7)

static struct ObjectHitbox sDespairSpinHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 255,
    /* damageOrCoinValue: */ 4,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 400,
    /* height:            */ 1000,
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
    CHASE_ANIM,
    HURT_ANIM,
    RAIN_ANIM,
    RELEASE_ANIM,
    SPIN_ANIM,
    STUN_ANIM,
    SWIPE_1_ANIM,
    SWIPE_2_ANIM,
    SWIPE_3_ANIM,
    TREMBLE_ANIM,
};

enum DespairDirection {
    NORTH,
    EAST,
    SOUTH,
    WEST,
};

enum DespairState {
    IDLE, // Done
    INTRO, // Done
    MIN_ATTACK,
    HOMING = MIN_ATTACK, // Done
    THROWING_TORPEDO, // Done
    LAUNCHING_TORPEDOS, // Done
    MAX_ATTACK,
    SPINNING_ATTACK, // Done
    STUNNED, // Done except animation
    CHARGING, // Maybe needs new animation? Need to increase amount with phase
    RESETTING, // Done
    DEATH_REGULAR, // Used for non-100% death sequence
    DEATH_TRUE, // Used for 100% death sequence
    HURT,
};

s8 sDespairDialogFlag = FALSE;

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

void push_elise_back(void) {
    set_mario_action(gMarioState, ACT_SPAWN_NO_SPIN_AIRBORNE, 0);
    gMarioState->forwardVel = -15.0f;
    gMarioState->vel[1] = 40.0f;
    gMarioState->faceAngle[1] = degrees_to_angle(180.0f);   
}

void take_damage(void) {
    o->oDespairHits++;

    cur_obj_play_sound_2(SOUND_OBJ_THWOMP);

    // Phase 3 defeat without 100%
    // Phase 3 with 100%
    // Phase 5 defeat


    push_elise_back();

    // Check if we're 100%
    if (o->oDespairMaxHits == 5) {
        if (o->oDespairHits == 3) {
            // Play intermediate dialog
            sDespairDialogFlag = TRUE;
            change_attack(HURT, SECONDS_TO_TICKS(1), NO_TIME);
            set_mario_action(gMarioState, ACT_SPAWN_NO_SPIN_AIRBORNE, 0);
            return;
        } else if (o->oDespairHits == 5) {
            // Play ending 2 death sequence
            o->oAction = DEATH_TRUE;
            return;
        }
    } else {
        if (o->oDespairHits == 3) {
            // Play ending 1 death sequence
            o->oAction = DEATH_REGULAR;
            set_mario_action(gMarioState, ACT_SPAWN_NO_SPIN_AIRBORNE, 0);
            return;
        }
    }

    change_attack(HURT, NO_COOLDOWN, NO_TIME);
}

void choose_attack(void) {
    if (o->oDespairCurrentAttacks >= 3) {
        change_attack(SPINNING_ATTACK, NO_COOLDOWN, SPINNING_ATTACK_TIME);
        o->oDespairSpinAngle = 270.0f;
        o->oDespairCurrentAttacks = 0;
        return;
    }

    s8 action = MIN_ATTACK + (s8) (random_float() * (MAX_ATTACK - MIN_ATTACK));

    switch(action) {
        case HOMING: change_attack(action, NO_COOLDOWN, HOMING_ATTACK_TIME); break;
        case LAUNCHING_TORPEDOS: change_attack(action, LAUNCH_TORPEDO_COOLDOWN, 0); break;
        case THROWING_TORPEDO: change_attack(action, THROW_TORPEDO_COOLDOWN, THROW_TORPEDO_TIME); break;

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
    cur_obj_init_animation(IDLE_ANIM);
    despair_bob();
    if (can_attack()) {
        choose_attack();
    }
}

// Chase toward mario, after a set amount of time, lock in place and swipe in his direction
void update_homing(void) {
    cur_obj_init_animation(CHASE_ANIM);

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
    o->oDespairSwipes++;

    Vec3f dir;

    direction_to_target(dir, gMarioState->pos);

    o->oFaceAngleYaw = atan2s(dir[2], dir[0]);

    Vec3f scale = {250.0f, 250.0f, 250.0f};

    vec3f_mul(dir, scale);

    dir[1] = -300;

    struct Object* spawnedAttack = spawn_object(o, MODEL_NONE, bhvDespairSwipe);

    spawnedAttack->oPosX = o->oPosX + dir[0];
    spawnedAttack->oPosY = o->oPosY + dir[1];
    spawnedAttack->oPosZ = o->oPosZ + dir[2];
}

/*  Plan for charging: Before first charge, chase mario for Cooldown.
    Afterwards, charge
*/ 
void update_charging(void) {
    s16 isCooldown = is_cooldown();

    if (o->oDespairSwipes < 3) {
        if (isCooldown) {
            cur_obj_init_animation_and_anim_frame(SWIPE_1_ANIM + o->oDespairSwipes, 0);
            swipe_attack();
        } else {
            Vec3f dir;
            direction_to_target(dir, gMarioState->pos);
            o->oFaceAngleYaw = atan2s(dir[2], dir[0]);    
        }
    }
    else if(o->oDespairSwipes >= 3 && isCooldown) {
        // Max swipes for now
        change_attack(RESETTING, SECONDS_TO_TICKS(0.5f), 0);
    }

}

void spawn_crystal_attack(void) {
    struct Object* crystal = spawn_object(o, MODEL_CRYSTAL_PROJECTILE, bhvCrystalProjectile);

    // Set 2nd byte to TRUE so it fall down instead of forward
    crystal->oBehParams2ndByte = TRUE;

    f32 rx; 
    f32 rz; 

    // 30% of the time crystals will spawn in a medium radius around elise
    if (random_float() < 0.3) {
        rx = gMarioState->pos[0] + random_f32_around_zero(300.0f);
        rz = gMarioState->pos[1] + random_f32_around_zero(300.0f);
    } else {
        rx = random_f32_around_zero(sAnchorPositions[EAST][0]);
        rz = random_f32_around_zero(sAnchorPositions[SOUTH][2]);
    }

    crystal->oPosX = rx;
    crystal->oPosY = 1500.0f;
    crystal->oPosZ = rz;

    f32 time = 0.5f;

    time -= (o->oDespairHits*0.07f);

    o->oDespairAttackTimer = SECONDS_TO_TICKS(time);
    o->oDespairSwipes++;
}

// Spawn rain of torpedos
void update_torpedo(void) {

    if (!is_cooldown()) {
        cur_obj_init_animation(TORPEDO_CHARGE_ANIM);
    } else {
        if (o->oSubAction == 0 && cur_obj_check_if_at_animation_end()) {
            o->oSubAction = 1;
            cur_obj_init_animation(IDLE);
        } else if (o->oSubAction == 0) {
            cur_obj_init_animation(RELEASE_ANIM);
        }
        s32 attackCount = 5 + (o->oDespairHits*o->oDespairHits);
        if (o->oDespairSwipes <= attackCount) {
            if (is_timer()) {
                spawn_crystal_attack();
            }
        } else {
            change_attack(RESETTING, SECONDS_TO_TICKS(2), 0);
        }
    }
}

void throw_crystal(Vec3f dir) {

    struct Object* crystal = spawn_object(o, MODEL_CRYSTAL_PROJECTILE, bhvCrystalProjectile);

    // Set 2nd byte to FALSE because it not vertical crystal
    crystal->oBehParams2ndByte = FALSE;

    crystal->oPosY = 160.0f;

    // Reusing oHome to store target direction
    crystal->oHomeX = dir[0];
    crystal->oHomeY = dir[1];
    crystal->oHomeZ = dir[2];

    f32 time = 0.75f;

    time -= (o->oDespairHits*0.1f);

    o->oDespairAttackCooldown = SECONDS_TO_TICKS(time);
    o->oDespairSwipes++;
}

// Throw torpedo at mario
void update_throwing(void) {

    s32 isCooldown = is_cooldown();

    Vec3f dir;
    direction_to_target(dir, gMarioState->pos);
    o->oFaceAngleYaw = atan2s(dir[2], dir[0]);

    if (isCooldown) {
        cur_obj_init_animation(SWIPE_1_ANIM);
        throw_crystal(dir);
    } else {
        if (cur_obj_check_if_at_animation_end()) {
            cur_obj_init_animation(TORPEDO_CHARGE_ANIM);
        }
    }

    s32 attackCount = 3 + (o->oDespairHits * o->oDespairHits);


    if (o->oDespairSwipes == attackCount) {
        change_attack(RESETTING, SECONDS_TO_TICKS(2), NO_TIME);
    }
}

// Bounce around stage or swirl inwards while spinning, afterwards, transition to STUN state
void update_spin(void) {

    cur_obj_init_animation(SPIN_ANIM);

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
    cur_obj_init_animation(STUN_ANIM);

    s32 ticksSinceStunned = STUN_TIMER - o->oDespairAttackTimer;

    // For the first second
    if (ticksSinceStunned <= 30) {
        // Returns 0 - 1 based on how far into the second we are
        f32 ratio = (f32)ticksSinceStunned / 30.0f;

        o->oFaceAngleYaw -= degrees_to_angle(40.0f * (1.0f - ratio));
    }

    s32 b = does_intersect_with_cylinder(&o->oPosX, sDespairSpinHitbox.height, sDespairSpinHitbox.radius, &gMarioObject->oPosX);

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

        if (sDespairDialogFlag && gMarioState->action == ACT_IDLE) {
            if (gDialogResponse != 0) {
                disable_time_stop_including_mario();
                change_attack(IDLE, o->oDespairAttackCooldown, o->oDespairAttackTimer);
                sDespairDialogFlag = FALSE;
            }
            else {
                enable_time_stop_including_mario();
                create_dialog_box(DIALOG_172);
            }
        } else {
            change_attack(IDLE, o->oDespairAttackCooldown, o->oDespairAttackTimer);
        }
    }
}

void update_hurt(void) {

    cur_obj_init_animation(HURT_ANIM);

    if (cur_obj_check_if_at_animation_end()) {
        change_attack(RESETTING, o->oDespairAttackCooldown, o->oDespairAttackTimer);
    }

}

void update_intro(void) {
    cur_obj_init_animation(IDLE_ANIM);

    if (gMarioState->action == ACT_IDLE) {
        if (gDialogResponse != 0) {
            disable_time_stop_including_mario();
            change_attack(IDLE, SECONDS_TO_TICKS(1), NO_TIME);
        }
        else {
            enable_time_stop_including_mario();
            create_dialog_box(DIALOG_170);
        }
    }
}

void update_death_regular(void) {
    if (gMarioState->action == ACT_IDLE) {
        if (gDialogResponse != 0) {
            disable_time_stop_including_mario();
            obj_mark_for_deletion(o);
        }
        else {
            enable_time_stop_including_mario();
            create_dialog_box(DIALOG_171);
        }
    }
}

void update_death_true(void) {
    if (gMarioState->action == ACT_IDLE) {
        if (gDialogResponse != 0) {
            disable_time_stop_including_mario();
            obj_mark_for_deletion(o);
        }
        else {
            enable_time_stop_including_mario();
            create_dialog_box(DIALOG_173);
        }
    }
}

void bhv_despair_init(void) {
    gMarioState->pos[1] = 1000.0f;
    set_mario_action(gMarioState, ACT_SPAWN_NO_SPIN_AIRBORNE, 0);

    change_attack(INTRO, NO_COOLDOWN, NO_TIME);

    f32 *startPos = sAnchorPositions[NORTH];
    o->oPosX = startPos[0];
    o->oPosY = startPos[1];
    o->oPosZ = startPos[2];

    o->oDespairAttackCooldown = SECONDS_TO_TICKS(3);

    if (save_file_get_total_star_count(gCurrSaveFileNum - 1, COURSE_MIN - 1, COURSE_MAX - 1) > 12 || TRUE) {
        o->oDespairMaxHits = 5;
    } else {
        o->oDespairMaxHits = 3;
    }
}

void bhv_despair_loop(void) {
    print_text_fmt_int(20, 20, "%d", o->oAnimState);

    switch (o->oAction) {
        case IDLE:               update_idle();          break;
        case INTRO:              update_intro();         break;
        case HOMING:             update_homing();        break;
        case THROWING_TORPEDO:   update_throwing();      break;
        case LAUNCHING_TORPEDOS: update_torpedo();       break;
        case SPINNING_ATTACK:    update_spin();          break;
        case CHARGING:           update_charging();      break;
        case RESETTING:          update_resetting();     break;
        case STUNNED:            update_stunned();       break;
        case DEATH_REGULAR:      update_death_regular(); break;
        case DEATH_TRUE:         update_death_true();    break;
        case HURT:               update_hurt();          break;
        default: break;
    }

    update_gfx();
}