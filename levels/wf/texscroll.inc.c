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

void scroll_wf() {
	scroll_sts_mat_wf_dl_Water_A_layer5();
	scroll_sts_mat_wf_dl_Water_B_layer5();
}
