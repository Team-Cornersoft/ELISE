#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"
#include "levels/intro/header.h"
#include "game/area.h"
#include "menu/title_screen.h"
#include "game/texscroll.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_courtyard_area_1),
		WARP_NODE(0x0A, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2400, -800, 0, 0, -180, 0, 0x000A0000, bhvAirborneDeathWarp),
		MARIO_POS(0x01, -180, -2400, -800, 0),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -2400, -800, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};

const LevelScript level_ccy_title_screen[] = {
    INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 

	ALLOC_LEVEL_POOL(),
	AREA(1, castle_courtyard_area_1),
	END_AREA(),
	FREE_LEVEL_POOL(),

    LOAD_AREA(/*area*/ 1),
	SET_MENU_MUSIC_WITH_REVERB(SEQ_LEVEL_GRASS, 1, 2),

    CALL(/*arg*/ 0, /*func*/ load_mario_area),

    CALL(/*arg*/ 0, /*func*/ init_image_screen_press_button),
    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_FROM_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    JUMP_LINK_PUSH_ARG(75),
    	CALL(/*arg*/ 0, /*func*/ scroll_textures),
        SLEEP(/*frames*/ 1),
    JUMP_N_TIMES(),
    
	// To compensate for the early sleep below
    CALL(/*arg*/ 0, /*func*/ scroll_textures),

    LOOP_BEGIN(),
		// This sleep comes early because of the way 'image_screen_press_button' is written.
		// 'image_screen_cannot_press_button' needs to be called on the same frame if the first returns TRUE, or else the button flickers.
        SLEEP(/*frames*/ 1),
    	CALL(/*arg*/ 0, /*func*/ scroll_textures),
    	CALL(/*arg*/ -1, /*func*/ image_screen_press_button),
    LOOP_UNTIL(/*op*/ OP_EQ, /*arg*/ TRUE),

	// To compensate for that early sleep above
    CALL(/*arg*/ -1, /*func*/ image_screen_cannot_press_button),
    SLEEP(/*frames*/ 1),

    TRANSITION(/*transType*/ WARP_TRANSITION_FADE_INTO_COLOR, /*time*/ 16, /*color*/ 0x00, 0x00, 0x00),
    JUMP_LINK_PUSH_ARG(16),
    	CALL(/*arg*/ 0, /*func*/ scroll_textures),
    	CALL(/*arg*/ -1, /*func*/ image_screen_cannot_press_button),
        SLEEP(/*frames*/ 1),
    JUMP_N_TIMES(),

    UNLOAD_AREA(/*area*/ 1),
    CLEAR_LEVEL(),
    SLEEP(/*frames*/ 2),
    EXIT_AND_EXECUTE_WITH_CODE(/*seg*/ SEGMENT_MENU_INTRO, _introSegmentRomStart, _introSegmentRomEnd, level_intro_mario_head_regular, _introSegmentBssStart, _introSegmentBssEnd),
};
