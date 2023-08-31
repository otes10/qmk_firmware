/*

*/
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0913
#define DEVICE_VER      0x0010
#define MANUFACTURER    otes10
#define PRODUCT         jMacro

/* Column/Row IO definitions */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Column/Row IO definitions */
#define MATRIX_ROWS 2
#define MATRIX_COLS 5
#define MATRIX_ROW_PINS { F6, B2 }
#define MATRIX_COL_PINS { B1, B3, B4, E6, D7 }
#define UNUSED_PINS

/* Dual rotary encoders */
#define ENCODERS_PAD_A { F4, D4 }
#define ENCODERS_PAD_B { F5, C6 }
#define ENCODER_RESOLUTION 4
