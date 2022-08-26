// portal_warp.inc.c

void bhv_portal_warp_init(void) {
    if (GET_BPARAM4(o->oBehParams) != 0) {
        obj_scale(o, (f32) GET_BPARAM4(o->oBehParams) / 64.0f);
    }

    if (ABS(o->oFaceAnglePitch) > 1 || ABS(o->oFaceAngleRoll) > 1) { // Fast64 float moment, also rotated portals should not do stuff
        o->oInteractType = INTERACT_NONE;
    }

    o->hitboxRadius = 0.0f;
    o->hitboxHeight = 0.0f;
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
        switch (colorParam) {
        case 1:
            gDPSetEnvColor(gfx++, 255, 0, 0, 255);
            break;
        case 0:
        default:
            gDPSetEnvColor(gfx++, 255, 255, 255, 255);
            break;
        }

        gSPEndDisplayList(gfx);
    }

    return gfxHead;
}
