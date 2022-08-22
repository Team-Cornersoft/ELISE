#ifndef MENU_HEADER_H
#define MENU_HEADER_H

#include "types.h"

// geo
extern const GeoLayout geo_menu_mario_save_button[];
extern const GeoLayout geo_menu_mario_save_button_fade[];
extern const GeoLayout geo_menu_mario_new_button[];
extern const GeoLayout geo_menu_mario_new_button_fade[];
extern const GeoLayout geo_menu_erase_button[];
extern const GeoLayout geo_menu_copy_button[];
extern const GeoLayout geo_menu_file_button[];
extern const GeoLayout geo_menu_score_button[];
extern const GeoLayout geo_menu_sound_button[];
extern const GeoLayout geo_menu_generic_button[];
extern const GeoLayout geo_menu_file_select_strings_and_menu_cursor[];
extern const GeoLayout geo_menu_act_selector_strings[];

extern const GeoLayout geo_menu_background_green[];
extern const GeoLayout geo_menu_background_blue[];
extern const GeoLayout geo_menu_background_red[];

// leveldata
extern const Gfx dl_menu_mario_save_button_base[];
extern const Gfx dl_menu_mario_new_button_base[];
extern const Gfx dl_menu_save_button_back[];
extern const Gfx dl_menu_save_button_fade_back[];
extern const Gfx dl_menu_erase_button[];
extern const Gfx dl_menu_copy_button[];
extern const Gfx dl_menu_file_button[];
extern const Gfx dl_menu_score_button[];
extern const Gfx dl_menu_sound_button[];
extern const Gfx dl_menu_generic_button[];
extern const Gfx dl_menu_idle_hand[];
extern const Gfx dl_menu_grabbing_hand[];
extern const Texture *const menu_hud_lut[];
extern const Texture *const menu_font_lut[];
extern const Gfx dl_menu_ia8_text_begin[];
extern const Gfx dl_menu_ia8_text_end[];
extern const Gfx dl_menu_rgba16_wood_course[];
extern const Gfx dl_menu_texture_course_upper[];
extern const Gfx dl_menu_texture_niveau_upper[];
extern const Gfx dl_menu_texture_kurs_upper[];
extern const Collision main_menu_seg7_collision[];
#ifdef VERSION_EU
extern const u8 eu_course_strings_en_table[];
extern const u8 eu_course_strings_fr_table[];
extern const u8 eu_course_strings_de_table[];
#endif

// script
extern const LevelScript level_main_menu_entry_file_select[];
extern const LevelScript level_main_menu_entry_act_select[];


// Bitlytic's Custom menu stuff

// Green Menu Background
extern Lights1 background_green_f3dlite_material_001_lights;
extern u8 background_green_fileselect_bg_0_rgba32[];
extern Vtx background_green_BackgroundGreen_mesh_vtx_0[576];
extern Gfx background_green_BackgroundGreen_mesh_tri_0[];
extern Gfx mat_background_green_f3dlite_material_001[];
extern Gfx background_green_BackgroundGreen_mesh[];

// Blue Menu Background
extern Lights1 background_blue_f3dlite_material_002_lights;
extern u8 background_blue_fileselect_bg_1_rgba16[];
extern Vtx background_blue_BackgroundBlue_mesh_vtx_0[422];
extern Gfx background_blue_BackgroundBlue_mesh_tri_0[];
extern Gfx mat_background_blue_f3dlite_material_002[];
extern Gfx background_blue_BackgroundBlue_mesh[];

// Red Menu Background
extern Lights1 background_red_f3dlite_material_003_lights;
extern u8 background_red_fileselect_bg_2_rgba16[];
extern Vtx background_red_BackgroundRed_mesh_vtx_0[422];
extern Gfx background_red_BackgroundRed_mesh_tri_0[];
extern Gfx mat_background_red_f3dlite_material_003[];
extern Gfx background_red_BackgroundRed_mesh[];

// Save file button Empty
extern Lights1 menu_button_custom_menu_button_lights;
extern u8 menu_button_custom_dirt_ci8[];
extern u8 menu_button_custom_dirt_ci8_pal_rgba16[];
extern Vtx menu_button_custom_MenuButton_mesh_vtx_0[4];
extern Gfx menu_button_custom_MenuButton_mesh_tri_0[];
extern Gfx mat_menu_button_custom_menu_button[];
extern Gfx mat_revert_menu_button_custom_menu_button[];
extern Gfx menu_button_custom_MenuButton_mesh[];

// Blank button
extern Lights1 blank_menu_button_menu_button_lights;
extern u8 blank_menu_button_NEW_FILE_ia8[];
extern Vtx blank_menu_button_BlankButton_mesh_vtx_0[4];
extern Gfx blank_menu_button_BlankButton_mesh_tri_0[];
extern Gfx mat_blank_menu_button_menu_button[];
extern Gfx blank_menu_button_BlankButton_mesh[];

// Existing Save File Button
extern Lights1 bloomed_menu_button_menu_button_002_lights;
extern u8 bloomed_menu_button_OLD_FILE_ia8[];
extern Vtx bloomed_menu_button_MenuButton_001_mesh_vtx_0[4];
extern Gfx bloomed_menu_button_MenuButton_001_mesh_tri_0[];
extern Gfx mat_bloomed_menu_button_menu_button_002[];
extern Gfx bloomed_menu_button_MenuButton_001_mesh[];


#endif
