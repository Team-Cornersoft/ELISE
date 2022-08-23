#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 29, 809, -43, wf_dl_A_Tree_A_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_A_Tree_A_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_A_Tree_B_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 538, 869, -3053, wf_dl_B_Needle_000_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1744, 869, -4793, 0, 30, 0, wf_dl_B_Needle_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4072, 869, -5816, 0, -25, 0, wf_dl_B_Needle_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1580, 869, -8962, wf_dl_B_Needle_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6367, 869, -9093, 0, 45, 0, wf_dl_B_Needle_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6550, 869, -11345, 0, -20, 0, wf_dl_B_Needle_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3908, 869, -14586, 0, 25, 0, wf_dl_B_Needle_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 2969, 869, -16840, wf_dl_B_Needle_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3053, 869, 538, 0, -90, 0, wf_dl_B_Needle_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 4793, 869, -1744, 0, -60, 0, wf_dl_B_Needle_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 5816, 869, 4072, 0, -115, 0, wf_dl_B_Needle_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 8962, 869, 1580, 0, -90, 0, wf_dl_B_Needle_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 9093, 869, -6367, 0, -45, 0, wf_dl_B_Needle_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 11345, 869, 6550, 0, -110, 0, wf_dl_B_Needle_014_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 14586, 869, -3908, 0, -65, 0, wf_dl_B_Needle_015_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 16840, 869, 2969, 0, -90, 0, wf_dl_B_Needle_016_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -538, 869, 3053, 0, -180, 0, wf_dl_B_Needle_018_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1744, 869, 4793, 0, -150, 0, wf_dl_B_Needle_019_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4072, 869, 5816, 0, 155, 0, wf_dl_B_Needle_020_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1580, 869, 8962, 0, -180, 0, wf_dl_B_Needle_021_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 6367, 869, 9093, 0, -135, 0, wf_dl_B_Needle_022_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6550, 869, 11345, 0, 160, 0, wf_dl_B_Needle_023_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3908, 869, 14586, 0, -155, 0, wf_dl_B_Needle_024_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2969, 869, 16840, 0, -180, 0, wf_dl_B_Needle_025_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3053, 869, -538, 0, 90, 0, wf_dl_B_Needle_027_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4793, 869, 1744, 0, 120, 0, wf_dl_B_Needle_028_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5816, 869, -4072, 0, 65, 0, wf_dl_B_Needle_029_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8962, 869, -1580, 0, 90, 0, wf_dl_B_Needle_030_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -9093, 869, 6367, 0, 135, 0, wf_dl_B_Needle_031_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11345, 869, -6550, 0, 70, 0, wf_dl_B_Needle_032_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -14586, 869, 3908, 0, 115, 0, wf_dl_B_Needle_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -16840, 869, -2969, 0, 90, 0, wf_dl_B_Needle_034_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, 190, -9600, wf_dl_C_Portal_000_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_C_Portal_000_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, 190, 9600, wf_dl_C_Portal_001_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_C_Portal_001_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_ROTATION_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -180, 0, wf_dl_Z_Water_A_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, 0, 10000, 0, 0, -180, 0, wf_dl_Z_Water_B_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_FLAMING_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 167, 50000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
