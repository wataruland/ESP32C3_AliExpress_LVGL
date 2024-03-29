/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font C:\Users\Usuario\Documents\PlatformIO\Projects\ESP32C3_AliExpress_Graph05\display\assets\3270 Narrow Nerd Font Complete.ttf -o C:\Users\Usuario\Documents\PlatformIO\Projects\ESP32C3_AliExpress_Graph05\display\assets\ui_font_Font3270T24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT3270T24
#define UI_FONT_FONT3270T24 1
#endif

#if UI_FONT_FONT3270T24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xe1,

    /* U+0022 "\"" */
    0x86, 0x18, 0x61,

    /* U+0023 "#" */
    0x22, 0x11, 0x3f, 0xe4, 0x42, 0x21, 0x13, 0xfe,
    0x44, 0x22, 0x0, 0x0, 0x0,

    /* U+0024 "$" */
    0x4, 0x0, 0x80, 0x10, 0x1f, 0xfc, 0x41, 0x8,
    0x21, 0x6, 0x20, 0x3f, 0x80, 0x8c, 0x10, 0x82,
    0x10, 0x47, 0xff, 0x1, 0x0, 0x20, 0x4, 0x0,

    /* U+0025 "%" */
    0x30, 0x9, 0x1, 0x20, 0x18, 0x30, 0xc, 0x3,
    0x0, 0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30,
    0x4, 0xc, 0x2, 0x40, 0x48, 0x6,

    /* U+0026 "&" */
    0x70, 0x64, 0x22, 0x11, 0x8, 0x84, 0x42, 0x20,
    0xe0, 0x90, 0xcc, 0xe2, 0xd1, 0xcc, 0x63, 0xd8,
    0x6,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x13, 0x6c, 0x88, 0x88, 0x88, 0xc6, 0x31,

    /* U+0029 ")" */
    0x8c, 0x63, 0x11, 0x11, 0x11, 0x36, 0xc8,

    /* U+002A "*" */
    0x8, 0x4, 0x32, 0x6d, 0x63, 0x61, 0xb1, 0xad,
    0x93, 0x8, 0x4, 0x0,

    /* U+002B "+" */
    0x4, 0x1, 0x0, 0x40, 0x10, 0x4, 0x3f, 0xf0,
    0x40, 0x10, 0x4, 0x1, 0x0, 0x40,

    /* U+002C "," */
    0x39, 0xdf, 0xee, 0x20,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x0, 0x0, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0xc, 0x1, 0x0, 0x0,

    /* U+0030 "0" */
    0x1c, 0x11, 0x10, 0x58, 0x38, 0xc, 0x6, 0x23,
    0x11, 0x88, 0xc4, 0x60, 0x30, 0x1c, 0x1b, 0x8,
    0x88, 0x38,

    /* U+0031 "1" */
    0x13, 0x7d, 0x91, 0x11, 0x11, 0x11, 0x11, 0x11,

    /* U+0032 "2" */
    0x1f, 0x88, 0x24, 0x6, 0x1, 0x80, 0x40, 0x10,
    0xc, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30,
    0xc, 0x6, 0x3, 0xff,

    /* U+0033 "3" */
    0x7f, 0x80, 0x40, 0x60, 0x60, 0x30, 0x30, 0x30,
    0x1c, 0x3, 0x0, 0xc0, 0x20, 0x10, 0xc, 0xa,
    0x8, 0xf8,

    /* U+0034 "4" */
    0x7, 0x3, 0x41, 0x90, 0xc4, 0x61, 0x10, 0x48,
    0x12, 0x4, 0x81, 0x3f, 0xf0, 0x10, 0x4, 0x1,
    0x0, 0x40, 0x10, 0x4,

    /* U+0035 "5" */
    0xff, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x3f, 0x80,
    0x10, 0x2, 0x0, 0x40, 0x10, 0x4, 0x1, 0x0,
    0xc0, 0x20, 0x13, 0xf8,

    /* U+0036 "6" */
    0x10, 0xc, 0x6, 0x3, 0x0, 0x80, 0x20, 0xb,
    0xe3, 0x84, 0xc0, 0xa0, 0x18, 0x6, 0x1, 0x40,
    0x88, 0x41, 0xe0,

    /* U+0037 "7" */
    0x0, 0x0, 0x3, 0xff, 0x0, 0x20, 0xc, 0x3,
    0x0, 0xc0, 0x30, 0xc, 0x1, 0x0, 0x40, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0,

    /* U+0038 "8" */
    0x1e, 0xc, 0xc2, 0x10, 0x84, 0x21, 0x8, 0x43,
    0x30, 0x78, 0x21, 0x10, 0x28, 0x6, 0x1, 0x80,
    0x50, 0x22, 0x10, 0x78,

    /* U+0039 "9" */
    0x1f, 0x88, 0x34, 0x6, 0x3, 0x81, 0xe0, 0xfc,
    0x65, 0xf1, 0x0, 0x40, 0x10, 0x4, 0x1, 0x0,
    0xc0, 0x20,

    /* U+003A ":" */
    0xff, 0x80, 0x3f, 0xe0,

    /* U+003B ";" */
    0x39, 0xce, 0x0, 0x0, 0xe7, 0x7f, 0xb8, 0x80,

    /* U+003C "<" */
    0x6, 0x18, 0x71, 0xc3, 0xc, 0x30, 0x60, 0x60,
    0x60, 0x60, 0x60, 0x60, 0x40,

    /* U+003D "=" */
    0xff, 0xc0, 0x0, 0x0, 0x0, 0xff, 0xc0,

    /* U+003E ">" */
    0xc1, 0xc1, 0xc1, 0xc1, 0x81, 0x81, 0x83, 0xc,
    0x30, 0xc3, 0xc, 0x10, 0x0,

    /* U+003F "?" */
    0x7f, 0x60, 0xa0, 0x30, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x8, 0x4, 0x2, 0x0, 0x0, 0x0,
    0x0, 0x20,

    /* U+0040 "@" */
    0x7f, 0xb0, 0x38, 0x6, 0x1, 0x80, 0x63, 0x99,
    0xa6, 0x69, 0x92, 0xe7, 0xe8, 0x2, 0x0, 0x80,
    0x20, 0xc, 0x1, 0xff,

    /* U+0041 "A" */
    0xc, 0x7, 0x83, 0x31, 0x86, 0x40, 0xa0, 0x18,
    0x6, 0x1, 0xff, 0xe0, 0x18, 0x6, 0x1, 0x80,
    0x60, 0x10,

    /* U+0042 "B" */
    0xfe, 0x8, 0x42, 0x18, 0x83, 0x20, 0xc8, 0x62,
    0x10, 0xfc, 0x21, 0x88, 0x32, 0xc, 0x82, 0x21,
    0x3f, 0x80,

    /* U+0043 "C" */
    0xf, 0x86, 0x33, 0x1, 0x80, 0xc0, 0x20, 0x8,
    0x2, 0x0, 0x80, 0x10, 0x6, 0x0, 0xc0, 0x18,
    0xc3, 0xe0,

    /* U+0044 "D" */
    0xfe, 0x8, 0x42, 0x8, 0x81, 0x20, 0x48, 0x12,
    0x4, 0x81, 0x20, 0x48, 0x12, 0x4, 0x82, 0x21,
    0x3f, 0x80,

    /* U+0045 "E" */
    0xff, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x3, 0xf8, 0x80, 0x20, 0x8, 0x2, 0x0, 0x80,
    0x3f, 0xf0,

    /* U+0046 "F" */
    0xff, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x3, 0xfe, 0x80, 0x20, 0x8, 0x2, 0x0, 0x80,
    0x20, 0x0,

    /* U+0047 "G" */
    0x1e, 0x8, 0xc4, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x8f, 0xe0, 0x4c, 0x11, 0x4, 0x21,
    0x7, 0xc0,

    /* U+0048 "H" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x7, 0xff, 0x80, 0x60, 0x18, 0x6, 0x1, 0x80,
    0x60, 0x10,

    /* U+0049 "I" */
    0xf2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x2f,

    /* U+004A "J" */
    0x7, 0x81, 0x0, 0x80, 0x40, 0x20, 0x10, 0x8,
    0x4, 0x2, 0x1, 0x20, 0x90, 0x4c, 0x23, 0xe0,

    /* U+004B "K" */
    0x80, 0x60, 0x38, 0x1a, 0xc, 0x86, 0x23, 0x9,
    0x82, 0xe0, 0xec, 0x31, 0x88, 0x32, 0x6, 0x80,
    0xe0, 0x10,

    /* U+004C "L" */
    0x80, 0x20, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x80, 0x20, 0x8, 0x2, 0x0, 0x80,
    0x3f, 0xf0,

    /* U+004D "M" */
    0xc0, 0x3c, 0x1f, 0xc7, 0xdd, 0xd9, 0xf3, 0x8,
    0x61, 0xc, 0x21, 0x80, 0x30, 0x6, 0x0, 0xc0,
    0x18, 0x3, 0x0, 0x40,

    /* U+004E "N" */
    0xc0, 0x78, 0x1f, 0x6, 0xe1, 0x9c, 0x63, 0x98,
    0x76, 0xf, 0x81, 0xe0, 0x38, 0x6, 0x1, 0x80,
    0x60, 0x10,

    /* U+004F "O" */
    0x7f, 0xb0, 0x38, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0xc0,
    0xdf, 0xe0,

    /* U+0050 "P" */
    0xfe, 0x20, 0x48, 0xa, 0x1, 0x80, 0x60, 0x18,
    0xa, 0x4, 0xfe, 0x20, 0x8, 0x2, 0x0, 0x80,
    0x20, 0x0,

    /* U+0051 "Q" */
    0x1e, 0xc, 0x46, 0xa, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x45, 0x92, 0x37,
    0x7, 0xc0, 0x18, 0x3, 0x0, 0x40,

    /* U+0052 "R" */
    0xff, 0xa0, 0x38, 0x6, 0x1, 0x80, 0x60, 0x18,
    0xf, 0xfe, 0x8c, 0x21, 0x88, 0x32, 0x6, 0x80,
    0xe0, 0x10,

    /* U+0053 "S" */
    0x7f, 0xb0, 0x38, 0x7, 0x0, 0xe0, 0xc, 0x1,
    0xc0, 0x38, 0x3, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x9f, 0xe0,

    /* U+0054 "T" */
    0xff, 0xc1, 0x0, 0x40, 0x10, 0x4, 0x1, 0x0,
    0x40, 0x10, 0x4, 0x1, 0x0, 0x40, 0x10, 0x4,
    0x1, 0x0,

    /* U+0055 "U" */
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x6, 0x1, 0x80, 0x60, 0x18, 0x6, 0x1, 0xc0,
    0xdf, 0xe0,

    /* U+0056 "V" */
    0x80, 0x60, 0x18, 0x7, 0x3, 0x40, 0x90, 0x22,
    0x10, 0x84, 0x33, 0x4, 0x81, 0xe0, 0x70, 0xc,
    0x3, 0x0,

    /* U+0057 "W" */
    0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x61, 0xc, 0x21, 0x84, 0x30, 0x86, 0x38, 0xcd,
    0x9f, 0x1e, 0x41, 0x0,

    /* U+0058 "X" */
    0x80, 0x60, 0x1c, 0xd, 0x86, 0x33, 0x7, 0x81,
    0xe0, 0x78, 0x1e, 0xc, 0xc6, 0x1b, 0x3, 0x80,
    0x60, 0x10,

    /* U+0059 "Y" */
    0x80, 0x38, 0xd, 0x83, 0xc, 0x80, 0xe0, 0x8,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2,
    0x0, 0x40, 0x8, 0x0,

    /* U+005A "Z" */
    0xff, 0xc0, 0x10, 0xc, 0x6, 0x3, 0x1, 0x80,
    0xe0, 0x70, 0x18, 0xc, 0x6, 0x3, 0x0, 0x80,
    0x3f, 0xf0,

    /* U+005B "[" */
    0xfc, 0x21, 0x8, 0x42, 0x10, 0x84, 0x21, 0x8,
    0x42, 0x1f,

    /* U+005C "\\" */
    0xc0, 0x18, 0x3, 0x0, 0xe0, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x4,

    /* U+005D "]" */
    0xf1, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x1f,

    /* U+005E "^" */
    0x10, 0x71, 0xb6, 0x30,

    /* U+005F "_" */
    0xff, 0xc0,

    /* U+0060 "`" */
    0x6, 0x18, 0x61, 0x80,

    /* U+0061 "a" */
    0x7e, 0x0, 0x80, 0x10, 0x4, 0x1, 0x1f, 0xcc,
    0x12, 0x4, 0x81, 0x30, 0x47, 0xfc,

    /* U+0062 "b" */
    0x80, 0x40, 0x20, 0x10, 0x8, 0x7, 0xe2, 0x9,
    0x2, 0x81, 0xc0, 0x60, 0x30, 0x18, 0x1c, 0x1a,
    0x19, 0xf8,

    /* U+0063 "c" */
    0x1f, 0x90, 0x10, 0x18, 0x8, 0x4, 0x2, 0x1,
    0x80, 0x40, 0x10, 0x7, 0xe0,

    /* U+0064 "d" */
    0x0, 0x80, 0x40, 0x20, 0x10, 0x8, 0xfc, 0x82,
    0xc1, 0xc0, 0xc0, 0x60, 0x30, 0x1c, 0xb, 0x4,
    0xc2, 0x3f,

    /* U+0065 "e" */
    0x3f, 0x20, 0xe0, 0x30, 0x18, 0xf, 0xfe, 0x1,
    0x0, 0x80, 0x60, 0x1f, 0xe0,

    /* U+0066 "f" */
    0xf, 0x8c, 0x4, 0x2, 0x1, 0x7, 0xf0, 0x40,
    0x20, 0x10, 0x8, 0x4, 0x2, 0x1, 0x0, 0x80,
    0x40, 0x20,

    /* U+0067 "g" */
    0x1f, 0x10, 0xd0, 0x30, 0x18, 0xe, 0xc, 0x8e,
    0x3d, 0x0, 0x80, 0x40, 0x2c, 0x33, 0xf0,

    /* U+0068 "h" */
    0x80, 0x40, 0x20, 0x10, 0x8, 0x5, 0xf3, 0x87,
    0x81, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1,

    /* U+0069 "i" */
    0x87, 0xff,

    /* U+006A "j" */
    0x2, 0x0, 0x0, 0x0, 0x0, 0x40, 0x81, 0x2,
    0x4, 0x8, 0x10, 0x20, 0x40, 0x81, 0x2, 0x8d,
    0xf0,

    /* U+006B "k" */
    0x80, 0x80, 0x80, 0x80, 0x80, 0x81, 0x83, 0x86,
    0x8c, 0x98, 0xf0, 0x98, 0x8c, 0x86, 0x83, 0x81,

    /* U+006C "l" */
    0x92, 0x49, 0x24, 0x92, 0x49, 0x23,

    /* U+006D "m" */
    0xfb, 0xcc, 0xe6, 0x84, 0x28, 0x42, 0x84, 0x28,
    0x42, 0x84, 0x28, 0x42, 0x84, 0x28, 0x42, 0x84,
    0x20,

    /* U+006E "n" */
    0xff, 0x18, 0xc8, 0x24, 0x12, 0x9, 0x4, 0x82,
    0x41, 0x20, 0x90, 0x48, 0x20,

    /* U+006F "o" */
    0x7f, 0x20, 0xa0, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xe0, 0xdf, 0xc0,

    /* U+0070 "p" */
    0xfc, 0x43, 0x20, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x81, 0x41, 0x3f, 0x10, 0x8, 0x4, 0x2,
    0x0,

    /* U+0071 "q" */
    0x1f, 0x8, 0x44, 0x13, 0x4, 0x81, 0x20, 0x48,
    0x12, 0x4, 0x41, 0x8, 0x41, 0xf0, 0x4, 0x1,
    0x0, 0x40, 0x1c,

    /* U+0072 "r" */
    0xde, 0x38, 0xd8, 0x68, 0x4, 0x2, 0x1, 0x0,
    0x80, 0x40, 0x20, 0x10, 0x0,

    /* U+0073 "s" */
    0x7e, 0x61, 0xb0, 0x5e, 0x3, 0x80, 0xe0, 0x38,
    0xe, 0x83, 0xe1, 0x9f, 0x80,

    /* U+0074 "t" */
    0x10, 0x20, 0x40, 0x81, 0x1f, 0xc4, 0x8, 0x10,
    0x20, 0x40, 0x81, 0x2, 0x4, 0x6,

    /* U+0075 "u" */
    0x81, 0x20, 0x48, 0x12, 0x4, 0x81, 0x20, 0x48,
    0x12, 0x4, 0x81, 0x30, 0xc7, 0xec,

    /* U+0076 "v" */
    0x80, 0x60, 0x18, 0x7, 0x2, 0x40, 0x88, 0x43,
    0x30, 0x48, 0x1e, 0x3, 0x0, 0xc0,

    /* U+0077 "w" */
    0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x8,
    0x61, 0xc, 0x71, 0x9b, 0x2e, 0x38, 0x82, 0x0,

    /* U+0078 "x" */
    0x80, 0x70, 0x36, 0x18, 0xcc, 0x1e, 0x3, 0x1,
    0xe0, 0xcc, 0x61, 0xb0, 0x38, 0x4,

    /* U+0079 "y" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x5, 0x82,
    0x63, 0x1b, 0x7, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x0,

    /* U+007A "z" */
    0xff, 0xc0, 0x60, 0x30, 0x1c, 0x6, 0x3, 0x1,
    0x80, 0xe0, 0x30, 0x18, 0xf, 0xfc,

    /* U+007B "{" */
    0x1e, 0x60, 0x81, 0x2, 0x4, 0x18, 0x60, 0x60,
    0x40, 0x81, 0x2, 0x4, 0xc, 0xf,

    /* U+007C "|" */
    0xff, 0xff, 0xf8,

    /* U+007D "}" */
    0xe0, 0x60, 0x40, 0x81, 0x2, 0x6, 0x7, 0x18,
    0x20, 0x40, 0x81, 0x2, 0xc, 0x70,

    /* U+007E "~" */
    0x70, 0x6c, 0x63, 0x20, 0xf0,

    /* U+007F "" */
    0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 187, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 187, .box_w = 1, .box_h = 16, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 3, .adv_w = 187, .box_w = 6, .box_h = 4, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 6, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 19, .adv_w = 187, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 43, .adv_w = 187, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 65, .adv_w = 187, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 187, .box_w = 1, .box_h = 4, .ofs_x = 6, .ofs_y = 13},
    {.bitmap_index = 83, .adv_w = 187, .box_w = 4, .box_h = 14, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 90, .adv_w = 187, .box_w = 4, .box_h = 14, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 97, .adv_w = 187, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 109, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 123, .adv_w = 187, .box_w = 5, .box_h = 6, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 127, .adv_w = 187, .box_w = 7, .box_h = 1, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 128, .adv_w = 187, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 130, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 146, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 164, .adv_w = 187, .box_w = 4, .box_h = 16, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 172, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 192, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 210, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 230, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 250, .adv_w = 187, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 269, .adv_w = 187, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 294, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 314, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 332, .adv_w = 187, .box_w = 3, .box_h = 9, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 336, .adv_w = 187, .box_w = 5, .box_h = 12, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 344, .adv_w = 187, .box_w = 7, .box_h = 14, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 357, .adv_w = 187, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 364, .adv_w = 187, .box_w = 7, .box_h = 14, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 377, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 395, .adv_w = 187, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 415, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 433, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 451, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 469, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 487, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 505, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 523, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 541, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 559, .adv_w = 187, .box_w = 4, .box_h = 14, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 566, .adv_w = 187, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 582, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 600, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 618, .adv_w = 187, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 638, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 656, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 674, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 692, .adv_w = 187, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 714, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 732, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 750, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 768, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 786, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 804, .adv_w = 187, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 824, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 842, .adv_w = 187, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 862, .adv_w = 187, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 880, .adv_w = 187, .box_w = 5, .box_h = 16, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 890, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 904, .adv_w = 187, .box_w = 4, .box_h = 16, .ofs_x = 4, .ofs_y = 1},
    {.bitmap_index = 912, .adv_w = 187, .box_w = 7, .box_h = 4, .ofs_x = 3, .ofs_y = 13},
    {.bitmap_index = 916, .adv_w = 187, .box_w = 10, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 918, .adv_w = 187, .box_w = 5, .box_h = 5, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 922, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 936, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 954, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 967, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 985, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 998, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1016, .adv_w = 187, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1031, .adv_w = 187, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1049, .adv_w = 187, .box_w = 1, .box_h = 16, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 1051, .adv_w = 187, .box_w = 7, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1068, .adv_w = 187, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1084, .adv_w = 187, .box_w = 3, .box_h = 16, .ofs_x = 6, .ofs_y = 1},
    {.bitmap_index = 1090, .adv_w = 187, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1107, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1120, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1133, .adv_w = 187, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1150, .adv_w = 187, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1169, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1182, .adv_w = 187, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1195, .adv_w = 187, .box_w = 7, .box_h = 16, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 1209, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1223, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1237, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1253, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1267, .adv_w = 187, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1284, .adv_w = 187, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 1298, .adv_w = 187, .box_w = 7, .box_h = 16, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 1312, .adv_w = 187, .box_w = 1, .box_h = 21, .ofs_x = 6, .ofs_y = -3},
    {.bitmap_index = 1315, .adv_w = 187, .box_w = 7, .box_h = 16, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 1329, .adv_w = 187, .box_w = 9, .box_h = 4, .ofs_x = 2, .ofs_y = 12},
    {.bitmap_index = 1334, .adv_w = 187, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font3270T24 = {
#else
lv_font_t ui_font_Font3270T24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 22,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT3270T24*/

