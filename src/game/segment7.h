#ifndef SEGMENT7_H
#define SEGMENT7_H

#include <PR/ultratypes.h>
#include <PR/gbi.h>

// from main menu segment 7
extern Gfx dl_menu_idle_hand[];
extern Gfx dl_menu_grabbing_hand[];
extern Texture menu_hud_lut[];
extern Texture menu_font_lut[];
extern Gfx dl_menu_ia8_text_begin[];
extern Gfx dl_menu_ia8_text_end[];
extern Gfx dl_menu_rgba16_wood_course[];
#ifdef VERSION_EU
extern Gfx dl_menu_rgba16_wood_course_end[];
extern Gfx dl_menu_texture_course_upper[];
extern Gfx dl_menu_texture_niveau_upper[];
extern Gfx dl_menu_texture_kurs_upper[];

extern const Gfx eu_course_strings_en_table[];
extern const Gfx eu_course_strings_fr_table[];
extern const Gfx eu_course_strings_de_table[];
#endif

// from intro_segment7
extern Gfx *intro_seg7_dl_main_logo;
extern Gfx *intro_seg7_dl_copyright_trademark;
extern f32 intro_seg7_table_scale_1[];
extern f32 intro_seg7_table_scale_2[];

extern Texture scam_warning[];

extern Texture texture_cutscene_scene_0_0[];
extern Texture texture_cutscene_scene_0_1[];
extern Texture texture_cutscene_scene_0_2[];
extern Texture texture_cutscene_scene_0_3[];
extern Texture texture_cutscene_scene_1_0[];
extern Texture texture_cutscene_scene_1_1[];
extern Texture texture_cutscene_scene_1_2[];
extern Texture texture_cutscene_scene_1_3[];
extern Texture texture_cutscene_scene_2_0[];
extern Texture texture_cutscene_scene_2_1[];
extern Texture texture_cutscene_scene_2_2[];
extern Texture texture_cutscene_scene_2_3[];
extern Texture texture_cutscene_scene_3_0[];
extern Texture texture_cutscene_scene_3_1[];
extern Texture texture_cutscene_scene_3_2[];
extern Texture texture_cutscene_scene_3_3[];
extern Texture texture_cutscene_scene_4_0[];
extern Texture texture_cutscene_scene_4_1[];
extern Texture texture_cutscene_scene_4_2[];
extern Texture texture_cutscene_scene_4_3[];
extern Texture texture_cutscene_scene_5_0[];
extern Texture texture_cutscene_scene_5_1[];
extern Texture texture_cutscene_scene_5_2[];
extern Texture texture_cutscene_scene_5_3[];
extern Texture texture_cutscene_scene_6_0[];
extern Texture texture_cutscene_scene_6_1[];
extern Texture texture_cutscene_scene_6_2[];
extern Texture texture_cutscene_scene_6_3[];
extern Texture texture_cutscene_scene_7_0[];
extern Texture texture_cutscene_scene_7_1[];
extern Texture texture_cutscene_scene_7_2[];
extern Texture texture_cutscene_scene_7_3[];

#endif // SEGMENT7_H
