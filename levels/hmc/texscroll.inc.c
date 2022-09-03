void scroll_hmc_dl_Blood_flow_A_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 166;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Blood_flow_A_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_Blood_flow_A_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 166;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Blood_flow_A_001_mesh_layer_5_vtx_0);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_Blood_flow_B_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 72;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Blood_flow_B_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_Blood_flow_B_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 72;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Blood_flow_B_001_mesh_layer_5_vtx_0);

	deltaY = (int)(5.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_Fish_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 240;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Fish_mesh_layer_5_vtx_0);

	deltaY = (int)(3.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_Fish_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 240;
	int width = 32 * 0x20;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Fish_001_mesh_layer_5_vtx_0);

	deltaY = (int)(4.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc() {
	scroll_hmc_dl_Blood_flow_A_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Blood_flow_A_001_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Blood_flow_B_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Blood_flow_B_001_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Fish_mesh_layer_5_vtx_0();
	scroll_hmc_dl_Fish_001_mesh_layer_5_vtx_0();
}
