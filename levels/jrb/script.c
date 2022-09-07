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
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
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
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_JRB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_JRB, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_JRB, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_CASTLE, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_SSL, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_JRB, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF2, LEVEL_TTM, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2094, 600, 20616, 0, 125, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 16596, -1700, -9024, 0, -65, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -16873, 6100, -18511, 0, 10, 0, 0x00BC0000, bhvFadingWarp),
		MARIO_POS(0x01, 0, 2400, 800, 2600),
		OBJECT(MODEL_NONE, 2400, 800, 2600, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, -2991, 0, 21244, 0, -55, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 17598, -2600, -9491, 0, -65, 0, 0x00CB0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, -17065, 5500, -19599, 0, 10, 0, 0x00CC0000, bhvPortalWarp),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_ALONE, 0x01, 0x02),
		SET_ECHO(0x0E, 0x10),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, jrb_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, 0, 0, 7200),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xEB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_JRB, 0x02, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_JRB, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 0, 410, 25000, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 1185, 7300, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 0, 7000, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, -10, 8200, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, 1710, 0, 15400, 0, -90, 0, 0x00DA0000, bhvDoorWarp),
		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_DARKNESS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_DARKNESS, 0x01, 0x02),
		SET_ECHO(0x0E, 0x10),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, jrb_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x03, 0, 0, -30000),
		WARP_NODE(0xDA, LEVEL_WF, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_WF, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CUSTOM_DOOR_B, 0, 6875, 15519, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_CUSTOM_DOOR_B, 0, 6875, -14481, 0, -180, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_NONE, -450, 4751, 14742, 0, 0, 0, 0x00C90000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -450, 4751, -15258, 0, 0, 0, 0x00C90000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -2, 3197, -18706, 0, 0, 0, 0x04000000, bhvStar),
		OBJECT(MODEL_NONE, -7, 4375, 14284, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, 0, 4375, 14805, 0, -180, 0, 0x00DA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, 0, 4375, -15195, 0, -180, 0, 0x00DB0000, bhvDoorWarp),
		TERRAIN(jrb_area_3_collision),
		ROOMS(jrb_area_3_collision_rooms),
		MACRO_OBJECTS(jrb_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_DARKNESS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_DARKNESS, 0x01, 0x02),
		SET_ECHO(0x0E, 0x10),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, jrb_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xD2, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -1299, 400, -3352, 0, 0, 0, 0x05000000, bhvStar),
		OBJECT(MODEL_NONE, 0, 0, -300, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 0, 0, 10, 0, 0, 0, 0x00DA0000, bhvDoorWarp),
		TERRAIN(jrb_area_4_collision),
		MACRO_OBJECTS(jrb_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_DARKNESS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_DARKNESS, 0x09, 0x0A),
		SET_ECHO(0x20, 0x20),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 2400, 800, 2600),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
