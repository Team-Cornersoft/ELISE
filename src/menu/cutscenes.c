#include <PR/ultratypes.h>

#include "game/memory.h"
#include "game/segment7.h"
#include "engine/math_util.h"
#include "engine/colors.h"
#include "cutscenes.h"
#include "sm64.h"
#include "textures.h"
#include "types.h"
#include "buffers/framebuffers.h"
#include "game/game_init.h"
#include "game/puppyprint.h"

Gfx *geoasm_cutscene_scene_0_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_0_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_0_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_0_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_0_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_0_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_0_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_0_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_1_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_1_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_1_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_1_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_1_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_1_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_1_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_1_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_2_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_2_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_2_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_2_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_2_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_2_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_2_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_2_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_3_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_3_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_3_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_3_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_3_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_3_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_3_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_3_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_4_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_4_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_4_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_4_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_4_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_4_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_4_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_4_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_5_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_5_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_5_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_5_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_5_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_5_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_5_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_5_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_6_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_6_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_6_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_6_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_6_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_6_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_6_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_6_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}

Gfx *geoasm_cutscene_scene_7_0(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_7_0), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_7_1(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_7_1), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_7_2(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_7_2), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
Gfx *geoasm_cutscene_scene_7_3(s32 state, UNUSED struct GraphNode *node, UNUSED void *context) {
    if (state == GEO_CONTEXT_RENDER) {
        gSPDisplayList(gDisplayListHead++, dl_hud_img_begin);
        render_multi_image(segmented_to_virtual(texture_cutscene_scene_7_3), 0, 0, 320, 240, 320, 240, G_CYC_COPY);
        gSPDisplayList(gDisplayListHead++, dl_hud_img_end);
        gDPSetCycleType(gDisplayListHead++, G_CYC_1CYCLE);
    }

    return NULL;
}
