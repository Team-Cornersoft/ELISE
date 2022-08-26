#include "src/game/envfx_snow.h"

const GeoLayout animated_wall_dogA_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, animated_wall_dogA_wall_animated_006_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, animated_wall_dogA_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
