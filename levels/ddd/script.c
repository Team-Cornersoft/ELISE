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
#include "levels/ddd/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB, ddd_geo_0004A0), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE, ddd_geo_000450), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ddd_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_DDD, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_LLL, 0x01, 0xBE, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_SSL, 0x01, 0xDA, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, -300, 800, -13800),
		INSTANT_WARP(0x01, 0x01, 300, -800, 13800),
		INSTANT_WARP(0x02, 0x01, -3300, 800, -12200),
		INSTANT_WARP(0x03, 0x01, 3300, -800, 12200),
		OBJECT(MODEL_CUSTOM_DOOR_A, -7400, 0, 2010, 0, 0, 0, 0x00DA0000, bhvDoorWarp),
		MARIO_POS(0x01, -180, -7397, 0, 1051),
		OBJECT(MODEL_CUSTOM_DOOR_A, 4100, 500, -890, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, -7397, 0, 1051, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 7200, 405, 6520, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_PORTAL_WARP, 7200, -790, 7120, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		TERRAIN(ddd_area_1_collision),
		ROOMS(ddd_area_1_collision_rooms),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_CHIMES_LPF, 0x00, 0x00),
		SET_ECHO(0x0A, 0x0A),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -7397, 0, 1051),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
