#include "game/print.h"

void bhv_dream_key_init(void) {
    o->oHomeY = o->oPosY;
    // o->oFaceAngleRoll = -0x4000;
}

void bhv_dream_key_loop(void) {
    cur_obj_scale(0.5f);

    o->oFaceAngleYaw += degrees_to_angle(3.0f);

    // print_text_fmt_int(20, 20, "%d", o->oHomeY);

    if (o->oHomeY > 200.0f) {
        o->oHomeY = o->oPosY;
        o->oPosY -= 5.0f;
        o->oTimer = 0;
    } else {
        o->oPosY = sinf(o->oTimer / 30.0f) * 50 + o->oHomeY;

        if (o->oDistanceToMario < 200.0f && o->oAction != 1) {
            // enable_time_stop_including_mario(); // You can't die during a warp transition anyway
            play_sound(SOUND_MENU_CUSTOM_BOSS_WARP, gGlobalSoundSource);
            level_trigger_warp(gMarioState, WARP_OP_RED_DROP_ENDING, TRUE);
            o->oAction = 1;
        }
    }
}
