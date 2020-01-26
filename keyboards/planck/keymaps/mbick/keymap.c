/* Copyright 2015-2017 Jack Humbert
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


enum planck_layers {
  _QWERTY,
  _NUMS,
  _SYMB,
};

/* enum planck_keycodes { */
/*   QWERTY = SAFE_RANGE, */
/* }; */

#define NUMS MO(_NUMS)
#define SYMB MO(_SYMB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_planck_grid(
    KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R, KC_T,   KC_Y,           KC_U, KC_I,    KC_O,    KC_P,    KC_BSPC,
    LCTL_T(KC_ESC), KC_A,    KC_S,    KC_D,    KC_F, KC_G,   KC_H,           KC_J, KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V, KC_B,   KC_N,           KC_M, KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
    XXXXXXX,        KC_LCTL, KC_LALT, KC_LGUI, NUMS, KC_SPC, HYPR_T(KC_SPC), SYMB, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

[_NUMS] = LAYOUT_planck_grid(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7, KC_P8,   KC_P9,   KC_SLSH, KC_BSPC,
    XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, XXXXXXX, KC_P4, KC_P5,   KC_P6,   KC_ASTR, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1, KC_P2,   KC_P3,   KC_MINS, KC_PENT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, KC_P0, KC_PCMM, KC_PDOT, KC_PLUS, KC_PEQL
),

[_SYMB] = LAYOUT_planck_grid(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    XXXXXXX, KC_GRV,  XXXXXXX, KC_LCBR, KC_LBRC, KC_MINS, KC_EQL,  KC_RBRC, KC_RCBR, KC_BSLS, KC_PIPE, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   switch (keycode) { */
/*     case QWERTY: */
/*       if (record->event.pressed) { */
/*         print("mode just switched to qwerty and this is a huge string\n"); */
/*         set_single_persistent_default_layer(_QWERTY); */
/*       } */
/*       return false; */
/*       break; */
/*   return true; */
/* } */
