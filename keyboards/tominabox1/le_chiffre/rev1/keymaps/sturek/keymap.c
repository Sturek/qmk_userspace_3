/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum layers {
    _WRITE,
    _COUNT,
    _SIGN,
	_MOVE,
	_SCHREIB
};


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_WRITE] = LAYOUT (
KC_Q,    RALT_T(KC_W),    KC_F,   KC_P,          KC_B,         KC_J,    KC_L,           KC_U,    RALT_T(KC_Y),    KC_SEMICOLON, \
HOME_A,  HOME_R,          HOME_S, HOME_T,        LT(4,KC_G),   KC_M,    HOME_N,         HOME_E,  HOME_I,          HOME_O, \
KC_Z,    LALT_T(KC_X),    KC_C,   KC_D,          KC_V,         KC_K,    KC_H,           KC_COMM, LALT_T(KC_DOT),  KC_SLASH, \
                     LT(3,KC_DEL), LT(1,KC_ENTER),           LT(2,KC_SPACE),   KC_BACKSPACE
	),
[_COUNT] = LAYOUT (
KC_1,               KC_2,          KC_3,            KC_4,             KC_5,        KC_6,     KC_7,             KC_8,                 KC_9,            KC_0, \
KC_EXCLAIM, KC_AT, KC_HASH, KC_MINUS, LT(4,KC_PERCENT),  KC_EQUAL, KC_PLUS,  S(KC_8),  KC_BSLS, KC_DQT, \
KC_TILDE,           KC_GRAVE,      KC_LBRC,         KC_LPRN,          KC_LCBR,     KC_RCBR,  KC_RPRN,          KC_RBRC,              KC_AMPERSAND,    KC_QUOTE, \
                        LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE
),
[_SIGN] = LAYOUT (
KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10, \
RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_7), RALT(KC_6), KC_DOLLAR, RALT(KC_5), KC_AMPERSAND,  S(KC_BSLS), SAGR(KC_6), \
RALT(KC_8), SAGR(KC_EQUAL), SAGR(KC_4), SAGR(KC_LBRC), RALT(KC_LBRC), RALT(KC_RBRC), SAGR(KC_RBRC), RALT(KC_MINUS), _______, SAGR(KC_BSLS), \
                              LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE
),
[_MOVE] = LAYOUT (
RGB_TOG,   KC_MPRV,    KC_UP,      KC_MNXT,    KC_VOLU,    RGB_VAD,     RGB_VAI,       _______,        KC_F11,     KC_F12, \
RGB_MOD,   KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_VOLD,    _______,     KC_HOME,       KC_PGUP,        KC_PGDN,    KC_END, \
RGB_HUD,   RGB_HUI,    KC_MPLY,    _______,    KC_MUTE,       _______,     _______,       _______,        _______,   RESET, \
                         LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE
),
[_SCHREIB] = LAYOUT (
RALT(KC_Q), _______, _______, RALT(KC_P), _______,   _______,   _______, RALT(KC_Y), RALT(KC_Y), _______, \
RALT(KC_Q), _______, RALT(KC_S), _______,    _______,   _______, KC_BTN1,    _______,    _______, RALT(KC_P), \
_______,    _______, _______, _______,    _______,   _______, KC_BTN2,    _______,    _______,    _______, \
                LT(3,KC_DEL), LT(1,KC_ENTER),   LT(2,KC_SPACE),   KC_BACKSPACE
)
};