// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,    KC_F6,  
        KC_GRAVE,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   
        KC_LCTL,    KC_LWIN, KC_LALT,              KC_SPC                                  
    )
};

#ifdef OLED_ENABLE

bool oled_task_user () {
    oled_set_cursor(0, 1);
    oled_write("Hello World!", false);
    return false;
}
#endif