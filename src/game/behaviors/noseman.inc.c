#include "../print.h"
#include "../ingame_menu.h"

#define NOSEMAN_ELISE_DIALOG_ID 0x04

void update_noseman_idle(void) {
    // char text[25];
    
    // Map from 00 - B4 which represents 00 - 180
    // B4 would be full 360, which is two 180 sides
    s32 talkAngle = ((u32) o->oBehParams >> 24) * 0x10000 / 360;

    s16 angle = o->oAngleToMario - o->oFaceAngleYaw;

    if (ABS((s32) angle) < talkAngle && cur_obj_can_mario_activate_elise_textbox(1000.0f, 1400.0f)) {
        o->oAction = NOSEMAN_TALKING_TO_ELISE;
        u8 dialogId = GET_BPARAM2(o->oBehParams);
        overwrite_elise_dialog_prompt(NOSEMAN_ELISE_DIALOG_ID, dialogId);
    }
}

void update_noseman_talking(void) {
    u8 dialogID = NOSEMAN_ELISE_DIALOG_ID;
    switch (o->oBehParams2ndByte) {
        case DIALOG_015:
            dialogID = 0x0B;
            break;
        case DIALOG_016:
            dialogID = 0x0C;
            break;
        case DIALOG_017:
            dialogID = 0x08;
            break;
        case DIALOG_018:
            dialogID = 0x0D;
            break;
        case DIALOG_019:
            dialogID = 0x0E;
            break;
        case DIALOG_020:
            dialogID = 0x0F;
            break;
        case DIALOG_021:
            dialogID = 0x10;
            break;
        case DIALOG_022:
            dialogID = 0x09;
            break;
        case DIALOG_023:
            dialogID = 0x0A;
            break;
    }

    if (set_elise_dialog_prompt(dialogID) == 0) {
        o->oAction = NOSEMAN_TALKING_ACTIVE;
        return;
    }

    s32 talkAngle = ((u32) o->oBehParams >> 24) * 0x10000 / 360;

    s16 angle = o->oAngleToMario - o->oFaceAngleYaw;

    if (!(ABS((s32) angle) < talkAngle && cur_obj_can_mario_activate_elise_textbox(1000.0f, 1400.0f)))
        o->oAction = NOSEMAN_IDLE;
}

void update_noseman_active_talking(void) {
    if (o->oTimer == 0 && !o->oNosemanStartedCutscene) {
        start_object_cutscene(CUTSCENE_ELISE_DIALOG, o);
        o->oNosemanStartedCutscene = TRUE;
    }

    if (!(gMarioState->action & ACT_FLAG_INTANGIBLE)) {
        o->oAction = NOSEMAN_UNABLE_TO_TALK;
        return;
    }

    s16 angle = approach_angle(gMarioState->faceAngle[1], mario_obj_angle_to_object(gMarioState, o), 0x600);
    if (gMarioState->faceAngle[1] == angle) {
        o->oAction = NOSEMAN_UNABLE_TO_TALK;
        return;
    }

    gMarioState->faceAngle[1] = angle;
}

void update_noseman_done_talking(void) {    
    switch (o->oBehParams2ndByte) {
        case DIALOG_015:
            o->oBehParams2ndByte = DIALOG_016;
            break;
        case DIALOG_022:
            o->oBehParams2ndByte = DIALOG_023;
            break;
        default:
            o->oAction = NOSEMAN_DEACTIVATED;
            return;
    }

    o->oAction = NOSEMAN_TALKING_TO_ELISE;
}

void bhv_noseman_init(void) {
    // I'm 99% sure this is always set to 0, but might as well make sure
    o->oAction = NOSEMAN_IDLE;
    o->oNosemanStartedCutscene = FALSE;
}

void bhv_noseman_loop(void) {
    if (gMarioState->health < 0x0100)
        return;

    switch(o->oAction) {
        case NOSEMAN_IDLE:             update_noseman_idle();    break;
        case NOSEMAN_TALKING_TO_ELISE: update_noseman_talking(); break;
        case NOSEMAN_TALKING_ACTIVE:   update_noseman_active_talking();  break;
        case NOSEMAN_UNABLE_TO_TALK:   update_noseman_done_talking();  break;
    }
    
    if (o->oTimer > 0x10000)
        o->oTimer = 0x10000;
}
