#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "menu/cutscenes.h"

#include "make_const_nonconst.h"

#include "levels/cutscene_1/header.h"

#include "config.h"

const GeoLayout geo_cutscene_scene_1_0[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geoasm_cutscene_scene_1_0),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout geo_cutscene_scene_1_1[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geoasm_cutscene_scene_1_1),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout geo_cutscene_scene_1_2[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geoasm_cutscene_scene_1_2),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout geo_cutscene_scene_1_3[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geoasm_cutscene_scene_1_3),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
