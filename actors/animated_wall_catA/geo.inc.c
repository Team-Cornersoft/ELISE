#include "src/game/envfx_snow.h"

const GeoLayout animated_wall_catA_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, animated_wall_catA_wall_animated_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, animated_wall_catA_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
