/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
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
#include keymap_russian.h
#include keymap_spanish.h

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
#define _BL 0
#define _RU 1
#define _SP 2
#define _FL 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: Base Layer (Default Layer)
   */
[_BL] = LAYOUT(
  KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   
KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  
KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,   
KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,   
KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    
KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  
KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _RU: Russian Layer
   */
[_RU] = LAYOUT(
  KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
  RU_YO,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB, RU_SHTI,   RU_TSE,     RU_U,   RU_KA,    RU_IE,    RU_EN,    RU_GHE,   RU_SHA,   RU_SHCH,    RU_ZE,    RU_HA,  KC_HARD,  KC_BSLS,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS, RU_EF,   RU_YERU,    RU_VE,    RU_A,    RU_PE,    RU_ER,     RU_O,     RU_EL,     RU_DE,    RU_ZHE,    RU_E,              KC_ENT,   KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  RU_YA,   RU_CHE,    RU_ES,    RU_EM,     RU_I,    RU_TE,   RU_SOFT,      RU_BE,  RU_YU,    RU_DOT,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _SP: Spanish Layer
   */
[_SP] = LAYOUT(
  KC_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   KC_INS,   KC_PGUP,  KC_PGDN,
  ES_MORD,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,    ES_QUOT,  ES_IEXL,   KC_BSPC,  KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
  KC_TAB,   ES_Q,     ES_W,     ES_E,     ES_R,     ES_T,     ES_Y,      ES_U,     ES_I,     ES_O,     ES_P,     ES_GRV,  ES_PLUS,  KC_BSLS,   KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
  KC_CAPS,  ES_A,     ES_S,     ES_D,     ES_F,     ES_G,     ES_H,     ES_J,     ES_K,     ES_L,     ES_NTIL,  ES_ACUT,              KC_ENT,   KC_P4,    KC_P5,    KC_P6,
  KC_LSFT,  ES_Z,     ES_X,     ES_C,     ES_V,     ES_B,     ES_N,     ES_M,     ES_COMM,  ES_DOT,   ES_MINS,  KC_RSFT,  KC_UP,    KC_P1,    KC_P2,    KC_P3,    KC_PENT,
  KC_LCTL,  KC_LGUI,  KC_LALT,                      KC_SPC,                                 KC_RALT,  MO(_FL),  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,    KC_PDOT),

  /* Keymap _FL: Function Layer
   */
[_FL] = LAYOUT(
    RESET,  KC_MYCM,  KC_WHOM,  KC_CALC,  KC_MSEL,  KC_MPRV,  KC_MRWD,  KC_MPLY,  KC_MSTP,  KC_MUTE,  KC_VOLU,  KC_VOLD,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  DF(_BL),  DF(_RU),  DF(_SP),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,
  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
  _______,  RGB_HUI,  RGB_HUD,  RGB_SPD,  RGB_SPI,  RGB_TOG,  _______,  _______,  _______,  _______,  _______,  _______,   RGB_VAI,  _______,  _______,  _______,  _______,
	_______,  UC_M_WI,  _______,                      _______,                                _______,  _______,  _______, RGB_RMOD,   RGB_VAD,  RGB_MOD,  _______,  _______)
};
