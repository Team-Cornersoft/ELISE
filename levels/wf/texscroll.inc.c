void scroll_sts_mat_wf_dl_Water_A_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_Water_A_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_sts_mat_wf_dl_Water_B_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_Water_B_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_s(mat, 23, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 23, PACK_TILESIZE(0, 1));
};

void scroll_wf_dl_Blood_A_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_001_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_001_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_001_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_002_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 34;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_002_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_002_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 34;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_002_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_003_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 40;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_003_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_A_003_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 40;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_A_003_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 28;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 64;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_001_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_001_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 64;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_001_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_002_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 62;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_002_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_B_002_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 62;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_B_002_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_C_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 136;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_C_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_Blood_C_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 128;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_Blood_C_mesh_layer_5_vtx_1);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf() {
	scroll_sts_mat_wf_dl_Water_A_layer5();
	scroll_sts_mat_wf_dl_Water_B_layer5();
	scroll_wf_dl_Blood_A_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_A_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_A_001_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_A_001_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_A_002_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_A_002_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_A_003_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_A_003_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_B_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_B_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_B_001_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_B_001_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_B_002_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_B_002_mesh_layer_5_vtx_1();
	scroll_wf_dl_Blood_C_mesh_layer_5_vtx_0();
	scroll_wf_dl_Blood_C_mesh_layer_5_vtx_1();
}
