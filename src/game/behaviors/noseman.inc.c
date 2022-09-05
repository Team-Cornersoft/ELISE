#include "../print.h"

#define NOSEMAN_ELISE_DIALOG_ID 4

enum NosemanState {
    NOSEMAN_IDLE,
    NOSEMAN_TALKING_TO_ELISE,
    NOSEMAN_UNABLE_TO_TALK,
};

void update_noseman_idle(void) {
    // char text[25];
    
    // Map from 00 - B4 which represents 00 - 180
    // B4 would be full 360, which is two 180 sides
    f32 talkAngle = GET_BPARAM1(o->oBehParams);

    f32 angle = angle_to_degrees(o->oAngleToMario);

    if (absf(angle) < talkAngle && cur_obj_can_mario_activate_textbox_2(900.0f, 1400.0f)) {
        o->oAction = NOSEMAN_TALKING_TO_ELISE;
        u8 dialogId = GET_BPARAM2(o->oBehParams);
        overwrite_elise_dialog_prompt(NOSEMAN_ELISE_DIALOG_ID, dialogId);
    }
}

void update_noseman_talking(void) {
    s32 err = 0;
    if (o->oSubAction > 15) {
        err = set_elise_dialog_prompt(NOSEMAN_ELISE_DIALOG_ID);
    } else {
        o->oSubAction++;
    }

    if (err == -2) {
        o->oDialogState = DIALOG_STATUS_STOP_DIALOG;
    }

    if (cur_obj_update_dialog_with_cutscene(MARIO_DIALOG_LOOK_UP,
            DIALOG_FLAG_NONE, CUTSCENE_DIALOG, DIALOG_BLANK)) {
        disable_time_stop_including_mario();
        o->oAction = NOSEMAN_UNABLE_TO_TALK;
    }

}

void update_noseman_silent(void) {
    
}

void bhv_noseman_init(void) {
    // I'm 99% sure this is always set to 0, but might as well make sure
    o->oAction = 0;
}

void bhv_noseman_loop(void) {
    switch(o->oAction) {
        case NOSEMAN_IDLE:             update_noseman_idle();    break;
        case NOSEMAN_TALKING_TO_ELISE: update_noseman_talking(); break;
        case NOSEMAN_UNABLE_TO_TALK:   update_noseman_silent();  break;
    }
}
