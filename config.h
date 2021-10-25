#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6061
#define DEVICE_VER      0x0001
#define MANUFACTURER    datapaganism
#define PRODUCT         afk79s
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* key matrix pins */
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


/* SPLIT STUFF */
#define EE_HANDS
#define SOFT_SERIAL_PIN D3
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

// from row/col 0 to X
#define MATRIX_ROW_PINS       { D4, C6, D7, E6, B5, F4 }
#define MATRIX_ROW_PINS_RIGHT { D0, D4, C6 , D7, E6, B4}

#define MATRIX_COL_PINS       { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS_RIGHT { B5, F4, F5, F6, F7, B1, B3, B2, B6 }

//Experemental
#define SPLIT_HAND_PIN D0
#define SPLIT_HAND_PIN_LOW_IS_LEFT


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif
