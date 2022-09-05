#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

#include "custom_door_a/model.inc.c"
#include "custom_door_b/model.inc.c"
#include "custom_portal_w/model.inc.c"
#include "custom_portal_w/collision.inc.c"
#include "animated_wall_catA/model.inc.c"
#include "animated_wall_catB/model.inc.c"
#include "animated_wall_birdA/model.inc.c"
#include "animated_wall_birdB/model.inc.c"
#include "animated_wall_dinoA/model.inc.c"
#include "animated_wall_dinoB/model.inc.c"
#include "animated_wall_dogA/model.inc.c"
#include "animated_wall_dogB/model.inc.c"
#include "crystal_projectile/model.inc.c"
#include "despair/model.inc.c"
#include "despair/anims/data.inc.c"
#include "despair/anims/table.inc.c"
#include "custom_door_c/model.inc.c"
#include "custom_secret/model.inc.c"