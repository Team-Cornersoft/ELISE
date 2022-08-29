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
#include "levels/bbh/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bbh_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _spooky_yay0SegmentRomStart, _spooky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group9_yay0SegmentRomStart, _group9_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR, haunted_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP, geo_bbh_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM, geo_bbh_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF, geo_bbh_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR, geo_bbh_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND, geo_bbh_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB, geo_bbh_000658), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bbh_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_JRB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_JRB, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_JRB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_LLL, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_BBH, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_BBH, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCD, LEVEL_BBH, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 1582, -10280, 0, 0, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -10900, -1518, 3020, 0, 90, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 6000, -918, 5320, 0, -135, 0, 0x00BC0000, bhvFadingWarp),
		MARIO_POS(0x01, 0, 0, 1082, -10280),
		OBJECT(MODEL_NONE, 1400, 100, -8900, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2300, -1000, -7000, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1500, -2100, -5100, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 300, -3200, -3400, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -2300, -3400, -500, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3700, -3000, 1200, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -6000, -2600, 2300, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -8500, -2400, 2900, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2200, -300, 5400, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 2200, -1000, 3500, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 3900, -1700, 2400, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 5700, -2100, 3700, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 4100, 200, 6300, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -1600, 500, -9000, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -3500, -100, -8500, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -5400, -800, -9200, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 5300, -5800, -1900, 0, 0, 0, 0x00680000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 5800, 1600, 5700, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 1082, -10280, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -6900, -1538, -10980, 0, 0, 0, 0x10CA0000, bhvWarp),
		OBJECT(MODEL_NONE, -11900, -4138, 1220, 0, 0, 0, 0x10CB0000, bhvWarp),
		OBJECT(MODEL_NONE, 7200, -3338, 7620, 0, 0, 0, 0x10CC0000, bhvWarp),
		OBJECT(MODEL_NONE, 11700, -6838, -4880, 0, 0, 0, 0x10CD0000, bhvWarp),
		TERRAIN(bbh_area_1_collision),
		MACRO_OBJECTS(bbh_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_UNDERGROUND, 0x01, 0x02),
		SET_ECHO(0x0A, 0x0A),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 1082, -10280),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
