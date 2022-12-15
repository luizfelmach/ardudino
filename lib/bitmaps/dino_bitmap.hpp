// Dino andando
// 'trex-up-1s', 22x23px
const unsigned char dino_trex_up_1s [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0xb0, 0x00, 0x03, 0x10, 0x00, 0x02, 0x10, 0x00, 0x03, 
	0x18, 0x00, 0x00, 0x00, 0x00
};
// 'trex-up-2s', 22x23px
const unsigned char dino_trex_up_2s [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0x98, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00
};
// 'trex-up-3s', 22x23px
const unsigned char dino_trex_up_3s [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x1b, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 0x1f, 0xf8, 0x00, 
	0x1f, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0xe0, 0x40, 0x3e, 0x00, 0x40, 0xfe, 0x00, 0x61, 0xff, 
	0x80, 0x73, 0xfe, 0x80, 0x7f, 0xfe, 0x00, 0x7f, 0xfe, 0x00, 0x3f, 0xfc, 0x00, 0x1f, 0xfc, 0x00, 
	0x0f, 0xf8, 0x00, 0x07, 0xf0, 0x00, 0x03, 0x30, 0x00, 0x01, 0x90, 0x00, 0x00, 0x10, 0x00, 0x00, 
	0x18, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 288)
const int dino_allArray_LEN = 3;
const unsigned char* dino_allArray[3] = {
	dino_trex_up_1s,
	dino_trex_up_2s,
	dino_trex_up_3s
};
