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
#include "levels/sl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE, sl_geo_000390), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE, sl_geo_000360), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK, sl_geo_000378), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE, snow_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sl_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xDD, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_SL, 0x01, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_SL, 0x01, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDD, LEVEL_SL, 0x01, 0xDE, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDE, LEVEL_SL, 0x01, 0xDD, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDF, LEVEL_SL, 0x01, 0xD0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD0, LEVEL_SL, 0x01, 0xDF, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD1, LEVEL_SL, 0x01, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD2, LEVEL_SL, 0x01, 0xD3, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD3, LEVEL_SL, 0x01, 0xD2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD4, LEVEL_SL, 0x01, 0xD2, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CUSTOM_DOOR_A, -3200, 1700, -14100, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_CUSTOM_DOOR_C, -15200, -4700, 6600, 0, -180, 0, 0x00D00000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, -2600, 1300, -13500, 0, -135, 0, 0x00D10000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, -14750, 8970, 11340, 0, -100, 0, 0x00D40000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, -13020, 3143, -2140, 0, 168, 0, 0x00D20000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, 17810, 8210, -8974, 0, -37, 0, 0x00D30000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, -1800, -6000, 1800, 0, -45, 0, 0x00DA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, 1800, -6000, -1800, 0, 135, 0, 0x00DB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, 2500, -3800, -10700, 0, 90, 0, 0x00DC0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, 11200, -1400, -3300, 0, -45, 0, 0x00DD0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, 14100, 3100, 13500, 0, -90, 0, 0x00DE0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_C, -2500, -6400, 14100, 0, -45, 0, 0x00DF0000, bhvDoorWarp),
		MARIO_POS(0x01, -180, 0, -6000, 0),
		OBJECT(MODEL_NONE, -2600, -6400, 12710, 0, 0, 0, 0xB4140000, bhvNoseman),
		OBJECT(MODEL_NONE, -2300, 1300, -14390, 0, 0, 0, 0xB4150000, bhvNoseman),
		OBJECT(MODEL_CUSTOM_DOOR_A, -15400, 9370, 11100, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_NONE, 0, -6000, 0, 0, -180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(sl_area_1_collision),
		MACRO_OBJECTS(sl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_TIME),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_TIME, 0x01, 0x02),
		SET_ECHO(0x10, 0x13),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, -6000, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
