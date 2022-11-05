#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID 0x0EED
#define PRODUCT_ID 0x2311
#define DEVICE_VER 0x0000
#define MANUFACTURER qmk
#define PRODUCT TeethLess40

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { D2, D1, D3, D5 }
#define MATRIX_COL_PINS \
    { B4, D7, D6, D4, C7, C6, F7, F6, F0, F1, F4, F5, B0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#endif
