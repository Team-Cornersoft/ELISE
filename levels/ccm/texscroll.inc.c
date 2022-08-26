void scroll_sts_mat_ccm_dl_bird3() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_bird3);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_bird4() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_bird4);

	if (--curInterval0 <= 0) {
		shift_s(mat, 12, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_bird2() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_bird2);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_bird1() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_bird1);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_cat3() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_cat3);

	if (--curInterval0 <= 0) {
		shift_s(mat, 12, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_cat4() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_cat4);

	if (--curInterval0 <= 0) {
		shift_s(mat, 12, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_cat2() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_cat2);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_cat1() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_cat1);

	if (--curInterval0 <= 0) {
		shift_s(mat, 12, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dog3() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dog3);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dog4() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dog4);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dog2() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dog2);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dog1() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dog1);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_ccm_dl_B_bone_and_poo_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 82;
	int width = 128 * 0x20;
	int height = 16 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_B_bone_and_poo_mesh_layer_4_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ccm_dl_poopsdlide_001_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 82;
	int width = 128 * 0x20;
	int height = 16 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_poopsdlide_001_mesh_layer_4_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_ccm_dl_poopsdlide_002_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 82;
	int width = 128 * 0x20;
	int height = 16 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(ccm_dl_poopsdlide_002_mesh_layer_4_vtx_0);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sts_mat_ccm_dl_Water_A_layer5() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_Water_A_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_ccm_dl_Water_B_layer5() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_Water_B_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_ccm_dl_dino3() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dino3);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dino4() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dino4);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dino2() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dino2);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_sts_mat_ccm_dl_dino1() {
	static int intervalTex0 = 2;
	static int curInterval0 = 2;
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_dino1);

	if (--curInterval0 <= 0) {
		shift_s(mat, 19, PACK_TILESIZE(0, 128));
		curInterval0 = intervalTex0;
	}
};

void scroll_ccm() {
	scroll_sts_mat_ccm_dl_bird3();
	scroll_sts_mat_ccm_dl_bird4();
	scroll_sts_mat_ccm_dl_bird2();
	scroll_sts_mat_ccm_dl_bird1();
	scroll_sts_mat_ccm_dl_cat3();
	scroll_sts_mat_ccm_dl_cat4();
	scroll_sts_mat_ccm_dl_cat2();
	scroll_sts_mat_ccm_dl_cat1();
	scroll_sts_mat_ccm_dl_dog3();
	scroll_sts_mat_ccm_dl_dog4();
	scroll_sts_mat_ccm_dl_dog2();
	scroll_sts_mat_ccm_dl_dog1();
	scroll_ccm_dl_B_bone_and_poo_mesh_layer_4_vtx_0();
	scroll_ccm_dl_poopsdlide_001_mesh_layer_4_vtx_0();
	scroll_ccm_dl_poopsdlide_002_mesh_layer_4_vtx_0();
	scroll_sts_mat_ccm_dl_Water_A_layer5();
	scroll_sts_mat_ccm_dl_Water_B_layer5();
	scroll_sts_mat_ccm_dl_dino3();
	scroll_sts_mat_ccm_dl_dino4();
	scroll_sts_mat_ccm_dl_dino2();
	scroll_sts_mat_ccm_dl_dino1();
}
