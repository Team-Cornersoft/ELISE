void scroll_ttm_dl_C_UFO_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 38;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ttm_dl_C_UFO_mesh_layer_1_vtx_2);

	deltaY = (int)(2.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sts_mat_ttm_dl_Sparkles_A_layer5() {
	Gfx *mat = segmented_to_virtual(mat_ttm_dl_Sparkles_A_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_ttm_dl_Sparkles_B_layer5() {
	Gfx *mat = segmented_to_virtual(mat_ttm_dl_Sparkles_B_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_ttm() {
	scroll_ttm_dl_C_UFO_mesh_layer_1_vtx_2();
	scroll_sts_mat_ttm_dl_Sparkles_A_layer5();
	scroll_sts_mat_ttm_dl_Sparkles_B_layer5();
}
