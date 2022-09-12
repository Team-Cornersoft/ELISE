/* Behavior information:
    Params:
    1: Unused
    2: Texture
    3: Ticks between swaps - Defaults to 15 (Half a second)
    4: Unused

    ex: 0x00 02 03 00 - Loads model 2 (DINO), swaps textures every 3 frames
    ex: 0x00 00 00 00 - Loads model 0 (CAT), swaps textures every 15 frames
*/

#define ANIMAL_MODEL(a) MODEL_ANIMATED_WALL_ ##a##_A, MODEL_ANIMATED_WALL_ ##a##_B

u16 models[] = {
    ANIMAL_MODEL(CAT),
    ANIMAL_MODEL(DOG),
    ANIMAL_MODEL(DINO),
    ANIMAL_MODEL(BIRD),
    ANIMAL_MODEL(ALIEN),
};

void update_model(void) {
    //This will be undesirable if you go over the current limit of textures
    cur_obj_set_model(models[o->oBehParams2ndByte*2 + (o->oAnimatedWallState)]);
}

void swap_texture(void) {
    o->oAnimatedWallState = !o->oAnimatedWallState;
    update_model();
}

void bhv_animated_wall_init(void) {
    update_model();
}

void bhv_animated_wall_loop(void) {
    s32 timer = (o->oBehParams & 0x0000FF00) >> 8;

    if (!timer) {
        timer = 15;
    }

    if (o->oTimer % timer == 0) {
        swap_texture();
    }
}