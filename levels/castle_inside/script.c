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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0xA, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBA, LEVEL_CASTLE, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBB, LEVEL_CASTLE, 0x01, 0xBB, WARP_NO_CHECKPOINT),
		WARP_NODE(0xBC, LEVEL_CASTLE, 0x01, 0xBC, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCA, LEVEL_BOB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCB, LEVEL_JRB, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCC, LEVEL_CCM, 0x01, 0xDA, WARP_NO_CHECKPOINT),
		WARP_NODE(0xCD, LEVEL_BITDW, 0x01, 0xBA, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CUSTOM_BOSS_PORTAL, 0, 0, 0, 0, 0, 0, 0x00CD0000, bhvBossPortalWarp),
		OBJECT(MODEL_NONE, 0, 400, -2100, 0, 0, 0, 0x00BA0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, 1850, 400, 1260, 0, -120, 0, 0x00BB0000, bhvFadingWarp),
		OBJECT(MODEL_NONE, -1850, 400, 1260, 0, 120, 0, 0x00BC0000, bhvFadingWarp),
		MARIO_POS(0x01, -180, 0, 0, 1900),
		OBJECT(MODEL_NONE, 0, 2000, 1900, 0, -180, 0, 0x000A0000, bhvFadingWarp),
		OBJECT(MODEL_PORTAL_WARP, 0, 0, -3205, 0, -180, 0, 0x00CA0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, 2800, 0, 1800, 0, -120, 0, 0x00CB0000, bhvPortalWarp),
		OBJECT(MODEL_PORTAL_WARP, -2804, 0, 1802, 0, 120, 0, 0x00CC0000, bhvPortalWarp),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		SET_BACKGROUND_MUSIC_WITH_REVERB(0x00, SEQ_EVENT_QUIET, 0x01, 0x02),
		SET_ECHO(0x0A, 0x0A),
		// OBJECT(MODEL_WOODEN_SIGNPOST, 0, 0, 3000, 0, -180, 0, (DIALOG_098 << 16), bhvMessagePanel),
		// OBJECT(MODEL_PURPLE_SWITCH, 0, 0, 3400, 0, -180, 0, 0xFF000000, bhvFloorSwitchHardcodedModel),
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, 0, 1900),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
