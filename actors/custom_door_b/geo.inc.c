#include "src/game/envfx_snow.h"

const GeoLayout custom_door_b_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, -150, 0, 0, NULL),
		GEO_ANIMATED_PART(LAYER_OPAQUE, -4370, -545, 6868, custom_door_b_door_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_door_b_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
