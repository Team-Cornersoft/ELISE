#include "src/game/envfx_snow.h"

const GeoLayout ccm_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(2, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, ccm_dl_Infinite_stairs_geo),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -300, 0, 100),
		GEO_OPEN_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -3000, 0, -3000, ccm_dl_A_apartment_bottom_mesh_layer_5),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_0_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_1_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_2_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_3_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_4_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_5_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_6_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_7_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_8_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_A_apartment_door_9_mesh_layer_1),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -3000, 0, -3000, ccm_dl_A_apartment_floor_2_mesh_layer_5),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3000, 0, -3000, ccm_dl_A_apartment_floor_3_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_A_apartment_floor_3_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3000, 0, -3000, ccm_dl_A_apartment_floor_4_5_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_A_apartment_floor_4_5_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3000, 0, -3000, ccm_dl_A_apartment_floor_6_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_A_apartment_floor_6_mesh_layer_4),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -3000, 0, -3000, ccm_dl_A_apartment_floor_7_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_A_apartment_floor_7_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, -3000, 0, -3000, ccm_dl_A_apartment_top_mesh_layer_5),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, -2700, 0, -3100, ccm_dl_B_Doors_mesh_layer_5),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, -2700, 0, -3100, ccm_dl_B_Doors_001_mesh_layer_5),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_002_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_B_Doors_002_mesh_layer_5),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_003_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_004_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_005_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_006_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_007_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_B_Doors_007_mesh_layer_5),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, -2700, 0, -3100, ccm_dl_B_Doors_008_mesh_layer_5),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_B_Doors_008_mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_009_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_010_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_011_mesh_layer_1),
			GEO_ANIMATED_PART(LAYER_OPAQUE, -2700, 0, -3100, ccm_dl_B_Doors_012_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_B_Doors_012_mesh_layer_5),
			GEO_CLOSE_NODE(),
			GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3000, 0, -3000, ccm_dl_C_blackspace_mesh_layer_1),
			GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 13300, 11750, 12680),
			GEO_OPEN_NODE(),
				GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_D_Moon_mesh_layer_1),
					GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_D_Moon_mesh_layer_5),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_dl_Infinite_stairs_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, -434, -8249, ccm_dl_A_Staircase_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_A_Staircase_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, 1166, -8249, ccm_dl_B_Staircase_001_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_B_Staircase_001_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, -2034, -8249, ccm_dl_B_Staircase_002_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_B_Staircase_002_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, -3234, -8249, ccm_dl_C_Staircase_001_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_C_Staircase_001_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, 2766, -8249, ccm_dl_C_Staircase_003_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_C_Staircase_003_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8703, -434, -8249, ccm_dl_Void_B_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout ccm_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 167, 50000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, ccm_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ccm_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, ccm_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
