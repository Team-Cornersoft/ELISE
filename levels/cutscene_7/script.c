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
#include "levels/cutscene_7/header.h"
#include "levels/intro/header.h"
#include "farcall.h"

#include "config.h"
#include "game/print.h"

#include "game/object_list_processor.h"

const LevelScript level_cutscene_scene_7_0[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_7_segment_7SegmentRomStart, _cutscene_7_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_7_0),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_7SegmentRomStart, _cutscene_7SegmentRomEnd, level_cutscene_scene_7_1, _cutscene_7SegmentBssStart, _cutscene_7SegmentBssEnd),
};

const LevelScript level_cutscene_scene_7_1[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_7_segment_7SegmentRomStart, _cutscene_7_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_7_1),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_7SegmentRomStart, _cutscene_7SegmentRomEnd, level_cutscene_scene_7_2, _cutscene_7SegmentBssStart, _cutscene_7SegmentBssEnd),
};

const LevelScript level_cutscene_scene_7_2[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_7_segment_7SegmentRomStart, _cutscene_7_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_7_2),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_7SegmentRomStart, _cutscene_7SegmentRomEnd, level_cutscene_scene_7_3, _cutscene_7SegmentBssStart, _cutscene_7SegmentBssEnd),
};

const LevelScript level_cutscene_scene_7_3[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_7_segment_7SegmentRomStart, _cutscene_7_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_7_3),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    // EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_7SegmentRomStart, _cutscene_7SegmentRomEnd, level_intro_mario_head_regular, _cutscene_7SegmentBssStart, _cutscene_7SegmentBssEnd),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _introSegmentRomStart, _introSegmentRomEnd, level_intro_mario_head_regular, _introSegmentBssStart, _introSegmentBssEnd),
};
