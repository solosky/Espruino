/*
 * This file is part of Espruino, a JavaScript interpreter for Microcontrollers
 *
 * Copyright (C) 2013 Gordon Williams <gw@pur3.co.uk>
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * ----------------------------------------------------------------------------
 * This file is designed to be parsed during the build process
 *
 * Contains Custom Fonts
 * ----------------------------------------------------------------------------
 */
/* DO_NOT_INCLUDE_IN_DOCS - this is a special token for common.py */
#include "jswrap_font_monofonto_16.h"
#include "jswrap_graphics.h"

// Monofonto (ASCII upper and lowercase) at 4bpp. Nominal height: 16px, cap height: 16px, total height = 19px

// Fixed width: 8px

static const unsigned char fontBitmap[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 51, 51, 51, 51, 0, 5, 16, 0, 3, 255, 255, 255, 255, 244, 15, 255, 16, 0, 63, 255, 255, 255, 255, 64, 255, 241, 0, 0, 51, 51, 51, 51, 48, 1, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 187, 187, 178, 0, 0, 0, 0, 0, 0, 63, 255, 255, 64, 0, 0, 0, 0, 0, 0, 119, 119, 113, 0, 0, 0, 0, 0, 0, 7, 119, 119, 16, 0, 0, 0, 0, 0, 3, 255, 255, 244, 0, 0, 0, 0, 0, 0, 27, 187, 187, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 227, 2, 80, 0, 0, 0, 5, 252, 5, 255, 255, 255, 0, 0, 0, 55, 207, 255, 255, 255, 201, 80, 0, 2, 255, 255, 255, 166, 239, 52, 139, 0, 0, 27, 132, 127, 230, 175, 255, 255, 240, 0, 0, 89, 207, 255, 255, 255, 199, 48, 0, 0, 63, 255, 255, 229, 14, 242, 0, 0, 0, 0, 98, 5, 232, 0, 0, 0, 0, 0, 0, 0, 5, 134, 32, 0, 7, 32, 0, 0, 0, 95, 255, 255, 160, 0, 255, 243, 0, 0, 31, 255, 255, 255, 144, 14, 255, 224, 0, 15, 255, 112, 127, 255, 64, 10, 255, 255, 0, 239, 248, 0, 191, 255, 48, 175, 253, 192, 0, 255, 251, 0, 239, 255, 255, 254, 0, 0, 6, 239, 192, 1, 223, 255, 255, 32, 0, 0, 0, 2, 0, 0, 73, 131, 0, 0, 0, 31, 255, 255, 255, 96, 0, 26, 240, 0, 8, 252, 68, 70, 253, 1, 191, 253, 0, 0, 63, 255, 255, 255, 171, 255, 195, 0, 0, 0, 74, 187, 188, 255, 252, 32, 0, 0, 0, 0, 0, 60, 255, 235, 170, 169, 48, 0, 0, 3, 223, 251, 191, 255, 255, 255, 0, 0, 29, 255, 161, 14, 246, 68, 76, 245, 0, 3, 249, 0, 0, 159, 255, 255, 255, 0, 0, 0, 0, 0, 0, 109, 255, 251, 16, 0, 0, 109, 254, 196, 207, 255, 255, 255, 0, 0, 63, 255, 255, 255, 250, 17, 223, 243, 0, 7, 253, 7, 255, 255, 248, 13, 255, 16, 0, 47, 255, 255, 234, 255, 255, 255, 160, 0, 0, 75, 237, 128, 0, 239, 255, 250, 0, 0, 0, 0, 0, 1, 239, 254, 255, 240, 0, 0, 0, 0, 0, 10, 249, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 255, 255, 243, 0, 0, 0, 0, 0, 0, 47, 255, 255, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 105, 188, 202, 134, 48, 0, 0, 7, 223, 255, 255, 255, 255, 255, 253, 112, 15, 255, 253, 185, 117, 87, 155, 223, 255, 251, 251, 80, 0, 0, 0, 0, 0, 6, 207, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 181, 0, 0, 0, 0, 0, 0, 107, 245, 255, 255, 219, 151, 85, 121, 189, 255, 255, 177, 125, 255, 255, 255, 255, 255, 255, 215, 0, 0, 0, 70, 155, 204, 168, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 251, 0, 0, 0, 0, 0, 0, 0, 0, 159, 224, 63, 160, 0, 0, 0, 0, 0, 0, 255, 127, 255, 32, 0, 0, 0, 3, 255, 239, 255, 248, 0, 0, 0, 0, 0, 47, 254, 255, 253, 80, 0, 0, 0, 0, 0, 0, 15, 250, 255, 225, 0, 0, 0, 0, 0, 10, 253, 6, 251, 0, 0, 0, 0, 0, 0, 223, 144, 2, 0, 0, 0, 0, 0, 0, 0, 0, 12, 192, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 126, 238, 255, 238, 231, 0, 0, 0, 0, 6, 238, 239, 254, 238, 112, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 121, 181, 0, 0, 0, 0, 0, 0, 47, 255, 255, 176, 0, 0, 0, 0, 0, 0, 255, 200, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 204, 0, 0, 0, 0, 0, 0, 0, 0, 127, 240, 0, 0, 0, 0, 0, 0, 0, 7, 255, 0, 0, 0, 0, 0, 0, 0, 0, 127, 240, 0, 0, 0, 0, 0, 0, 0, 7, 255, 0, 0, 0, 0, 0, 0, 0, 0, 76, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 16, 0, 0, 0, 0, 0, 0, 0, 15, 255, 16, 0, 0, 0, 0, 0, 0, 0, 255, 241, 0, 0, 0, 0, 0, 0, 0, 1, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 175, 80, 0, 0, 0, 0, 0, 2, 158, 255, 244, 0, 0, 0, 0, 1, 158, 255, 253, 96, 0, 0, 0, 1, 142, 255, 253, 112, 0, 0, 0, 1, 142, 255, 253, 112, 0, 0, 0, 0, 125, 255, 254, 129, 0, 0, 0, 0, 0, 255, 254, 145, 0, 0, 0, 0, 0, 0, 14, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 51, 51, 51, 51, 16, 0, 0, 0, 159, 255, 255, 255, 255, 255, 247, 0, 0, 47, 255, 255, 255, 255, 255, 255, 240, 0, 6, 255, 64, 0, 0, 0, 6, 255, 48, 0, 111, 244, 0, 0, 0, 0, 111, 243, 0, 2, 255, 255, 255, 255, 255, 255, 255, 0, 0, 9, 255, 255, 255, 255, 255, 255, 112, 0, 0, 0, 35, 51, 51, 51, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 144, 0, 0, 0, 0, 0, 0, 0, 191, 247, 0, 0, 0, 0, 0, 0, 0, 79, 255, 221, 221, 221, 221, 221, 0, 0, 15, 255, 255, 255, 255, 255, 255, 240, 0, 2, 153, 153, 153, 153, 153, 153, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 112, 0, 0, 0, 0, 16, 0, 0, 127, 255, 0, 0, 0, 3, 207, 0, 0, 31, 255, 224, 0, 0, 77, 255, 240, 0, 6, 255, 64, 0, 6, 239, 255, 255, 0, 0, 95, 249, 4, 159, 255, 255, 255, 240, 0, 0, 255, 255, 255, 255, 230, 12, 255, 0, 0, 3, 239, 255, 252, 80, 0, 207, 240, 0, 0, 0, 20, 16, 0, 0, 1, 68, 0, 0, 0, 22, 80, 0, 0, 6, 96, 0, 0, 0, 127, 252, 0, 0, 0, 239, 245, 0, 0, 31, 255, 160, 0, 0, 12, 255, 240, 0, 6, 255, 80, 3, 184, 0, 9, 255, 48, 0, 111, 248, 0, 223, 242, 0, 191, 242, 0, 0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 4, 239, 255, 248, 255, 255, 255, 48, 0, 0, 0, 22, 96, 2, 122, 150, 0, 0, 0, 0, 0, 0, 1, 159, 255, 32, 0, 0, 0, 0, 0, 59, 255, 255, 242, 0, 0, 0, 0, 5, 223, 255, 221, 255, 32, 0, 0, 0, 143, 255, 252, 48, 175, 242, 0, 0, 0, 63, 255, 255, 255, 255, 255, 255, 224, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 26, 170, 170, 170, 174, 255, 186, 160, 0, 0, 0, 0, 0, 0, 143, 242, 0, 0, 0, 0, 18, 52, 86, 114, 6, 80, 0, 0, 3, 255, 255, 255, 255, 96, 239, 244, 0, 0, 63, 255, 255, 255, 243, 12, 255, 240, 0, 3, 255, 144, 15, 250, 0, 9, 255, 48, 0, 63, 249, 0, 255, 224, 0, 207, 242, 0, 3, 255, 144, 14, 255, 255, 255, 255, 0, 0, 63, 249, 0, 63, 255, 255, 255, 48, 0, 0, 0, 0, 0, 5, 154, 133, 0, 0, 0, 0, 0, 0, 0, 89, 186, 112, 0, 0, 0, 0, 0, 26, 255, 255, 255, 244, 0, 0, 0, 3, 207, 255, 255, 255, 255, 240, 0, 0, 77, 255, 255, 255, 0, 11, 255, 32, 0, 63, 255, 252, 239, 240, 0, 191, 242, 0, 3, 255, 177, 10, 255, 255, 255, 255, 0, 0, 25, 16, 0, 14, 255, 255, 255, 48, 0, 0, 0, 0, 0, 5, 171, 167, 0, 0, 0, 27, 181, 0, 0, 0, 0, 0, 0, 0, 3, 255, 144, 0, 0, 0, 5, 191, 0, 0, 63, 249, 0, 0, 6, 207, 255, 240, 0, 3, 255, 144, 24, 223, 255, 255, 255, 0, 0, 63, 254, 239, 255, 255, 254, 147, 0, 0, 3, 255, 255, 255, 252, 96, 0, 0, 0, 0, 63, 255, 233, 48, 0, 0, 0, 0, 0, 2, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 151, 32, 41, 187, 128, 0, 0, 0, 111, 255, 255, 191, 255, 255, 244, 0, 0, 31, 255, 255, 255, 255, 255, 255, 240, 0, 5, 255, 128, 14, 255, 32, 11, 255, 32, 0, 111, 248, 0, 223, 242, 0, 191, 242, 0, 1, 255, 255, 255, 255, 255, 255, 255, 0, 0, 6, 255, 255, 252, 255, 255, 255, 64, 0, 0, 1, 105, 130, 2, 139, 184, 0, 0, 0, 0, 24, 187, 146, 0, 0, 0, 0, 0, 0, 111, 255, 255, 247, 0, 0, 42, 0, 0, 31, 255, 255, 255, 240, 3, 207, 240, 0, 5, 255, 128, 7, 255, 109, 255, 255, 0, 0, 95, 248, 0, 127, 255, 255, 252, 48, 0, 0, 255, 255, 255, 255, 255, 178, 0, 0, 0, 6, 255, 255, 255, 249, 16, 0, 0, 0, 0, 1, 139, 184, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 16, 0, 22, 16, 0, 0, 0, 0, 15, 255, 0, 15, 255, 0, 0, 0, 0, 0, 255, 240, 1, 255, 240, 0, 0, 0, 0, 1, 81, 0, 1, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 16, 0, 53, 122, 179, 0, 0, 0, 15, 255, 0, 79, 255, 255, 144, 0, 0, 0, 255, 240, 0, 255, 200, 32, 0, 0, 0, 1, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 211, 0, 0, 0, 0, 0, 0, 0, 14, 255, 208, 0, 0, 0, 0, 0, 0, 7, 254, 239, 96, 0, 0, 0, 0, 0, 0, 255, 52, 255, 0, 0, 0, 0, 0, 0, 191, 176, 12, 250, 0, 0, 0, 0, 0, 63, 241, 0, 31, 242, 0, 0, 0, 0, 14, 248, 0, 0, 159, 208, 0, 0, 0, 2, 220, 0, 0, 0, 205, 16, 0, 0, 0, 0, 13, 160, 11, 208, 0, 0, 0, 0, 0, 0, 254, 0, 239, 0, 0, 0, 0, 0, 0, 15, 224, 14, 240, 0, 0, 0, 0, 0, 0, 254, 0, 239, 0, 0, 0, 0, 0, 0, 15, 224, 14, 240, 0, 0, 0, 0, 0, 0, 254, 0, 239, 0, 0, 0, 0, 0, 0, 15, 224, 14, 240, 0, 0, 0, 0, 0, 0, 218, 0, 189, 0, 0, 0, 0, 0, 45, 192, 0, 0, 12, 209, 0, 0, 0, 0, 239, 128, 0, 9, 253, 0, 0, 0, 0, 3, 255, 16, 1, 255, 32, 0, 0, 0, 0, 11, 251, 0, 207, 160, 0, 0, 0, 0, 0, 15, 243, 79, 240, 0, 0, 0, 0, 0, 0, 127, 238, 246, 0, 0, 0, 0, 0, 0, 0, 239, 253, 0, 0, 0, 0, 0, 0, 0, 3, 221, 32, 0, 0, 0, 0, 0, 5, 112, 0, 0, 0, 0, 0, 0, 0, 127, 255, 0, 0, 0, 0, 0, 0, 0, 47, 255, 224, 4, 172, 0, 158, 176, 0, 6, 255, 64, 11, 255, 240, 15, 255, 48, 0, 95, 252, 125, 255, 251, 0, 158, 176, 0, 0, 255, 255, 255, 208, 0, 0, 0, 0, 0, 3, 207, 255, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 239, 255, 255, 255, 219, 48, 0, 0, 111, 255, 255, 255, 255, 255, 255, 144, 0, 15, 255, 200, 119, 119, 120, 191, 255, 48, 2, 255, 128, 93, 255, 253, 64, 127, 249, 0, 79, 242, 15, 255, 223, 255, 1, 255, 176, 1, 255, 160, 255, 32, 95, 240, 15, 251, 0, 12, 255, 255, 255, 255, 254, 0, 255, 176, 0, 8, 222, 255, 255, 255, 208, 15, 249, 0, 0, 0, 0, 0, 4, 156, 224, 0, 0, 0, 0, 21, 157, 255, 255, 255, 0, 0, 6, 173, 255, 255, 255, 255, 254, 176, 0, 3, 255, 255, 255, 236, 158, 255, 0, 0, 0, 63, 255, 255, 255, 219, 239, 240, 0, 0, 0, 106, 223, 255, 255, 255, 255, 253, 0, 0, 0, 0, 0, 89, 207, 255, 255, 240, 0, 0, 0, 0, 0, 0, 0, 72, 206, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 32, 3, 254, 0, 8, 255, 0, 0, 47, 250, 2, 207, 242, 0, 239, 240, 0, 0, 255, 255, 255, 255, 255, 255, 254, 0, 0, 5, 255, 255, 250, 255, 255, 255, 64, 0, 0, 0, 70, 80, 1, 122, 168, 16, 0, 0, 0, 6, 154, 170, 170, 169, 80, 0, 0, 0, 111, 255, 255, 255, 255, 255, 244, 0, 0, 15, 255, 255, 255, 255, 255, 255, 240, 0, 5, 255, 128, 0, 0, 0, 11, 255, 32, 0, 111, 247, 0, 0, 0, 0, 159, 243, 0, 1, 255, 251, 0, 0, 0, 223, 255, 0, 0, 6, 255, 192, 0, 0, 14, 255, 64, 0, 0, 0, 85, 0, 0, 0, 84, 0, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 144, 0, 0, 0, 12, 255, 0, 0, 31, 254, 16, 0, 0, 2, 255, 240, 0, 0, 255, 255, 255, 255, 255, 255, 254, 0, 0, 4, 255, 255, 255, 255, 255, 255, 48, 0, 0, 0, 88, 153, 153, 153, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 197, 91, 255, 117, 93, 255, 0, 0, 63, 249, 0, 143, 242, 0, 207, 240, 0, 3, 255, 144, 8, 255, 32, 12, 255, 0, 0, 63, 249, 0, 110, 225, 0, 207, 240, 0, 0, 17, 0, 0, 0, 0, 0, 17, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 144, 7, 255, 48, 0, 0, 0, 0, 63, 249, 0, 127, 243, 0, 0, 0, 0, 3, 255, 144, 7, 255, 48, 0, 0, 0, 0, 63, 249, 0, 127, 243, 0, 0, 0, 0, 0, 136, 48, 0, 0, 0, 0, 0, 0, 0, 0, 6, 154, 170, 170, 169, 96, 0, 0, 0, 111, 255, 255, 255, 255, 255, 246, 0, 0, 15, 255, 255, 255, 255, 255, 255, 240, 0, 5, 255, 128, 0, 0, 0, 10, 255, 48, 0, 111, 247, 0, 47, 244, 36, 223, 240, 0, 1, 255, 251, 2, 255, 255, 255, 255, 0, 0, 6, 255, 192, 47, 255, 255, 255, 240, 0, 0, 0, 85, 0, 68, 68, 68, 68, 0, 0, 6, 102, 102, 102, 102, 102, 102, 96, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 12, 255, 0, 0, 0, 0, 0, 0, 0, 0, 207, 240, 0, 0, 0, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 0, 102, 102, 102, 102, 102, 102, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 255, 128, 0, 0, 0, 10, 255, 0, 0, 63, 251, 51, 51, 51, 51, 223, 240, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 179, 51, 51, 51, 61, 255, 0, 0, 47, 248, 0, 0, 0, 0, 175, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 32, 0, 0, 0, 0, 0, 0, 0, 12, 255, 0, 0, 0, 0, 0, 0, 0, 0, 207, 240, 0, 0, 17, 0, 0, 0, 0, 13, 255, 0, 0, 63, 247, 0, 0, 0, 5, 255, 240, 0, 3, 255, 255, 255, 255, 255, 255, 252, 0, 0, 63, 255, 255, 255, 255, 255, 252, 0, 0, 0, 153, 153, 153, 153, 152, 97, 0, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 5, 223, 255, 250, 32, 0, 0, 0, 1, 175, 255, 255, 255, 255, 231, 0, 0, 2, 255, 255, 212, 4, 207, 255, 255, 0, 0, 63, 250, 16, 0, 0, 25, 255, 240, 0, 1, 112, 0, 0, 0, 0, 0, 92, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 0, 0, 0, 12, 255, 0, 0, 0, 0, 0, 0, 0, 0, 207, 240, 0, 0, 0, 0, 0, 0, 0, 12, 255, 0, 0, 0, 0, 0, 0, 0, 0, 207, 240, 0, 0, 0, 0, 0, 0, 0, 4, 119, 0, 0, 27, 187, 187, 187, 187, 187, 187, 176, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 255, 255, 217, 153, 153, 144, 0, 0, 4, 174, 255, 255, 253, 146, 0, 0, 0, 0, 40, 223, 255, 255, 233, 32, 0, 0, 2, 255, 255, 255, 253, 153, 153, 152, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 1, 187, 187, 187, 187, 187, 187, 187, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 238, 238, 238, 224, 0, 0, 174, 255, 255, 255, 215, 0, 0, 0, 0, 0, 1, 125, 255, 255, 255, 216, 16, 0, 2, 238, 238, 238, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 0, 119, 119, 119, 119, 119, 119, 119, 0, 0, 0, 6, 154, 170, 170, 169, 80, 0, 0, 0, 95, 255, 255, 255, 255, 255, 243, 0, 0, 15, 255, 255, 255, 255, 255, 255, 240, 0, 5, 255, 128, 0, 0, 0, 11, 255, 32, 0, 95, 248, 0, 0, 0, 0, 191, 242, 0, 0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 5, 255, 255, 255, 255, 255, 255, 48, 0, 0, 0, 105, 170, 170, 170, 149, 0, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 160, 0, 127, 246, 0, 0, 0, 0, 15, 254, 0, 14, 255, 48, 0, 0, 0, 0, 239, 255, 239, 255, 240, 0, 0, 0, 0, 3, 255, 255, 255, 246, 0, 0, 0, 0, 0, 0, 123, 203, 145, 0, 0, 0, 0, 0, 0, 6, 154, 170, 170, 168, 48, 0, 0, 0, 95, 255, 255, 255, 255, 255, 224, 0, 0, 15, 255, 255, 255, 255, 255, 255, 192, 0, 5, 255, 128, 0, 0, 0, 14, 255, 16, 0, 95, 248, 0, 0, 0, 0, 239, 255, 227, 0, 255, 255, 255, 255, 255, 255, 255, 255, 80, 5, 255, 255, 255, 255, 255, 254, 56, 228, 0, 0, 105, 170, 170, 170, 147, 0, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 160, 0, 127, 254, 112, 0, 0, 0, 31, 255, 0, 30, 255, 255, 250, 16, 0, 0, 255, 255, 255, 255, 223, 255, 255, 0, 0, 4, 255, 255, 255, 192, 8, 255, 240, 0, 0, 0, 122, 185, 48, 0, 0, 93, 0, 0, 0, 22, 150, 32, 0, 7, 80, 0, 0, 0, 127, 255, 255, 160, 0, 255, 245, 0, 0, 31, 255, 255, 255, 144, 14, 255, 240, 0, 5, 255, 112, 127, 255, 64, 10, 255, 48, 0, 111, 248, 0, 191, 255, 48, 175, 242, 0, 1, 255, 251, 0, 239, 255, 255, 255, 0, 0, 6, 255, 192, 1, 223, 255, 255, 64, 0, 0, 0, 34, 0, 0, 73, 150, 0, 0, 0, 45, 215, 0, 0, 0, 0, 0, 0, 0, 3, 255, 144, 0, 0, 0, 0, 0, 0, 0, 63, 251, 51, 51, 51, 51, 51, 48, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 3, 255, 179, 51, 51, 51, 51, 51, 0, 0, 63, 249, 0, 0, 0, 0, 0, 0, 0, 1, 221, 112, 0, 0, 0, 0, 0, 0, 0, 28, 204, 204, 204, 204, 203, 129, 0, 0, 3, 255, 255, 255, 255, 255, 255, 246, 0, 0, 46, 238, 238, 238, 238, 239, 255, 240, 0, 0, 0, 0, 0, 0, 0, 12, 255, 48, 0, 0, 0, 0, 0, 0, 0, 191, 243, 0, 2, 221, 221, 221, 221, 221, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 96, 0, 1, 204, 204, 204, 204, 204, 184, 16, 0, 0, 46, 184, 48, 0, 0, 0, 0, 0, 0, 3, 255, 255, 254, 201, 64, 0, 0, 0, 0, 29, 255, 255, 255, 255, 255, 217, 80, 0, 0, 0, 4, 139, 239, 255, 255, 255, 0, 0, 0, 0, 22, 156, 239, 255, 255, 240, 0, 1, 206, 255, 255, 255, 255, 253, 165, 0, 0, 63, 255, 255, 236, 149, 0, 0, 0, 0, 2, 236, 132, 0, 0, 0, 0, 0, 0, 0, 63, 254, 236, 185, 117, 49, 0, 0, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 8, 155, 205, 239, 255, 255, 255, 240, 0, 0, 0, 73, 223, 255, 255, 235, 115, 0, 0, 0, 5, 173, 255, 255, 254, 183, 48, 0, 0, 121, 172, 222, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 224, 0, 3, 255, 238, 203, 151, 83, 0, 0, 0, 0, 43, 64, 0, 0, 0, 0, 5, 176, 0, 3, 255, 251, 80, 0, 6, 207, 255, 0, 0, 63, 255, 255, 252, 223, 255, 255, 240, 0, 0, 41, 223, 255, 255, 255, 252, 113, 0, 0, 0, 107, 255, 255, 255, 255, 199, 16, 0, 2, 255, 255, 255, 206, 255, 255, 255, 0, 0, 63, 255, 181, 0, 0, 125, 255, 240, 0, 1, 180, 0, 0, 0, 0, 0, 91, 0, 0, 62, 162, 0, 0, 0, 0, 0, 0, 0, 3, 255, 254, 163, 0, 0, 0, 0, 0, 0, 47, 255, 255, 254, 164, 51, 51, 48, 0, 0, 4, 174, 255, 255, 255, 255, 255, 0, 0, 0, 41, 223, 255, 255, 255, 255, 240, 0, 2, 255, 255, 255, 250, 67, 51, 51, 0, 0, 63, 255, 250, 48, 0, 0, 0, 0, 0, 2, 250, 48, 0, 0, 0, 0, 0, 0, 0, 26, 164, 0, 0, 0, 0, 7, 208, 0, 3, 255, 144, 0, 0, 5, 207, 255, 0, 0, 63, 249, 0, 3, 191, 255, 255, 240, 0, 3, 255, 146, 159, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 254, 129, 207, 240, 0, 3, 255, 255, 254, 145, 0, 12, 255, 0, 0, 63, 255, 162, 0, 0, 0, 207, 240, 0, 1, 179, 0, 0, 0, 0, 6, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 238, 238, 238, 238, 238, 238, 238, 238, 255, 240, 0, 0, 0, 0, 0, 0, 0, 15, 244, 0, 0, 0, 0, 0, 0, 0, 0, 85, 233, 32, 0, 0, 0, 0, 0, 0, 0, 15, 255, 233, 16, 0, 0, 0, 0, 0, 0, 7, 223, 255, 232, 16, 0, 0, 0, 0, 0, 0, 8, 239, 255, 215, 0, 0, 0, 0, 0, 0, 0, 24, 239, 255, 215, 0, 0, 0, 0, 0, 0, 0, 25, 239, 255, 214, 0, 0, 0, 0, 0, 0, 0, 41, 239, 255, 64, 0, 0, 0, 0, 0, 0, 0, 42, 246, 80, 0, 0, 0, 0, 0, 0, 0, 5, 95, 0, 0, 0, 0, 0, 0, 0, 0, 255, 254, 238, 238, 238, 238, 238, 238, 238, 239, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 9, 255, 112, 0, 0, 0, 0, 0, 3, 191, 255, 177, 0, 0, 0, 0, 0, 2, 255, 231, 0, 0, 0, 0, 0, 0, 0, 47, 254, 128, 0, 0, 0, 0, 0, 0, 0, 59, 255, 251, 16, 0, 0, 0, 0, 0, 0, 0, 159, 247, 0, 0, 0, 0, 0, 0, 0, 0, 5, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 15, 240, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 13, 255, 128, 0, 0, 0, 0, 0, 0, 0, 143, 255, 112, 0, 0, 0, 0, 0, 0, 0, 7, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 25, 164, 0, 0, 0, 0, 0, 30, 224, 143, 255, 250, 0, 0, 0, 0, 12, 255, 47, 254, 255, 241, 0, 0, 0, 0, 255, 192, 255, 2, 255, 48, 0, 0, 0, 15, 252, 15, 240, 159, 240, 0, 0, 0, 0, 239, 255, 255, 255, 255, 0, 0, 0, 0, 3, 255, 255, 255, 255, 240, 0, 0, 0, 0, 0, 56, 153, 153, 153, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 223, 208, 0, 10, 255, 0, 0, 0, 0, 15, 248, 0, 0, 47, 244, 0, 0, 0, 0, 255, 254, 221, 239, 255, 0, 0, 0, 0, 5, 255, 255, 255, 255, 144, 0, 0, 0, 0, 0, 122, 188, 184, 16, 0, 0, 0, 0, 0, 2, 139, 185, 48, 0, 0, 0, 0, 0, 11, 255, 255, 255, 208, 0, 0, 0, 0, 10, 255, 254, 239, 255, 208, 0, 0, 0, 0, 255, 240, 0, 11, 255, 16, 0, 0, 0, 15, 251, 0, 0, 111, 243, 0, 0, 0, 0, 223, 243, 0, 15, 255, 0, 0, 0, 0, 4, 255, 16, 0, 255, 112, 0, 0, 0, 0, 0, 96, 0, 5, 32, 0, 0, 0, 0, 0, 7, 171, 203, 129, 0, 0, 0, 0, 0, 95, 255, 255, 255, 249, 0, 0, 0, 0, 15, 255, 237, 222, 255, 240, 0, 0, 0, 0, 255, 128, 0, 2, 255, 48, 0, 0, 0, 13, 253, 0, 0, 175, 240, 0, 2, 255, 255, 255, 255, 255, 255, 255, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 0, 119, 119, 119, 119, 119, 119, 119, 0, 0, 0, 0, 0, 2, 139, 185, 64, 0, 0, 0, 0, 0, 12, 255, 255, 255, 225, 0, 0, 0, 0, 11, 255, 255, 255, 255, 224, 0, 0, 0, 0, 255, 208, 239, 11, 255, 16, 0, 0, 0, 15, 252, 14, 240, 111, 243, 0, 0, 0, 0, 223, 254, 255, 15, 255, 0, 0, 0, 0, 1, 239, 255, 240, 255, 128, 0, 0, 0, 0, 0, 90, 203, 5, 64, 0, 0, 0, 0, 6, 150, 0, 0, 0, 0, 0, 0, 0, 0, 239, 208, 0, 0, 0, 0, 0, 1, 173, 239, 255, 238, 238, 238, 224, 0, 0, 239, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 191, 255, 170, 170, 170, 160, 0, 3, 255, 112, 239, 208, 0, 0, 0, 0, 0, 63, 247, 5, 100, 0, 0, 0, 0, 0, 1, 187, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 172, 203, 113, 0, 90, 0, 0, 0, 111, 255, 255, 255, 247, 95, 250, 0, 0, 15, 255, 237, 206, 255, 240, 207, 240, 0, 0, 255, 160, 0, 8, 255, 9, 255, 0, 0, 13, 253, 0, 0, 207, 224, 223, 240, 0, 0, 223, 255, 255, 255, 255, 255, 251, 0, 0, 14, 255, 255, 255, 255, 255, 253, 0, 0, 0, 103, 119, 119, 119, 119, 82, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 223, 208, 0, 0, 0, 0, 0, 0, 0, 15, 248, 0, 0, 0, 0, 0, 0, 0, 0, 255, 254, 221, 221, 221, 0, 0, 0, 0, 10, 255, 255, 255, 255, 240, 0, 0, 0, 0, 4, 155, 187, 187, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 144, 0, 6, 221, 0, 0, 1, 80, 14, 253, 0, 0, 159, 240, 0, 1, 255, 224, 239, 255, 255, 255, 255, 0, 0, 31, 254, 14, 255, 255, 255, 255, 240, 0, 0, 21, 0, 35, 51, 51, 59, 255, 0, 0, 0, 0, 0, 0, 0, 0, 109, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 48, 0, 0, 0, 12, 253, 0, 0, 14, 253, 0, 0, 0, 0, 239, 240, 3, 0, 239, 208, 0, 0, 0, 47, 255, 31, 254, 14, 255, 255, 255, 255, 255, 255, 210, 255, 240, 239, 255, 255, 255, 255, 255, 226, 3, 114, 3, 51, 51, 51, 51, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 119, 119, 119, 119, 119, 119, 112, 0, 3, 255, 255, 255, 255, 255, 255, 255, 0, 0, 47, 255, 255, 255, 255, 255, 255, 240, 0, 0, 0, 0, 0, 159, 255, 247, 0, 0, 0, 0, 0, 6, 255, 255, 255, 255, 128, 0, 0, 0, 0, 239, 248, 5, 239, 255, 0, 0, 0, 0, 14, 160, 0, 0, 110, 240, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 153, 32, 0, 0, 0, 0, 0, 0, 0, 63, 247, 0, 0, 0, 0, 0, 0, 0, 3, 255, 237, 221, 221, 221, 221, 221, 0, 0, 63, 255, 255, 255, 255, 255, 255, 240, 0, 1, 187, 187, 187, 187, 187, 187, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 238, 238, 238, 238, 224, 0, 0, 0, 0, 239, 255, 255, 255, 255, 0, 0, 0, 0, 12, 252, 136, 136, 136, 128, 0, 0, 0, 0, 255, 255, 255, 255, 255, 0, 0, 0, 0, 11, 255, 255, 255, 255, 240, 0, 0, 0, 0, 239, 200, 136, 136, 136, 0, 0, 0, 0, 15, 255, 255, 255, 255, 240, 0, 0, 0, 0, 125, 238, 238, 238, 238, 0, 0, 0, 0, 5, 119, 119, 119, 119, 112, 0, 0, 0, 0, 239, 255, 255, 255, 255, 0, 0, 0, 0, 14, 255, 255, 255, 255, 240, 0, 0, 0, 0, 223, 208, 0, 0, 0, 0, 0, 0, 0, 15, 248, 0, 0, 0, 0, 0, 0, 0, 0, 255, 254, 221, 221, 221, 0, 0, 0, 0, 10, 255, 255, 255, 255, 240, 0, 0, 0, 0, 4, 155, 187, 187, 187, 0, 0, 0, 0, 0, 2, 139, 185, 64, 0, 0, 0, 0, 0, 12, 255, 255, 255, 225, 0, 0, 0, 0, 11, 255, 254, 223, 255, 224, 0, 0, 0, 0, 255, 208, 0, 9, 255, 32, 0, 0, 0, 15, 253, 0, 0, 159, 242, 0, 0, 0, 0, 191, 255, 237, 255, 254, 0, 0, 0, 0, 0, 207, 255, 255, 254, 16, 0, 0, 0, 0, 0, 40, 187, 148, 0, 0, 0, 0, 0, 5, 119, 119, 119, 119, 119, 119, 96, 0, 0, 239, 255, 255, 255, 255, 255, 255, 0, 0, 14, 255, 255, 255, 255, 255, 255, 224, 0, 0, 239, 208, 0, 9, 255, 0, 0, 0, 0, 15, 248, 0, 0, 47, 243, 0, 0, 0, 0, 255, 254, 221, 239, 255, 0, 0, 0, 0, 5, 255, 255, 255, 255, 144, 0, 0, 0, 0, 0, 122, 188, 184, 16, 0, 0, 0, 0, 0, 7, 171, 203, 129, 0, 0, 0, 0, 0, 95, 255, 255, 255, 249, 0, 0, 0, 0, 15, 255, 237, 222, 255, 240, 0, 0, 0, 0, 255, 128, 0, 2, 255, 48, 0, 0, 0, 13, 253, 0, 0, 159, 240, 0, 0, 0, 0, 223, 255, 255, 255, 255, 255, 254, 0, 0, 14, 255, 255, 255, 255, 255, 255, 240, 0, 0, 87, 119, 119, 119, 119, 119, 118, 0, 0, 2, 51, 51, 51, 51, 48, 0, 0, 0, 0, 239, 255, 255, 255, 255, 0, 0, 0, 0, 13, 255, 255, 255, 255, 240, 0, 0, 0, 0, 159, 226, 0, 0, 0, 0, 0, 0, 0, 15, 248, 0, 0, 0, 0, 0, 0, 0, 0, 255, 246, 0, 0, 0, 0, 0, 0, 0, 9, 255, 16, 0, 0, 0, 0, 0, 0, 0, 2, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 255, 176, 15, 212, 0, 0, 0, 0, 11, 255, 255, 144, 255, 224, 0, 0, 0, 0, 255, 93, 255, 38, 255, 48, 0, 0, 0, 15, 247, 47, 254, 63, 243, 0, 0, 0, 0, 191, 240, 191, 255, 255, 0, 0, 0, 0, 0, 157, 0, 207, 254, 80, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 115, 0, 0, 0, 0, 0, 0, 0, 0, 239, 176, 0, 0, 0, 0, 0, 0, 92, 207, 254, 204, 204, 183, 16, 0, 0, 9, 255, 255, 255, 255, 255, 252, 0, 0, 0, 92, 207, 255, 204, 205, 255, 240, 0, 0, 0, 0, 239, 176, 0, 10, 255, 0, 0, 0, 0, 6, 115, 0, 0, 175, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 170, 170, 169, 64, 0, 0, 0, 0, 0, 239, 255, 255, 255, 243, 0, 0, 0, 0, 11, 238, 238, 239, 255, 224, 0, 0, 0, 0, 0, 0, 0, 10, 255, 48, 0, 0, 0, 0, 0, 0, 0, 159, 243, 0, 0, 0, 0, 189, 221, 221, 239, 255, 0, 0, 0, 0, 14, 255, 255, 255, 255, 80, 0, 0, 0, 0, 138, 170, 170, 167, 16, 0, 0, 0, 0, 11, 164, 0, 0, 0, 0, 0, 0, 0, 0, 239, 255, 216, 32, 0, 0, 0, 0, 0, 11, 255, 255, 255, 252, 112, 0, 0, 0, 0, 0, 73, 223, 255, 255, 0, 0, 0, 0, 0, 0, 90, 239, 255, 240, 0, 0, 0, 0, 158, 255, 255, 255, 199, 0, 0, 0, 0, 14, 255, 253, 147, 0, 0, 0, 0, 0, 0, 186, 64, 0, 0, 0, 0, 0, 0, 0, 13, 237, 166, 32, 0, 0, 0, 0, 0, 0, 239, 255, 255, 255, 218, 0, 0, 0, 0, 6, 189, 255, 255, 255, 240, 0, 0, 0, 0, 39, 173, 255, 255, 218, 0, 0, 0, 0, 4, 156, 255, 255, 253, 160, 0, 0, 0, 0, 73, 206, 255, 255, 255, 0, 0, 0, 0, 14, 255, 255, 255, 253, 160, 0, 0, 0, 0, 239, 218, 115, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 112, 0, 0, 0, 0, 239, 145, 0, 26, 255, 0, 0, 0, 0, 14, 255, 251, 207, 255, 240, 0, 0, 0, 0, 25, 255, 255, 255, 145, 0, 0, 0, 0, 0, 159, 255, 255, 232, 16, 0, 0, 0, 0, 239, 255, 188, 255, 255, 0, 0, 0, 0, 14, 249, 0, 1, 175, 240, 0, 0, 0, 0, 80, 0, 0, 0, 7, 0, 0, 0, 0, 10, 147, 0, 0, 0, 0, 0, 0, 0, 0, 239, 255, 216, 32, 0, 0, 0, 0, 0, 11, 255, 255, 255, 252, 115, 141, 224, 0, 0, 0, 57, 223, 255, 255, 255, 255, 0, 0, 0, 0, 90, 223, 255, 255, 254, 144, 0, 0, 158, 255, 255, 255, 234, 64, 0, 0, 0, 14, 255, 254, 164, 0, 0, 0, 0, 0, 0, 186, 64, 0, 0, 0, 0, 0, 0, 0, 2, 50, 0, 0, 0, 112, 0, 0, 0, 0, 239, 208, 0, 9, 255, 0, 0, 0, 0, 14, 253, 0, 159, 255, 240, 0, 0, 0, 0, 239, 234, 255, 255, 255, 0, 0, 0, 0, 14, 255, 255, 251, 191, 240, 0, 0, 0, 0, 239, 255, 144, 9, 255, 0, 0, 0, 0, 14, 248, 0, 0, 159, 240, 0, 0, 0, 0, 64, 0, 0, 2, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 127, 245, 0, 0, 0, 0, 174, 238, 237, 239, 255, 254, 222, 238, 234, 31, 255, 255, 255, 247, 143, 255, 255, 255, 250, 243, 0, 0, 0, 0, 0, 0, 0, 95, 229, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 238, 238, 238, 238, 238, 238, 238, 238, 228, 238, 238, 238, 238, 238, 238, 238, 238, 238, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 5, 79, 48, 0, 0, 0, 0, 0, 0, 5, 254, 255, 255, 255, 255, 120, 255, 255, 255, 255, 170, 239, 238, 222, 255, 255, 237, 238, 254, 161, 0, 0, 0, 7, 255, 80, 0, 0, 0, 0, 0, 0, 0, 5, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 227, 0, 0, 0, 0, 0, 0, 0, 8, 251, 0, 0, 0, 0, 0, 0, 0, 0, 175, 144, 0, 0, 0, 0, 0, 0, 0, 3, 254, 0, 0, 0, 0, 0, 0, 0, 0, 14, 242, 0, 0, 0, 0, 0, 0, 0, 0, 175, 128, 0, 0, 0, 0, 0, 0, 0, 12, 247, 0, 0, 0, 0, 0, 0, 0, 4, 235, 0, 0, 0, 0, 0, };

static const unsigned char fontWidths[] = { 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 0, };

/*JSON{
  "type" : "method",
  "class" : "Graphics",
  "name" : "setFontMonofonto16",
  "generate" : "jswrap_graphics_setFontMonofonto16",
  "params" : [
    ["scale","int","[optional] If >1 the font will be scaled up by that amount"]
  ],
  "return" : ["JsVar","The instance of Graphics this was called on, to allow call chaining"],
  "return_object" : "Graphics"
}
Set the current font to Monofonto 16 (4 bpp, cap height = 16 px)
*/
JsVar *jswrap_graphics_setFontMonofonto16(JsVar *parent, int scale) {
  if (scale<1) scale=1;
  JsVar *bitmap = jsvNewNativeString(fontBitmap, sizeof(fontBitmap));
  JsVar *widths = jsvNewNativeString(fontWidths, sizeof(fontWidths));
  JsVar *r = jswrap_graphics_setFontCustom(parent, bitmap, 32, widths, 19 + (scale<<8) + (4<<16)); // 4 bit, total height 19px
  jsvUnLock2(bitmap, widths);
  return r;
}

