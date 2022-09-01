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

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_BOB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_BOB, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_CASTLE, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_LLL, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_BOB, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_BOB, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 1185, 8500, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 1185, -8500, 0, 0, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 610, 3368, 0, 0, 0, 0x00BC0000, bhvFadingWarp),
		MARIO_POS(0x01, 0, 0, 200, 0),
		OBJECT(MODEL_NONE, 0, 0, 1500, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -10, 9600, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -10, -9600, 0, 0, 0, 0x00CB0000, bhvPortalWarp),
		OBJECT(MODEL_NONE, -17, 808, -1, 0, 0, 0, 0x08CC0000, bhvWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_LOSS, 0x01, 0x02),
		SET_ECHO(0x16, 0x18),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_BOB, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_BOB, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_BOB, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 614, 2364, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 410, 584, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 0, 1500, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -276, 3362, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_NONE, -17, 808, -1, 0, 0, 0, 0x08CB0000, bhvWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
