#include "src/game/envfx_snow.h"

const GeoLayout custom_portal_w_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(0, geo_portal_warp_color),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_portal_w_Portal_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_portal_w_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
