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
#include "levels/lll/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _fire_yay0SegmentRomStart, _fire_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, lll_geo_0009E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, lll_geo_0009F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, lll_geo_000A10), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, lll_geo_000A28), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, lll_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, lll_geo_000A60), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, lll_geo_000A90), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, lll_geo_000AA8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, lll_geo_000AC0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, lll_geo_000AD8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, lll_geo_000AF0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART, lll_geo_000B20), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS, lll_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING, lll_geo_000BB0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM, lll_geo_000BC8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS, lll_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM, lll_geo_000BF8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1, lll_geo_bowser_puzzle_piece_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2, lll_geo_bowser_puzzle_piece_2), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3, lll_geo_bowser_puzzle_piece_3), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4, lll_geo_bowser_puzzle_piece_4), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5, lll_geo_bowser_puzzle_piece_5), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6, lll_geo_bowser_puzzle_piece_6), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7, lll_geo_bowser_puzzle_piece_7), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8, lll_geo_bowser_puzzle_piece_8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9, lll_geo_bowser_puzzle_piece_9), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10, lll_geo_bowser_puzzle_piece_10), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11, lll_geo_bowser_puzzle_piece_11), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12, lll_geo_bowser_puzzle_piece_12), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13, lll_geo_bowser_puzzle_piece_13), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14, lll_geo_bowser_puzzle_piece_14), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK, lll_geo_000DD0), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG, lll_geo_000DE8), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM, lll_geo_000A78), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE, lll_geo_000B50), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE, lll_geo_000B68), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM, lll_geo_000B80), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM, lll_geo_000B98), 
	LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP, lll_geo_000EA8), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, lll_area_1),
		WARP_NODE(0x0A, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_LLL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_LLL, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_LLL, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_LLL, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBD, LEVEL_LLL, 0x01, 0xBD, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBE, LEVEL_LLL, 0x01, 0xBE, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_BOB, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_WF, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_BBH, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCD, LEVEL_LLL, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCE, LEVEL_DDD, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 600, 6100, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, -4300, -6000, 0, 0, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 5900, 3600, 0, 0, -90, 0, 0x00BC0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 5900, 9900, 0, 0, -90, 0, 0x00BD0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -5900, 9900, 0, 2, 90, 2, 0x00BE0000, bhvFadingWarp),
		MARIO_POS(0x01, -180, 0, -300, 5900),
		OBJECT(MODEL_NONE, 0, -300, 5900, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -300, 7200, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -5010, -7100, 0, 0, 0, 0x00CB0100, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 7200, 2900, 0, 0, 90, 0, 0x00CC0300, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 7200, 9000, 0, 0, 90, 0, 0x00CD0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, -7200, 9000, 0, 0, -90, 0, 0x00CE0000, bhvPortalWarp),
		TERRAIN(lll_area_1_collision),
		MACRO_OBJECTS(lll_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_SOUND_PLAYER, 0x01, 0x02),
		SET_ECHO(0x0E, 0x10),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, lll_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_LLL, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_LLL, 0x02, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_LLL, 0x02, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_LLL, 0x02, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_LLL, 0x02, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_LLL, 0x01, 0xBD, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 6455, 2800, -5003, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -25396, -2944, 25103, 0, 135, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 21781, 2648, -19945, 0, 125, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -168, 3530, -7601, 0, 130, 0, 0x00BC0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 22475, 2300, -18733, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_NONE, -25396, -3776, 25103, 0, -45, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -4076, -4999, -10948, 0, 0, 0, 0x50CA0000, bhvWarp),
		OBJECT(MODEL_NONE, 19436, -3755, -20506, 0, 0, 0, 0x50CB0000, bhvWarp),
		OBJECT(MODEL_PORTAL_WARP, -26069, -3965, 25938, 0, -45, 0, 0x00CC0200, bhvPortalWarp),
		TERRAIN(lll_area_2_collision),
		ROOMS(lll_area_2_collision_rooms),
		MACRO_OBJECTS(lll_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_SOUND_PLAYER, 0x05, 0x06),
		SET_ECHO(0x0E, 0x0E),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, -300, 5900),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
