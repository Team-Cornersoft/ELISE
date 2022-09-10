#include "src/game/envfx_snow.h"

const GeoLayout custom_bowser_key_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_bowser_key_Key_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, custom_bowser_key_Key_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, custom_bowser_key_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, custom_bowser_key_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
