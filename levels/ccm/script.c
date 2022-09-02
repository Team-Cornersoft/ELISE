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

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CASTLE, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_CCM, 0x02, 0xDA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_CCM, 0x04, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDD, LEVEL_SL, 0x01, 0xDA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDE, LEVEL_CCM, 0x02, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDF, LEVEL_CCM, 0x01, 0xDF, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD0, LEVEL_CCM, 0x01, 0xD0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD1, LEVEL_CCM, 0x02, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD2, LEVEL_CCM, 0x01, 0xD2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xD3, LEVEL_CCM, 0x01, 0xEA, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x01, 0, 1600, 0),
		INSTANT_WARP(0x01, 0x01, 0, -1600, 0),
		WARP_NODE(0xEA, LEVEL_CCM, 0x01, 0xD3, WARP_NO_CHECKPOINT),
		WARP_NODE(0xEB, LEVEL_WF, 0x01, 0xBA, WARP_NO_CHECKPOINT),
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
		OBJECT(MODEL_CUSTOM_DOOR_B, -8528, 16, -9059, 0, 180, 0, 0x00EA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8528, 1616, -9059, 0, 180, 0, 0x00EA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8528, -1584, -9059, 0, 180, 0, 0x00EA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8528, -3184, -9059, 0, 180, 0, 0x00EA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8878, -784, -7439, 0, 0, 0, 0x00EB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8878, 816, -7439, 0, 0, 0, 0x00EB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8878, -2384, -7439, 0, 0, 0, 0x00EB0000, bhvDoorWarp),
		TERRAIN(ccm_area_1_collision),
		ROOMS(ccm_area_1_collision_rooms),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_HOME_TOGETHER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_LEVEL_HOME_TOGETHER, 0x01, 0x02),
		SET_ECHO(0x00, 0x00),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A, LEVEL_CCM, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xDB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_CCM, 0x01, 0xDE, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_CCM, 0x01, 0xD1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_CCM, 0x03, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_CCM, 0x05, 0xCA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 5200, 500, -2893, 0, 0, 0, 0x00030000, bhvAnimatedWall),
		OBJECT(MODEL_NONE, 0, 500, -2893, 0, 0, 0, 0x00000000, bhvAnimatedWall),
		OBJECT(MODEL_NONE, -5104, 500, -2893, 0, 0, 0, 0x00010000, bhvAnimatedWall),
		OBJECT(MODEL_NONE, 0, 0, -1000, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5510, 545, -1271, 0, -150, 0, 0x00CB0000, bhvWarp),
		OBJECT(MODEL_NONE, -4655, 265, -1200, 0, 0, 0, 0x00CA0000, bhvBooCage),
		OBJECT(MODEL_CUSTOM_DOOR_A, 5200, 0, -700, 0, 0, 0, 0x00DC0000, bhvDoorWarp),
		OBJECT(MODEL_DREAM_DROP_BLUE, -556, 1000, -1052, 0, 0, 0, 0x01000000, bhvStar),
		OBJECT(MODEL_CUSTOM_DOOR_A, 0, 0, -700, 0, 0, 0, 0x00DB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, -5105, 0, -700, 0, 0, 0, 0x00DA0000, bhvDoorWarp),
		TERRAIN(ccm_area_2_collision),
		ROOMS(ccm_area_2_collision_rooms),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_ANIMAL_PARTY),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ccm_area_3),
		WARP_NODE(0x0A, LEVEL_CCM, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_CCM, 0x03, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_CCM, 0x04, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 10152, 10269, 17875, 0, 180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 10152, 10269, 17875, 0, 180, 0, 0x00BA0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, -20341, -10872, -17998, 0, 180, 0, 0x20BB0000, bhvWarp),
		TERRAIN(ccm_area_3_collision),
		MACRO_OBJECTS(ccm_area_3_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, ccm_area_4),
		WARP_NODE(0x0A, LEVEL_CCM, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDB, LEVEL_CCM, 0x01, 0xDC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_CCM, 0x04, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_CCM, 0x04, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_CCM, 0x06, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDC, LEVEL_CCM, 0x05, 0xDA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1200, -300, 6100, 0, 180, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_DREAM_DROP_BLUE, 6100, 280, 5020, 0, 0, 0, 0x02000000, bhvStar),
		OBJECT(MODEL_NONE, 6100, 480, 5020, 0, 0, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_PORTAL_WARP, -8000, 0, 9600, 0, 0, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 6960, -300, 5450, 0, 90, 0, 0x00DA0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 1200, -300, 6310, 0, 0, 0, 0x00DB0000, bhvDoorWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, -8000, 0, -2760, 0, -180, 0, 0x00DC0000, bhvDoorWarp),
		TERRAIN(ccm_area_4_collision),
		MACRO_OBJECTS(ccm_area_4_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, ccm_area_5),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_CCM, 0x02, 0xCB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x04, 0xDC, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -7257, 545, -7583, 0, 30, 0, 0x00CA0000, bhvWarp),
		OBJECT(MODEL_NONE, -6974, 0, -7018, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_CUSTOM_DOOR_B, 8020, -1000, 5530, 0, -90, 0, 0x00DA0000, bhvDoorWarp),
		TERRAIN(ccm_area_5_collision),
		MACRO_OBJECTS(ccm_area_5_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_SOUND_PLAYER, 0x01, 0x02),
		SET_ECHO(0x80, 0x80), // No reverb
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(6, ccm_area_6),
		WARP_NODE(0x0A, LEVEL_CCM, 0x06, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xDA, LEVEL_CCM, 0x01, 0xD1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_CCM, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 1400, 500, -4793, 0, 0, 0, 0x00020000, bhvAnimatedWall),
		OBJECT(MODEL_DREAM_DROP_BLUE, 1830, 800, -4299, 0, 0, 0, 0x03000000, bhvStar),
		OBJECT(MODEL_NONE, 983, 12, -2993, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 1402, 412, -2932, 0, -180, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_CUSTOM_DOOR_A, 1400, 0, -2590, 0, 0, 0, 0x00DA0000, bhvDoorWarp),
		TERRAIN(ccm_area_6_collision),
		MACRO_OBJECTS(ccm_area_6_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_ANIMAL_PARTY),
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
