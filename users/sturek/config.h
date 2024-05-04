#pragma once
#include QMK_KEYBOARD_H
// #include "wrappers.h"

// Common QMK variables
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define TAP_CODE_DELAY 10

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LT(4, KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LT(4, KC_I)
#define HOME_O RGUI_T(KC_O)

#ifdef COMBO_ENABLE
# define COMBO_COUNT 8
#endif

#ifdef RGB_MATRIX_ENABLE
#  define RGB_MATRIX_KEYPRESSES
#  define RGB_DISABLE_WHEN_USB_SUSPENDED true
#  define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#endif

#ifdef OLED_DRIVER_ENABLE
#  define OLED_TIMEOUT 5000
#endif

#ifdef POINTING_DEVICE_ENABLE
#   define PIMORONI_TRACKBALL_INVERT_Y
#   define PIMORONI_TRACKBALL_ROTATE
#endif