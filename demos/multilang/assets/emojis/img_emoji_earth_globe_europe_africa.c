#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif

#if LV_USE_DEMO_MULTILANG

#ifndef LV_ATTRIBUTE_MEM_ALIGN
    #define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMG_EMOJI_EARTH_GLOBE_EUROPE_AFRICA
    #define LV_ATTRIBUTE_IMG_IMG_EMOJI_EARTH_GLOBE_EUROPE_AFRICA
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMG_EMOJI_EARTH_GLOBE_EUROPE_AFRICA uint8_t
img_emoji_earth_globe_europe_africa_map[] = {
    0xff, 0xf3, 0xec, 0xff, 0xd4, 0xff, 0xf2, 0xff, 0xff, 0xfd, 0xef, 0xff, 0xf2, 0xfd, 0xf5, 0xff, 0xff, 0xf5, 0xff, 0xff, 0xef, 0xfc, 0xff, 0xff, 0xff, 0xec, 0xf2, 0xff, 0xf6, 0xf9, 0xe9, 0xff, 0xc6, 0xe7, 0xcc, 0xff, 0xff, 0xde, 0xd3, 0xff, 0xff, 0xf4, 0xea, 0xff, 0xf2, 0xff, 0xf7, 0xff, 0xff, 0xf9, 0xf6, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xef, 0xff, 0xff, 0xff, 0xf0, 0xf8, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xfa, 0xff, 0xff, 0xff, 0xf7, 0xff, 0xff, 0xff,
    0xed, 0xfc, 0xff, 0xff, 0xe6, 0xed, 0xff, 0xff, 0xfd, 0xfb, 0xff, 0xff, 0xf4, 0xfa, 0xef, 0xff, 0xfb, 0xf9, 0xd0, 0xff, 0xd5, 0xca, 0x8e, 0xff, 0xd7, 0xba, 0x7d, 0xff, 0xda, 0x84, 0x56, 0xff, 0xcd, 0xaa, 0x54, 0xff, 0xe4, 0x92, 0x4b, 0xff, 0xdd, 0x91, 0x56, 0xff, 0xc6, 0xa8, 0x77, 0xff, 0xcc, 0xc3, 0xa2, 0xff, 0xe3, 0xe3, 0xd3, 0xff, 0xff, 0xfa, 0xf9, 0xff, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xf6, 0xfb, 0xfa, 0xff,
    0xf8, 0xf1, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xda, 0xff, 0xff, 0xff, 0xde, 0xe0, 0xbc, 0xff, 0xeb, 0xa9, 0x5a, 0xff, 0xde, 0x88, 0x24, 0xff, 0xdf, 0xa0, 0x48, 0xff, 0x30, 0xd2, 0x72, 0xff, 0x02, 0xef, 0x9f, 0xff, 0x00, 0xe8, 0x99, 0xff, 0x0c, 0xd7, 0x92, 0xff, 0x27, 0xd1, 0x96, 0xff, 0x29, 0xd8, 0x9f, 0xff, 0x50, 0xdc, 0xad, 0xff, 0xb4, 0xec, 0xcf, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xfa, 0xfa, 0xfa, 0xff,
    0xff, 0xfd, 0xf0, 0xff, 0xff, 0xff, 0xeb, 0xff, 0xca, 0xcc, 0x98, 0xff, 0xff, 0x96, 0x59, 0xff, 0xf5, 0x91, 0x3f, 0xff, 0x44, 0xdd, 0x6a, 0xff, 0xae, 0xa6, 0x6a, 0xff, 0x1b, 0xfc, 0xb1, 0xff, 0x53, 0xbf, 0xa9, 0xff, 0x17, 0xe4, 0xbd, 0xff, 0x14, 0xe9, 0xbc, 0xff, 0x23, 0xde, 0xb1, 0xff, 0x00, 0xe1, 0xa9, 0xff, 0x00, 0xd7, 0x99, 0xff, 0x2d, 0xd7, 0xa2, 0xff, 0x62, 0xfa, 0xc5, 0xff, 0xfb, 0xfd, 0xf7, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfe, 0xff,
    0xee, 0xff, 0xf7, 0xff, 0xe2, 0xee, 0xb2, 0xff, 0xda, 0x9d, 0x3b, 0xff, 0xf0, 0x99, 0x31, 0xff, 0xac, 0xb7, 0x61, 0xff, 0x00, 0xfb, 0xa4, 0xff, 0x45, 0xa2, 0x75, 0xff, 0x12, 0xcd, 0x8f, 0xff, 0x5a, 0xbf, 0x71, 0xff, 0x08, 0xec, 0x8d, 0xff, 0x00, 0xf4, 0x97, 0xff, 0x0e, 0xea, 0x9d, 0xff, 0x0f, 0xf6, 0xb1, 0xff, 0x12, 0xee, 0xb2, 0xff, 0x1e, 0xd9, 0xab, 0xff, 0x14, 0xde, 0xaf, 0xff, 0xca, 0xec, 0xdb, 0xff, 0xf1, 0xff, 0xf7, 0xff, 0xff, 0xff, 0xfc, 0xff,
    0xdc, 0xf6, 0xfd, 0xff, 0xdf, 0x9b, 0x6e, 0xff, 0xff, 0xa4, 0x3b, 0xff, 0xdd, 0xb0, 0x37, 0xff, 0xf4, 0x98, 0x57, 0xff, 0xfa, 0x87, 0x72, 0xff, 0x95, 0xa9, 0x7e, 0xff, 0x79, 0xd1, 0x85, 0xff, 0x36, 0xcf, 0x97, 0xff, 0x0e, 0xed, 0xa9, 0xff, 0x00, 0xf1, 0xac, 0xff, 0x00, 0xe2, 0xa3, 0xff, 0x09, 0xde, 0xa6, 0xff, 0x17, 0xdb, 0xa9, 0xff, 0x12, 0xd2, 0xa3, 0xff, 0x00, 0xce, 0x9c, 0xff, 0x83, 0xd6, 0xb6, 0xff, 0xca, 0xf8, 0xe5, 0xff, 0xfb, 0xff, 0xfc, 0xff,
    0xff, 0xe3, 0xd6, 0xff, 0xe4, 0x77, 0x44, 0xff, 0xfa, 0x98, 0x34, 0xff, 0xcf, 0x9c, 0x28, 0xff, 0xe8, 0x95, 0x47, 0xff, 0x82, 0xad, 0x6c, 0xff, 0x00, 0xef, 0x93, 0xff, 0x05, 0xf6, 0x94, 0xff, 0x00, 0xe2, 0xc3, 0xff, 0x1a, 0xdb, 0xc1, 0xff, 0x22, 0xdf, 0xc0, 0xff, 0x0e, 0xe1, 0xb9, 0xff, 0x09, 0xd9, 0xa9, 0xff, 0x0f, 0xdf, 0xa9, 0xff, 0x18, 0xea, 0xae, 0xff, 0x23, 0xe7, 0xab, 0xff, 0x43, 0xc6, 0x9b, 0xff, 0xa3, 0xf0, 0xd4, 0xff, 0xf6, 0xff, 0xfb, 0xff,
    0xcc, 0xb8, 0x6a, 0xff, 0xf2, 0x8c, 0x3a, 0xff, 0xed, 0xa5, 0x3a, 0xff, 0xb9, 0xa3, 0x2c, 0xff, 0xf8, 0x9c, 0x43, 0xff, 0x5b, 0xda, 0x7e, 0xff, 0x5c, 0xbd, 0x85, 0xff, 0x3e, 0xc3, 0x98, 0xff, 0x22, 0xed, 0x86, 0xff, 0x72, 0xb3, 0x67, 0xff, 0x7f, 0xab, 0x68, 0xff, 0x4d, 0xca, 0x82, 0xff, 0x32, 0xd3, 0x8f, 0xff, 0x1c, 0xdc, 0x9b, 0xff, 0x12, 0xdf, 0xa1, 0xff, 0x26, 0xc9, 0x95, 0xff, 0x21, 0xc2, 0x90, 0xff, 0x8f, 0xed, 0xce, 0xff, 0xf1, 0xff, 0xf9, 0xff,
    0xc3, 0x9d, 0x55, 0xff, 0xe6, 0x9b, 0x39, 0xff, 0xdf, 0x90, 0x17, 0xff, 0xf3, 0x95, 0x34, 0xff, 0xe6, 0x7a, 0x4b, 0xff, 0x4c, 0xc1, 0x8a, 0xff, 0x62, 0xcc, 0x87, 0xff, 0x8e, 0xa0, 0x4d, 0xff, 0x90, 0x97, 0x5e, 0xff, 0x64, 0xb0, 0x76, 0xff, 0x31, 0xe6, 0xa2, 0xff, 0x20, 0xd7, 0x93, 0xff, 0x0f, 0xd8, 0x8e, 0xff, 0x02, 0xde, 0x92, 0xff, 0x3e, 0xe8, 0xae, 0xff, 0x43, 0xc2, 0x9b, 0xff, 0x17, 0xcd, 0x9d, 0xff, 0x6a, 0xcd, 0xb3, 0xff, 0xf7, 0xff, 0xfe, 0xff,
    0xf2, 0x93, 0x5b, 0xff, 0xf9, 0x89, 0x35, 0xff, 0xdc, 0x8d, 0x1e, 0xff, 0xf1, 0x97, 0x3e, 0xff, 0x84, 0xaf, 0x70, 0xff, 0x15, 0xd6, 0x9d, 0xff, 0x20, 0xd4, 0x93, 0xff, 0x48, 0xd3, 0x82, 0xff, 0x3d, 0xd2, 0x8e, 0xff, 0x46, 0xc3, 0x8b, 0xff, 0x15, 0xd4, 0x97, 0xff, 0x4f, 0xd7, 0x9d, 0xff, 0x3c, 0xca, 0x87, 0xff, 0x41, 0xcc, 0x88, 0xff, 0x3a, 0xd3, 0x96, 0xff, 0x06, 0xd7, 0x9b, 0xff, 0x4e, 0xc9, 0x91, 0xff, 0x7e, 0xc3, 0xa2, 0xff, 0xf7, 0xff, 0xfa, 0xff,
    0xcc, 0x9a, 0x60, 0xff, 0xcf, 0x80, 0x2f, 0xff, 0xc2, 0x92, 0x28, 0xff, 0xd4, 0x8f, 0x38, 0xff, 0x32, 0xd0, 0x83, 0xff, 0x15, 0xdf, 0xaa, 0xff, 0x28, 0xce, 0x9f, 0xff, 0x37, 0xe6, 0xa7, 0xff, 0x3a, 0xe2, 0xa7, 0xff, 0x04, 0xd1, 0x93, 0xff, 0x68, 0xae, 0x86, 0xff, 0x5d, 0xce, 0x94, 0xff, 0x82, 0xa3, 0x66, 0xff, 0xcc, 0x92, 0x5e, 0xff, 0x4a, 0xaa, 0x63, 0xff, 0x3a, 0xcc, 0x84, 0xff, 0x8a, 0xad, 0x6a, 0xff, 0x9e, 0xb9, 0x8d, 0xff, 0xf2, 0xff, 0xf3, 0xff,
    0xe1, 0xaf, 0x7a, 0xff, 0xe4, 0x75, 0x2d, 0xff, 0xf4, 0x8e, 0x2e, 0xff, 0xca, 0x83, 0x28, 0xff, 0x3f, 0xc1, 0x6c, 0xff, 0x27, 0xda, 0x9d, 0xff, 0x33, 0xc8, 0x9c, 0xff, 0x07, 0xdd, 0xa2, 0xff, 0x44, 0xcd, 0x99, 0xff, 0x24, 0xce, 0x94, 0xff, 0x5b, 0xba, 0x87, 0xff, 0x5b, 0xbe, 0x76, 0xff, 0xcd, 0x83, 0x43, 0xff, 0xcb, 0x7a, 0x2f, 0xff, 0xca, 0x82, 0x3a, 0xff, 0x8b, 0xaf, 0x5d, 0xff, 0xac, 0x82, 0x3b, 0xff, 0xcd, 0xbf, 0x8f, 0xff, 0xf2, 0xff, 0xee, 0xff,
    0xe0, 0xe1, 0xa9, 0xff, 0xd5, 0x75, 0x33, 0xff, 0xff, 0x7f, 0x28, 0xff, 0xd7, 0x84, 0x21, 0xff, 0xb0, 0x9c, 0x47, 0xff, 0x70, 0xb3, 0x6e, 0xff, 0x81, 0xae, 0x7d, 0xff, 0x31, 0xc4, 0x88, 0xff, 0x3b, 0xc7, 0x8c, 0xff, 0x39, 0xd5, 0x94, 0xff, 0x21, 0xdd, 0x8b, 0xff, 0x73, 0xa7, 0x54, 0xff, 0xd5, 0x8d, 0x35, 0xff, 0xd0, 0x85, 0x21, 0xff, 0xed, 0x88, 0x2c, 0xff, 0xaf, 0x8d, 0x2f, 0xff, 0xb9, 0x70, 0x32, 0xff, 0xfb, 0xdb, 0xb0, 0xff, 0xf9, 0xff, 0xf4, 0xff,
    0xd6, 0xff, 0xda, 0xff, 0xad, 0x8f, 0x56, 0xff, 0xe0, 0x75, 0x24, 0xff, 0xe4, 0x84, 0x20, 0xff, 0xff, 0x81, 0x29, 0xff, 0xbe, 0x83, 0x34, 0xff, 0xd4, 0x80, 0x4c, 0xff, 0x82, 0xae, 0x71, 0xff, 0x42, 0xc5, 0x86, 0xff, 0x4b, 0xcf, 0x8c, 0xff, 0x2e, 0xce, 0x7a, 0xff, 0xb6, 0x82, 0x36, 0xff, 0xd3, 0x92, 0x30, 0xff, 0xff, 0x80, 0x21, 0xff, 0xcc, 0x8d, 0x25, 0xff, 0xc5, 0x70, 0x14, 0xff, 0xcb, 0x91, 0x67, 0xff, 0xff, 0xfb, 0xe2, 0xff, 0xfd, 0xff, 0xfb, 0xff,
    0xff, 0xf7, 0xfa, 0xff, 0xe4, 0xc8, 0xaa, 0xff, 0xc7, 0x88, 0x44, 0xff, 0xf7, 0x77, 0x1e, 0xff, 0xe8, 0x81, 0x1a, 0xff, 0xcc, 0x7c, 0x1f, 0xff, 0xcc, 0x71, 0x2c, 0xff, 0x62, 0xb1, 0x60, 0xff, 0x3e, 0xc2, 0x86, 0xff, 0x7d, 0xbb, 0x87, 0xff, 0x4c, 0xaf, 0x67, 0xff, 0xc5, 0x7e, 0x3a, 0xff, 0xe2, 0x83, 0x2c, 0xff, 0xf1, 0x7d, 0x1f, 0xff, 0xed, 0x78, 0x23, 0xff, 0xcd, 0x86, 0x36, 0xff, 0xe1, 0xd2, 0xbf, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xfd, 0xff, 0xff,
    0xff, 0xef, 0xff, 0xff, 0xe8, 0xff, 0xf7, 0xff, 0x9e, 0xb6, 0x76, 0xff, 0xf4, 0x6f, 0x1e, 0xff, 0xb3, 0x8b, 0x1a, 0xff, 0xf5, 0x89, 0x2a, 0xff, 0xef, 0x70, 0x2b, 0xff, 0x72, 0xae, 0x5a, 0xff, 0x45, 0xc2, 0x90, 0xff, 0x37, 0xc9, 0x8f, 0xff, 0xa4, 0x97, 0x69, 0xff, 0x5a, 0xad, 0x58, 0xff, 0xb3, 0x85, 0x31, 0xff, 0xc2, 0x7b, 0x23, 0xff, 0xc4, 0x7f, 0x30, 0xff, 0xe5, 0xb8, 0x74, 0xff, 0xf1, 0xff, 0xfe, 0xff, 0xfa, 0xfe, 0xff, 0xff, 0xfb, 0xf1, 0xfe, 0xff,
    0xff, 0xf5, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xfc, 0xf3, 0xe9, 0xff, 0xd9, 0xbb, 0x9e, 0xff, 0xbb, 0x7c, 0x4a, 0xff, 0xbe, 0x70, 0x24, 0xff, 0xce, 0x87, 0x26, 0xff, 0xcd, 0x95, 0x24, 0xff, 0x40, 0xd3, 0x81, 0xff, 0x70, 0xb1, 0x5b, 0xff, 0xb2, 0x8d, 0x31, 0xff, 0xd9, 0x79, 0x1c, 0xff, 0xcd, 0x6f, 0x1c, 0xff, 0xc0, 0x80, 0x49, 0xff, 0xe5, 0xbc, 0xa5, 0xff, 0xff, 0xfb, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0xff, 0xff, 0xfd, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff, 0xd4, 0xb7, 0xff, 0xd4, 0x98, 0x6e, 0xff, 0xb1, 0x7a, 0x41, 0xff, 0x9d, 0x73, 0x2e, 0xff, 0x86, 0x84, 0x54, 0xff, 0x9e, 0x76, 0x42, 0xff, 0xbb, 0x6d, 0x32, 0xff, 0xcb, 0x81, 0x41, 0xff, 0xd3, 0xb1, 0x75, 0xff, 0xda, 0xe4, 0xb9, 0xff, 0xe1, 0xff, 0xec, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf3, 0xfb, 0xf4, 0xff, 0xec, 0xfa, 0xf4, 0xff, 0xf4, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xfb, 0xff, 0xff, 0xfe, 0xf9, 0xff, 0xff, 0xfe, 0xf5, 0xff, 0xff, 0xf3, 0xe4, 0xff, 0xf1, 0xd9, 0xc5, 0xff, 0xff, 0xd1, 0xb5, 0xff, 0xff, 0xd3, 0xb6, 0xff, 0xff, 0xdc, 0xbe, 0xff, 0xff, 0xee, 0xd0, 0xff, 0xfb, 0xff, 0xec, 0xff, 0xed, 0xff, 0xf8, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xf4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

const lv_img_dsc_t img_emoji_earth_globe_europe_africa = {
    .header.cf = LV_COLOR_FORMAT_ARGB8888,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 19,
    .header.h = 19,
    //  .data_size = 361 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .data = img_emoji_earth_globe_europe_africa_map,
};

#endif