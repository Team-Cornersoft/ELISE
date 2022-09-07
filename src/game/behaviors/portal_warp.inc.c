// portal_warp.inc.c

#define DARK_PORTAL_FRAMES 90
#define DARK_PORTAL_BRIGHTNESS 0x0C
#define RAINBOW_PORTAL_FRAMES 360

void bhv_portal_warp_init(void) {
    if (GET_BPARAM4(o->oBehParams) != 0) {
        obj_scale(o, (f32) GET_BPARAM4(o->oBehParams) / 64.0f);
    }

    if (ABS(o->oFaceAnglePitch) > 1 || ABS(o->oFaceAngleRoll) > 1) { // Fast64 float moment, also rotated portals should not do stuff
        o->oInteractType = INTERACT_NONE;
    }

    o->hitboxRadius = 0.0f;
    o->hitboxHeight = 0.0f;
    o->oPortalColorTimer = 0;
}

void bhv_portal_warp_loop(void) {
    if (ABS(o->oFaceAnglePitch) > 1 || ABS(o->oFaceAngleRoll) > 1) {
        o->oInteractStatus = INT_STATUS_NONE;
        return;
    }

    if (gMarioState->floor != NULL) {
        if (gMarioState->floor->type == SURFACE_PORTAL_WARP && gMarioState->floor->object == o) {
            o->hitboxRadius = 200000.0f;
            o->hitboxHeight = 200000.0f;
        }
    }

    switch (GET_BPARAM3(o->oBehParams)) {
        case 2:
            o->oPortalColorTimer = (o->oPortalColorTimer + 1) % DARK_PORTAL_FRAMES;
            break;
        case 3:
            o->oPortalColorTimer = (o->oPortalColorTimer + 1) % RAINBOW_PORTAL_FRAMES;
            break;
    }

    o->oInteractStatus = INT_STATUS_NONE;
}

void bhv_boss_portal_warp_init(void) {
    if (GET_BPARAM4(o->oBehParams) != 0) {
        obj_scale(o, (f32) GET_BPARAM4(o->oBehParams) / 64.0f);
    }

    if (ABS(o->oFaceAnglePitch) > 1 || ABS(o->oFaceAngleRoll) > 1) { // Fast64 float moment, also rotated portals should not do stuff
        o->oInteractType = INTERACT_NONE;
    }

    o->hitboxRadius = 0.0f;
    o->hitboxHeight = 0.0f;
}

void bhv_boss_portal_warp_loop(void) {
    if (ABS(o->oFaceAnglePitch) > 1 || ABS(o->oFaceAngleRoll) > 1) {
        o->oInteractStatus = INT_STATUS_NONE;
        return;
    }

    if (gMarioState->floor != NULL) {
        if (gMarioState->floor->type == SURFACE_BOSS_PORTAL_WARP && gMarioState->floor->object == o) {
            o->hitboxRadius = 200000.0f;
            o->hitboxHeight = 200000.0f;
        }
    }

    o->oInteractStatus = INT_STATUS_NONE;
}

Gfx *geo_portal_warp_color(s32 callContext, struct GraphNode *node, UNUSED s32 context) {
    Gfx *gfxHead = NULL;

    if (callContext == GEO_CONTEXT_RENDER) {
        struct Object *obj = (struct Object *) gCurGraphNodeObject;
        struct GraphNodeGenerated *graphNode = (struct GraphNodeGenerated *) node;

        // Set layers if object is transparent or not
        SET_GRAPH_NODE_LAYER(graphNode->fnNode.node.flags, LAYER_OPAQUE);

        Gfx *gfx = gfxHead = alloc_display_list(2 * sizeof(Gfx));

        u8 colorParam = GET_BPARAM3(obj->oBehParams);
        u8 val = 0;

        switch (colorParam) {
        case 1:
            // Red Portal
            gDPSetEnvColor(gfx++, 255, 0, 0, 255);
            break;
        case 2:
            // Dark Portal
            val = sins((obj->oPortalColorTimer * 0x10000) / (DARK_PORTAL_FRAMES * 2)) * DARK_PORTAL_BRIGHTNESS + 0.5f;
            gDPSetEnvColor(gfx++, val, val, val, 255);
            break;
        case 3:
            // Rainbow Portal
            val = sins((((obj->oPortalColorTimer) % (RAINBOW_PORTAL_FRAMES / 3)) * 0x10000) / (RAINBOW_PORTAL_FRAMES / 3 * 2)) * 0xFF + 0.5f;

            switch ((obj->oPortalColorTimer * 6) / RAINBOW_PORTAL_FRAMES) {
                case 0:
                    gDPSetEnvColor(gfx++, val, 0, 255, 255);
                    break;
                case 1:
                    gDPSetEnvColor(gfx++, 255, 0, val, 255);
                    break;
                case 2:
                    gDPSetEnvColor(gfx++, 255, val, 0, 255);
                    break;
                case 3:
                    gDPSetEnvColor(gfx++, val, 255, 0, 255);
                    break;
                case 4:
                    gDPSetEnvColor(gfx++, 0, 255, val, 255);
                    break;
                case 5:
                    gDPSetEnvColor(gfx++, 0, val, 255, 255);
                    break;
                default:
                    gDPSetEnvColor(gfx++, 0, 0, 0, 255);
                    break;
            }
            break;
        case 0:
        default:
            // Default White Portal
            gDPSetEnvColor(gfx++, 255, 255, 255, 255);
            break;
        }

        gSPEndDisplayList(gfx);
    }

    return gfxHead;
}
