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
#include "levels/cutscene_6/header.h"
#include "levels/cutscene_7/header.h"
#include "levels/intro/header.h"
#include "levels/ending/header.h"
#include "farcall.h"

#include "config.h"
#include "game/print.h"

#include "game/object_list_processor.h"

const LevelScript level_cutscene_scene_6_bluedrop_endscreen_warp[] = {
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 24, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 24, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),

    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_LEVEL_SCRIPT, _endingSegmentRomStart, _endingSegmentRomEnd, level_ending_entry, _endingSegmentBssStart, _endingSegmentBssEnd),
};

const LevelScript level_cutscene_scene_6_0[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_6_segment_7SegmentRomStart, _cutscene_6_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_6_0),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC2_CD4),
    SLEEP(/*frames*/ 90),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_6SegmentRomStart, _cutscene_6SegmentRomEnd, level_cutscene_scene_6_1, _cutscene_6SegmentBssStart, _cutscene_6SegmentBssEnd),
};

const LevelScript level_cutscene_scene_6_1[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_6_segment_7SegmentRomStart, _cutscene_6_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_6_1),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC2_CD5),
    SLEEP(/*frames*/ 75),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),

    CALL(/*arg*/ 0, /*func*/ should_warp_to_true_ending),
    JUMP_IF(/*op*/ OP_EQ, /*arg*/ FALSE,  level_cutscene_scene_6_bluedrop_endscreen_warp),

    CALL_LOOP(/*arg*/ 24, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_6SegmentRomStart, _cutscene_6SegmentRomEnd, level_cutscene_scene_6_2, _cutscene_6SegmentBssStart, _cutscene_6SegmentBssEnd),
};

const LevelScript level_cutscene_scene_6_2[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_6_segment_7SegmentRomStart, _cutscene_6_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_6_2),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC2_CD6),
    SLEEP(/*frames*/ 55),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 16, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _cutscene_6SegmentRomStart, _cutscene_6SegmentRomEnd, level_cutscene_scene_6_3, _cutscene_6SegmentBssStart, _cutscene_6SegmentBssEnd),
};

const LevelScript level_cutscene_scene_6_3[] = {
    INIT_LEVEL(),
    FIXED_LOAD(/*loadAddr*/ _goddardSegmentStart, /*romStart*/ _goddardSegmentRomStart, /*romEnd*/ _goddardSegmentRomEnd),
    LOAD_RAW(/*seg*/ 0x13, _behaviorSegmentRomStart, _behaviorSegmentRomEnd),
    LOAD_YAY0(/*seg*/ 0x07, _cutscene_6_segment_7SegmentRomStart, _cutscene_6_segment_7SegmentRomEnd),

    // Load Scam Warning Screen
    ALLOC_LEVEL_POOL(),
    AREA(/*index*/ 1, geo_cutscene_scene_6_3),
    END_AREA(),
    FREE_LEVEL_POOL(),

    // Start animation
    LOAD_AREA(/*area*/ 1),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    SLEEP(/*frames*/ 15),
    PLAY_SOUND_EFFECT(SOUND_ELVOICE_CUTSCENE_SC2_CD7),
    SLEEP(/*frames*/ 105),
    CALL_LOOP(/*arg*/ -1, /*func*/ image_screen_press_button),
    PLAY_SOUND_EFFECT(SOUND_MENU_MESSAGE_NEXT_PAGE),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 24, /*color*/ 0x00, 0x00, 0x00),
    CALL_LOOP(/*arg*/ 24, /*func*/ image_screen_cannot_press_button),
    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 20),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_LEVEL_SCRIPT, _endingSegmentRomStart, _endingSegmentRomEnd, level_ending_entry, _endingSegmentBssStart, _endingSegmentBssEnd),
};
