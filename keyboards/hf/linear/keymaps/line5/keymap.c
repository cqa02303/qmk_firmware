// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_LWIN, KC_LALT, KC_LEFT_CTRL, KC_SPACE, KC_SPACE, KC_SPACE, KC_SPACE, KC_SPACE, KC_RCTL, KC_RIGHT_ALT, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,
        KC_E, KC_F, KC_G, KC_H, KC_I, KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q, KC_R
    )
};
