/* Copyright 2019
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
  _COLEMAK = 0,
  _QWERTY = 1,
  _MEDIA,
  _NAV,
  _MACRO,
  _SYM,
  _NUM,
  _FUN
};

// layer buttons
#define MEDIA LT(_MEDIA, KC_TAB)
#define NAV LT(_NAV, KC_SPC)
#define MACRO LT(_MACRO, KC_ESC)
#define SYM LT(_SYM, KC_ENT)
#define NUM LT(_NUM, KC_BSPC)
#define FUN LT(_FUN, KC_DEL)

//toggles
#define T_SYM TG(_SYM)
#define T_NUM TG(_NUM)
#define T_NAV TG(_NAV)

// colemak home row mods
// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I RALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

// qwerty home row mods
// Left-hand home row mods
#define QHOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_Qu RGUI_T(KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Colemak DH
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   F  |   P  |   B  | HOME | END  |   J  |   L  |   U  |   Y  |   '  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   R  |   S  |   T  |   G  | PGUP | PGDN |   M  |   N  |   E  |   I  |   O  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  | INS  | APP  |   K  |   H  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | T_SYM| T_NUM| MEDIA| NAV  | MACRO|    Space    | SYM  | NUM  | FUN  | PSCR | T_NAV|
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_planck_mit(
  KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,  KC_HOME, KC_END,  KC_J,   KC_L,   KC_U,     KC_Y,      KC_QUOT, \
  HOME_A, HOME_R, HOME_S, HOME_T, KC_G,  KC_PGUP, KC_PGDN, KC_M,   HOME_N, HOME_E,   HOME_I,    HOME_O,  \
  KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,  KC_INS,  KC_APP,  KC_K,   KC_H,   KC_COMM,  KC_DOT,    KC_SLSH, \
  T_SYM,  T_NUM,  MEDIA,  NAV,    MACRO,      KC_SPC,      SYM,    NUM,    FUN,      KC_PSCR,   T_NAV    \
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |  _   |  _   |   Y  |   U  |   I  |   O  |   '  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |  _   |  _   |   H  |   J  |   K  |   L  |   P  |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |   B  |  _   |  _   |   N  |   M  |   ,  |   .  |   /  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   _  |   _  |   _  |   _  |   _  |      _      |   _  |   _  |   _  |   _  |   _  |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_mit(
  KC_Q,    KC_TRNS, KC_E,    KC_R,    KC_T,    KC_TRNS, KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    \
  KC_TRNS, QHOME_S, HOME_D,  HOME_F,  KC_G,    KC_TRNS, KC_TRNS, KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_Qu, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_V,    KC_B,    KC_TRNS, KC_TRNS, KC_N,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS  \
),

[_MEDIA] = LAYOUT_planck_mit(
  DF(_COLEMAK), DF(_QWERTY), KC_NO,   RESET, KC_NO, KC_NO, KC_NO, KC_NO,   KC_BRID,  KC_BRIU, KC_NO, KC_NO, \
  KC_NO,        KC_NO,       KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_MUTE, KC_VOLD,  KC_VOLU, KC_NO, KC_NO, \
  KC_NO,        KC_NO,       KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_RMOD, RGB_MOD, KC_NO, KC_NO, \
  KC_NO,        KC_NO,       KC_TRNS, KC_NO, KC_NO,    KC_NO,     KC_MPLY, KC_MSTP,  KC_NO,   KC_NO, KC_NO  \
),


[_NAV] = LAYOUT_planck_mit(
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_TRNS, KC_HOME,       KC_PGUP,       KC_PGDN,     KC_END,        KC_NO,  \
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_TRNS, KC_TRNS, KC_LEFT,       KC_DOWN,       KC_UP,       KC_RGHT,       KC_NO,  \
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_TRNS, RCTL(KC_LEFT), RCTL(KC_DOWN), RCTL(KC_UP), RCTL(KC_RGHT), KC_NO,  \
  KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,      KC_TRNS,     KC_ENT,        KC_BSPC,       KC_DEL,      KC_NO,         KC_TRNS \
),

[_MACRO] = LAYOUT_planck_mit(
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_UNDO, KC_NO,   KC_NO,  KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_FIND, KC_PSTE, KC_COPY, KC_CUT, KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO,   KC_AGIN, KC_NO,   KC_NO,  KC_NO, \
  KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,     KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO  \
),

[_SYM] = LAYOUT_planck_mit(
  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_LT,   KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_NO,   \
  KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_DQUO, KC_NO, KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_LGUI, \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_GT,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  KC_TRNS, KC_NO,   KC_LPRN, KC_RPRN, KC_UNDS,      KC_TRNS,   KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO    \
),

[_NUM] = LAYOUT_planck_mit(
  KC_LBRC, KC_7,    KC_8,   KC_9, KC_RBRC, KC_NO,   KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_NO,    \
  KC_SCLN, KC_4,    KC_5,   KC_6, KC_EQL,  KC_QUOT, KC_NO, KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_LGUI,  \
  KC_GRV,  KC_1,    KC_2,   KC_3, KC_BSLS, KC_COMM, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    \
  KC_NO,   KC_TRNS, KC_DOT, KC_0, KC_MINS,      KC_TRNS,   KC_NO,   KC_TRNS, KC_NO,   KC_NO,   KC_NO     \
),

[_FUN] = LAYOUT_planck_mit(
  KC_F12, KC_F7, KC_F8,  KC_F9,  KC_LCAP, KC_NO, KC_NO, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_NO,   \
  KC_F11, KC_F4, KC_F5,  KC_F6,  KC_SLCT, KC_NO, KC_NO, KC_NO,   KC_RSFT, KC_RCTL, KC_RALT, KC_LGUI, \
  KC_F10, KC_F1, KC_F2,  KC_F3,  KC_PAUS, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   \
  KC_NO,  KC_NO, KC_APP, KC_SPC, KC_ESC,     KC_TRNS,   KC_NO,   KC_NO,   KC_TRNS, KC_NO,   KC_NO    \
)
};

bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    //
    switch (keycode) {
        case HOME_T:
            return true;
        case HOME_N:
            return true;
        case HOME_F:
            return true;
        case HOME_J:
            return true;
        default:
            return false;
    }
}


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case NUM:
      // Immediately select the hold action when another key is tapped.
      return true;
    case FUN:
      return true;
    default:
      // Do not select the hold action when another key is tapped.
      return false;
    }
}
