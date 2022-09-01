
static struct ObjectHitbox sCrystalProjectileHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 200,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 115,
    /* height:            */ 400,
    /* hurtboxRadius:     */ 105,
    /* hurtboxHeight:     */ 225,
};

void falling_crystal_loop(void) {
    if (o->oTimer == 0) {
        o->oFaceAnglePitch = degrees_to_angle(-90.0f);
    }

    o->oPosY -= 30.0f;

    o->oFaceAngleYaw += degrees_to_angle(10.0f);

    if (o->oPosY <= -10.0f) {
        spawn_mist_particles_with_sound(SOUND_GENERAL2_BOBOMB_EXPLOSION);
        mark_obj_for_deletion(o);
    }
}

void bhv_crystal_projectile_loop(void) {
    obj_set_hitbox(o, &sCrystalProjectileHitbox);

    if (o->oBehParams2ndByte) {
        falling_crystal_loop();
    }
}