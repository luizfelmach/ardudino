#pragma once

#include <Arduino.h>
// Cactos
// 'cacti-big-big', 27x26px
const unsigned char cacto_cacti_big_big [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x18, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 
	0x07, 0x81, 0x3c, 0x00, 0x07, 0x83, 0xbc, 0x00, 0x07, 0x93, 0xbc, 0x80, 0x27, 0xbb, 0xbd, 0xc0, 
	0x77, 0xbb, 0xbd, 0xc0, 0x77, 0xbb, 0xbd, 0xc0, 0x77, 0xbb, 0xbd, 0xc0, 0x77, 0xbb, 0xfd, 0xc0, 
	0x77, 0xb9, 0xfd, 0xc0, 0x77, 0xb8, 0xff, 0xc0, 0x7f, 0xf0, 0x3f, 0x80, 0x3f, 0xe0, 0x3f, 0x00, 
	0x1f, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 
	0x07, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x07, 0x80, 0x3c, 0x00, 0x1f, 0xa0, 0xfc, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x40, 0x00
};
// 'cacti-big-small', 23x26px
const unsigned char cacto_cacti_big_small [] PROGMEM = {
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 0x80, 0x00, 0x07, 
	0x80, 0x00, 0x07, 0x90, 0x40, 0x27, 0xb8, 0x60, 0x77, 0xb9, 0x60, 0x77, 0xbb, 0x60, 0x77, 0xbb, 
	0x6c, 0x77, 0xbb, 0x6c, 0x77, 0xbb, 0x6c, 0x77, 0xbb, 0x6c, 0x7f, 0xf3, 0x6c, 0x3f, 0xe1, 0xec, 
	0x1f, 0x80, 0x78, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 0x80, 0x60, 0x07, 
	0x80, 0x60, 0x07, 0x80, 0x60, 0x1f, 0xa2, 0x60, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00
};
// 'cacti-small-big', 23x26px
const unsigned char cacto_cacti_small_big [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 
	0x03, 0xc0, 0x08, 0x03, 0xc8, 0x0c, 0x13, 0xdc, 0x2c, 0x3b, 0xdc, 0x6c, 0x3b, 0xdc, 0x6d, 0xbb, 
	0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbb, 0xdc, 0x6d, 0xbf, 0xf8, 0x3d, 0x9f, 0xf0, 
	0x0f, 0x0f, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x0c, 
	0x03, 0xc0, 0x0c, 0x03, 0xc0, 0x4c, 0x0f, 0xd0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80
};
// 'cacti-small-small-small', 27x26px
const unsigned char cacto_cacti_small_small_small [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x04, 0x06, 0x00, 
	0x0c, 0x0e, 0x26, 0x00, 0x0d, 0x2e, 0x36, 0x80, 0x0d, 0xae, 0x36, 0xc0, 0x2d, 0xae, 0xb6, 0xc0, 
	0x6d, 0xae, 0xb6, 0xc0, 0x6d, 0xae, 0xb6, 0xc0, 0x6d, 0xae, 0xb6, 0xc0, 0x6f, 0x2e, 0x9e, 0xc0, 
	0x6c, 0x2e, 0x87, 0x80, 0x3c, 0x3e, 0x86, 0x00, 0x0c, 0x1f, 0x86, 0x00, 0x0c, 0x0f, 0x06, 0x00, 
	0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 0x0c, 0x0e, 0x06, 0x00, 
	0x00, 0x20, 0x40, 0x40, 0x01, 0x00, 0x02, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 448)
const int cacto_allArray_LEN = 4;
const unsigned char* cacto_allArray[4] = {
	cacto_cacti_big_big,
	cacto_cacti_big_small,
	cacto_cacti_small_big,
	cacto_cacti_small_small_small
};
