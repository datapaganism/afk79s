// Copyright 2023 Alen Karnil (@datapaganism)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once



/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)



/* SPLIT STUFF */

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

#define MATRIX_ROW_PINS       { D4, C6, D7, E6, B4, B5}
#define MATRIX_ROW_PINS_RIGHT { D0, D4, C6 ,D7, E6, B4}

#define MATRIX_COL_PINS       { B6, B2, B3, B1, F7, F6, F5, NO_PIN, NO_PIN }
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5, F4, B5 }

#define SPLIT_HAND_PIN D2
