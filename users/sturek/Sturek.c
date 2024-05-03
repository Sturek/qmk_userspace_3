#pragma once

#include "macros.c"

// Common QMK variables
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define TAP_CODE_DELAY 10

// Init effect for RGB boards only
#ifdef RGB_MATRIX_ENABLE
void matrix_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
}
#endif

// Default layer effects for BM40 only
#ifdef KEYBOARD_bm40hsrgb
layer_state_t layer_state_set_user(layer_state_t state) {

    // Default layer keypress effects
    switch (get_highest_layer(default_layer_state)) {
    case 1:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_BREATHING);
        break;
    case 0:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINDROPS);
        break;
    }
    return state;
}
#endif // KEYBOARD_bm40hsrgb