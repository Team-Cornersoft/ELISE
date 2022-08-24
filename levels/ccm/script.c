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
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CASTLE, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_CCM, 0x02, 0xDA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_CCM, 0x01, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDD, LEVEL_CCM, 0x01, 0xDD, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDE, LEVEL_CCM, 0x02, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDF, LEVEL_CCM, 0x01, 0xDF, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD0, LEVEL_CCM, 0x01, 0xD0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD1, LEVEL_CCM, 0x02, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD2, LEVEL_CCM, 0x01, 0xD2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD3, LEVEL_CCM, 0x01, 0xD3, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, 0, -3100, 0, -1900),
		OBJECT(MODEL_NONE, -3000, 0, -1500, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -3315, 0, 2550, 0, 90, 0, 0x00DA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -3315, 0, 1050, 0, 90, 0, 0x00DB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -3315, 0, -450, 0, 90, 0, 0x00DC0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -3315, 0, -1950, 0, 90, 0, 0x00DD0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -2850, 0, -2915, 0, 0, 0, 0x00DE0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -1350, -700, -2915, 0, 0, 0, 0x00DF0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 150, 0, -2915, 0, 0, 0, 0x00D00000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 1650, 0, -2915, 0, 0, 0, 0x00D10000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, 2615, 0, -2725, 0, -90, 0, 0x00D20000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -3125, 0, 3015, 0, 180, 0, 0x00D30000, bhvDoorWarp),
		TERRAIN(ccm_area_1_collision),
		ROOMS(ccm_area_1_collision_rooms),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_UNDERGROUND, 0x01, 0x02),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_CCM, 0x01, 0xDE, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_CCM, 0x01, 0xD1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CUSTOM_DOOR_A, 2000, 0, -700, 0, 0, 0, 0x00DC0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 0, 0, -700, 0, 0, 0, 0x00DB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -2000, 0, -700, 0, 0, 0, 0x00DA0000, bhvDoorWarp),
		OBJECT(MODEL_NONE, 0, 0, -1000, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(ccm_area_2_collision),
		ROOMS(ccm_area_2_collision_rooms),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3100, 0, -1900),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
