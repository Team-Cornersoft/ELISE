#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/area.h"
#include "game/level_update.h"
#include "menu/title_screen.h"

#include "levels/scripts.h"
#include "levels/menu/header.h"

#include "actors/common0.h"
#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/cutscene_1/header.h"
#include "levels/cutscene_2/header.h"
#include "levels/intro/header.h"
#include "farcall.h"

#include "config.h"
#include "game/print.h"

#include "game/object_list_processor.h"

const LevelScript level_cutscene_scene_1_0[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_1_segment_7SegmentRomStart, _cutscene_1_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_1_0),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC0_CD4),
    SLEEP(/*frames*/ 120),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_1SegmentRomStart, _cutscene_1SegmentRomEnd, level_cutscene_scene_1_1, _cutscene_1SegmentBssStart, _cutscene_1SegmentBssEnd),
};

const LevelScript level_cutscene_scene_1_1[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_1_segment_7SegmentRomStart, _cutscene_1_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_1_1),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC0_CD5),
    SLEEP(/*frames*/ 115),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_1SegmentRomStart, _cutscene_1SegmentRomEnd, level_cutscene_scene_1_2, _cutscene_1SegmentBssStart, _cutscene_1SegmentBssEnd),
};

const LevelScript level_cutscene_scene_1_2[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_1_segment_7SegmentRomStart, _cutscene_1_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_1_2),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC0_CD6),
    SLEEP(/*frames*/ 110),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    STOP_MUSIC(/*fadeOutTime*/ 0x0200),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 60),
    SET_REG(/*value*/ START_LEVEL),
    EXIT_AND_EXECUTE(/*seg*/ SEGMENT_GLOBAL_LEVEL_SCRIPT, _scriptsSegmentRomStart, _scriptsSegmentRomEnd, level_main_scripts_entry),
};

// END FIRST CUTSCENE EXCHANGE

const LevelScript level_cutscene_scene_1_3[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_1_segment_7SegmentRomStart, _cutscene_1_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_1_3),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_2SegmentRomStart, _cutscene_2SegmentRomEnd, level_cutscene_scene_2_0, _cutscene_2SegmentBssStart, _cutscene_2SegmentBssEnd),
};
