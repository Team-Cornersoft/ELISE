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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(0x0A, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_HMC, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, 10000, 10000, 0),
		INSTANT_WARP(0x01, 0x01, 0, 10000, 0),
		INSTANT_WARP(0x02, 0x01, 41000, 15200, -3000),
		WARP_NODE(0xBA, LEVEL_HMC, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_HMC, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_WDW, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_WF, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_WF, 0x03, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 30622, 9099, 27735, 0, -168, 0, 0x00BA0000, bhvWarp),
		OBJECT(MODEL_NONE, 13467, -5155, -28617, 0, -90, 0, 0x00BB0000, bhvFadingWarp),
		MARIO_POS(0x01, -168, 30622, 9099, 27735),
		OBJECT(MODEL_NONE, -28782, 3601, -7627, 0, 0, 0, 0x00000000, bhvHiddenStar),
		OBJECT(MODEL_CUSTOM_SECRET, 1500, 790, 18760, -5, 75, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_CUSTOM_SECRET, -3640, 4160, 17060, -5, 75, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_CUSTOM_SECRET, 14460, 7610, -440, -5, 75, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_CUSTOM_SECRET, -10040, 1750, 6190, -5, 75, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_CUSTOM_SECRET, -8160, -2830, 2530, -5, 75, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, 30622, 9099, 27735, 0, -168, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_PORTAL_WARP, 14567, -6350, -28617, 0, 90, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 13451, -6750, -30312, 0, -180, 0, 0x00CB0100, bhvPortalWarp),
		OBJECT(MODEL_NONE, -31366, 3036, -7620, 0, -180, 0, 0x04CC0000, bhvWarp),
		TERRAIN(hmc_area_1_collision),
		ROOMS(hmc_area_1_collision_rooms),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_BLOOD_FLOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_BLOOD_FLOW, 0x01, 0x02),
		SET_ECHO(0x0C, 0x0C),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -168, 30622, 9099, 27735),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
