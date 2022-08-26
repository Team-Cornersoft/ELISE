#include "src/game/envfx_snow.h"

const GeoLayout custom_dream_drop_red_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 155, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_dream_drop_red_000_displaylist_mesh_layer_1),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, custom_dream_drop_red_000_displaylist_mesh_layer_5),
				GEO_BILLBOARD_WITH_PARAMS_AND_DL(LAYER_TRANSPARENT, 0, 0, 0, custom_dream_drop_red_002_bb_mesh_layer_5),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_dream_drop_red_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, custom_dream_drop_red_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
