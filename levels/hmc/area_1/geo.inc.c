#include "src/game/envfx_snow.h"

const GeoLayout hmc_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(4, geo_switch_area),
		GEO_OPEN_NODE(),
			GEO_BRANCH(1, hmc_dl_1_bottom_geo),
			GEO_BRANCH(1, hmc_dl_2_middle_geo),
			GEO_BRANCH(1, hmc_dl_3_top_geo),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_1_bottom_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -21193, -5691, 7381, 0, -180, 0, hmc_dl_GREEN_PURPLE_SPLIT_A_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5338, -1750, 2915, 0, -180, 0, hmc_dl_LEFT_BLUE_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11597, -9383, -16010, 0, -180, 0, hmc_dl_LEFT_FISH_A_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -902, -211, 16030, 0, -180, 0, hmc_dl_RIGHT_RED_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1500, 790, 18760, -5, 75, 0, hmc_dl_Secret_ring_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_Secret_ring_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8160, -2830, 2530, -5, 75, 0, hmc_dl_Secret_ring_004_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_Secret_ring_004_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 20781, 6689, 21216, 0, -180, 0, hmc_dl_START_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -25200, -6166, 16381, 0, -180, 0, hmc_dl_YELLOW_GREEN_SPLIT_A_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_2_middle_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -31147, -5549, -5328, 0, -180, 0, hmc_dl_BLUE_END_A_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -28229, -4219, 990, 0, -180, 0, hmc_dl_GREEN_END_A_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 19807, 9509, 4381, 0, -180, 0, hmc_dl_GREEN_PURPLE_SPLIT_B_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 26903, 10868, -4361, 0, -180, 0, hmc_dl_LEFT_BLUE_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4857, 2963, 3721, 0, -180, 0, hmc_dl_MIDDLE_CYAN_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2051, 4050, -4942, 0, -180, 0, hmc_dl_MIDDLE_RAINBOW_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -16066, -3953, -18428, 0, -180, 0, hmc_dl_RAINBOW_END_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3640, 4160, 17060, -5, 75, 0, hmc_dl_Secret_ring_001_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_Secret_ring_001_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 14460, 7610, -440, -5, 75, 0, hmc_dl_Secret_ring_002_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_Secret_ring_002_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10040, 1750, 6190, -5, 75, 0, hmc_dl_Secret_ring_003_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_Secret_ring_003_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -10785, 543, 11750, 0, -180, 0, hmc_dl_YELLOW__END_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 15800, 9034, 13381, 0, -180, 0, hmc_dl_YELLOW_GREEN_SPLIT_B_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_dl_3_top_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -30045, 1845, -7481, 0, 180, 0, hmc_dl_B_NosePerson_B_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -21147, 4451, -5328, 0, -180, 0, hmc_dl_BLUE_END_B_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3996, -6487, -28620, 0, -180, 0, hmc_dl_FISH_ENDB_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -18229, 5781, 990, 0, -180, 0, hmc_dl_GREEN_END_B_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -11597, 617, -16010, 0, -180, 0, hmc_dl_LEFT_FISH_B_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout hmc_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_UNDERWATER_CITY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 167, 50000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, hmc_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, hmc_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hmc_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
