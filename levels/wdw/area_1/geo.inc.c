#include "src/game/envfx_snow.h"

const GeoLayout wdw_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, -9340, 3995, wdw_dl_C_Portal_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 427, 1333, 582, wdw_dl_F_Dolfin_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -700, -4400, 2100, 0, -140, 0, wdw_dl_F_Fish_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3200, -1100, -1700, 0, 70, 0, wdw_dl_F_Fish_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3200, -2800, 300, 0, -60, 0, wdw_dl_F_Fish_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2700, -7300, 1400, 0, 50, 0, wdw_dl_F_Fish_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 445, -9702, -598, wdw_dl_X_Ocean_floor_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_X_Ocean_floor_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_dl_Y_Backdrop_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Y_Backdrop_mesh_layer_5),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, 6014, 0, wdw_dl_Y_Bottle_mesh_layer_5),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -1100, -7700, 1500),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -2300, -6900, -700),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_001_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -1800, -5000, -2300),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_002_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 100, -6000, -2400),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_003_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 1900, -4400, -3100),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_004_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 2000, -5300, -300),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_005_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 1540, -4800, 2770),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_006_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -3100, -3300, 1300),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_007_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -900, -2000, -400),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_008_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 400, -700, -2700),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_009_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 2800, 100, -900),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_010_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -1900, 2500, 1800),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_011_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -100, 3600, 3400),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_012_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -600, 2400, -3900),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_013_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -600, 4900, -2100),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_014_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 900, 6200, -1200),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_015_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 600, 7500, 300),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_016_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, -200, 8900, -100),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_017_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_BILLBOARD_WITH_PARAMS(LAYER_OPAQUE, 2600, -7700, -2400),
		GEO_OPEN_NODE(),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 90, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_Z_Bubble_018_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_SNOW_MOUNTAINS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 167, 50000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wdw_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, wdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
