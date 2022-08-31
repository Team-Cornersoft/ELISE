#include "../print.h"
#include "engine/math_util.h"

static struct ObjectHitbox sDespairSwipeHitbox = {
    /* interactType:      */ INTERACT_DAMAGE,
    /* downOffset:        */ 200,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 0,
    /* height:            */ 0,
    /* hurtboxRadius:     */ 200,
    /* hurtboxHeight:     */ 100,
};

void bhv_despair_swipe_loop(void) {

    // Manually checking hitbox collision, since hitboxes apparently only work if mario is moving or the hitbox moves into him

    // This effectively doubles the hitbox size, making it hit x units above and x units below
    if (does_intersect_with_cylinder(&o->oPosX, sDespairSwipeHitbox.hurtboxHeight, sDespairSwipeHitbox.hurtboxRadius, &gMarioObject->oPosX) && gMarioState->invincTimer <= 0) {
        hurt_and_set_mario_action(gMarioState, ACT_BACKWARD_GROUND_KB, 0, 0xc);
        gMarioState->invincTimer = 50;
        obj_mark_for_deletion(o);
    }


    if (o->oTimer == 10) {
        obj_mark_for_deletion(o);
    }
}