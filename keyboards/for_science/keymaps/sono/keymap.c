/* Copyright 2017 Paul James (paul@peej.co.uk)
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
//#include "g/keymap_combo.h"
#include "keymap_german_osx.h"
//#include "keymap_german.h"
#include "features/caps_word.h"
// Defines names for use in layer keycodes and the keymap
enum layer_names {
    //_HD_TITANIUM,
    _HD_RHODIUM,
    _QWERTZ,
    //    _COLEMAKDH,
    _NUMFU,
    _NAVIGATION,
    _SYMBOLS,
    _MOUSE,
//    _FUNCT
};

enum custom_keycodes {
    COPY = SAFE_RANGE,
    PASTE,
    NUM_G, //copied from https://www.jonashietala.se/blog/2021/06/03/the-t-34-keyboard-layout/
    QU,
//  NAPP // next app
//  PAPP // previous app
//  NTAB // next tab
//  PTAB // previous tab
//  SCROT // screenshot
};

#define QWERTZ TO(_QWERTZ)
//#define COLEMAK TO(_COLEMAKDH)
//#define HD TO(_HD_TITANIUM)
#define HD TO(_HD_RHODIUM)
//#define COPY
//#define PASTE
//#define NUM_G //copied from https://www.jonashietala.se/blog/2021/06/03/the-t-34-keyboard-layout/
#define NAPP LGUI(KC_TAB) // Next App
#define PAPP LSG(KC_TAB) // Previous App
#define NTAB LAG(KC_RIGHT) // Next Tab
#define PTAB LAG(KC_LEFT) // Previous Tab
#define SCROT LSG(KC_5) // Screenshot

#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*[_HD_TITANIUM] = LAYOUT_split_4x5_3(
*    QWERTZ,  KC_ESC,  XXXXXXX, DE_LPRN, DE_LABK,    DE_RABK, DE_RPRN, COPY, PASTE, KC_BSPC,
*    DE_J,   DE_G,    DE_M,    DE_P,    DE_V,       DE_SCLN,    DE_DOT,    DE_SLSH,    DE_DQUO,    DE_QUOT,
*    LCTL_T(DE_C),  LSFT_T(DE_S),    LGUI_T(DE_N),    LALT_T(DE_T),    DE_W,       DE_COMM,    RALT_T(DE_A),    RGUI_T(DE_E),    RSFT_T(DE_I),    RCTL_T(DE_H),
*    DE_X,    DE_F,   DE_L,    DE_D,    DE_B,       DE_MINS,    DE_U,    DE_O, DE_Z,   DE_K,
*                      KC_BSPC, DE_R, KC_ENT,       LT(_SYMBOLS, KC_TAB), LT(_NUMFU, KC_SPACE),   TG(_NAVIGATION)
*),
*/

[_HD_RHODIUM] = LAYOUT_split_4x5_3(
    QWERTZ,  KC_ESC,  XXXXXXX, DE_LPRN, DE_LABK,    DE_RABK, DE_RPRN, COPY, PASTE, KC_BSPC,
    DE_B,   DE_J,    DE_H,    DE_G,    DE_X,       DE_SCLN,    DE_DOT,    DE_SLSH,    DE_DQUO,    DE_QUOT,
    LCTL_T(DE_C),  LSFT_T(DE_S),    LGUI_T(DE_N),    LALT_T(DE_T),    DE_K,       DE_COMM,    RALT_T(DE_A),    RGUI_T(DE_E),    RSFT_T(DE_I),    RCTL_T(DE_M),
    DE_P,    DE_F,   DE_L,    DE_D,    DE_V,       DE_MINS,    DE_U,    DE_O, DE_Z,   DE_W,
                      KC_BSPC, DE_R, KC_ENT,       LT(_SYMBOLS, KC_TAB), LT(_NUMFU, KC_SPACE),   MO(_NAVIGATION)
),


/*[_COLEMAKDH] = LAYOUT_split_4x5_3(
*    HD,  KC_ESC,  DE_LPRN, DE_LCBR, DE_LBRC,    DE_RBRC, DE_RCBR, DE_RPRN, DE_QUOT, KC_BSPC,
*    DE_Q,   DE_W,    DE_F,    DE_P,    DE_B,       DE_J,    DE_L,    DE_U,    DE_Y,    DE_SCLN,
*    LGUI_T(DE_A),  LALT_T(DE_R),    LCTL_T(DE_S),    LSFT_T(DE_T),    DE_G,       DE_M,    RSFT_T(DE_N),    RCTL_T(DE_E),    RALT_T(DE_I),    RGUI_T(DE_O),
*    DE_Z,    DE_X,   DE_C,    DE_D,    DE_V,       DE_K,    DE_H,    DE_COMM, DE_DOT,   DE_SLSH,
*                      KC_BSPC, DE_R, KC_ENT,       LT(_SYMBOLS, KC_TAB), LT(_NUMFU, KC_SPACE),   TG(_NAVIGATION)
*),
*/

[_QWERTZ] = LAYOUT_split_4x5_3(
    HD,  KC_ESC,  XXXXXXX, DE_LPRN, DE_LABK,    DE_RABK, DE_RPRN, COPY, PASTE, KC_BSPC,
    DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,       DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,
    LCTL_T(DE_A),  LSFT_T(DE_S),    LGUI_T(DE_D),    LALT_T(DE_F),    DE_G,       DE_H,    RALT_T(DE_J),    RGUI_T(DE_K),    RSFT_T(DE_L),    RCTL_T(DE_SLSH),
    DE_Y,    DE_X,   DE_C,    DE_V,    DE_B,       DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS,
                      KC_BSPC, DE_R, KC_ENT,       LT(_SYMBOLS, KC_TAB), LT(_NUMFU, KC_SPACE),   MO(_NAVIGATION)
),

[_NUMFU] = LAYOUT_split_4x5_3(
    KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,    KC_F8,    KC_F9, KC_F10, KC_F11, KC_F12,
    KC_F2, KC_PPLS, KC_PMNS, KC_PCMM, _______,    _______,    KC_PEQL, KC_PSLS,  KC_PAST, KC_F13,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,       KC_7,   KC_8,     KC_9 ,   KC_0,
    KC_F1, DE_J, NUM_G, DE_K, _______,    _______,    KC_DOWN, KC_UP, _______, KC_F14,
                      _______, _______, _______,    _______, _______, _______
),


[_NAVIGATION] = LAYOUT_split_4x5_3(
    RESET, _______, _______, _______, _______,    _______, _______, _______, _______, RESET,
    PAPP, NAPP, KC_PGUP, KC_HOME, SCROT,    _______, _______, PTAB, NTAB, _______,
    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, COPY,    _______, _______, _______, _______, _______,
    KC_0, DE_DLR, KC_PGDN, KC_END, PASTE,    _______, _______, _______, _______, _______,
                      MO(_MOUSE), _______, _______,    _______, _______, _______
),

[_SYMBOLS] = LAYOUT_split_4x5_3(
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    DE_DEG, DE_BSLS, DE_EURO, DE_PIPE, DE_PERC,    DE_GRV, DE_ACUT, DE_DLR, _______, _______,
    DE_AT, DE_HASH, DE_LPRN, DE_RPRN, DE_TILD,    DE_CIRC, DE_LBRC, DE_RBRC, DE_AMPR, DE_UNDS,
    _______, DE_MICR, DE_LABK, DE_RABK, DE_EXLM,    DE_SECT, DE_LCBR, DE_RCBR, _______, _______,
                      _______, _______, _______,    _______, _______, _______
),


[_MOUSE] = LAYOUT_split_4x5_3(
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, KC_MS_UP, _______, _______,    _______, _______, _______, _______, _______,
    _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______,    _______, KC_MS_BTN1, KC_MS_BTN2, KC_MS_WH_UP, KC_MS_WH_DOWN,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
                      _______, _______, _______,    _______, _______, _______
),



/*
[_EMPTY] = LAYOUT_split_4x5_3(
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______,
                      _______, _______, _______,    _______, _______, _______
),

*/
};

// Overrrides Start
const key_override_t comma_pipe_override = ko_make_basic(MOD_MASK_SHIFT, DE_COMM, DE_PIPE);
const key_override_t semicolon_colon_override = ko_make_basic(MOD_MASK_SHIFT, DE_SCLN, DE_COLN);
const key_override_t dot_amper_override = ko_make_basic(MOD_MASK_SHIFT, DE_DOT, DE_AMPR);
const key_override_t slash_asterisk_override = ko_make_basic(MOD_MASK_SHIFT, DE_SLSH, DE_ASTR);
const key_override_t dquote_question_override = ko_make_basic(MOD_MASK_SHIFT, DE_DQUO, DE_QUES);
const key_override_t squote_excalamtion_override = ko_make_basic(MOD_MASK_SHIFT, DE_QUOT, DE_EXLM);
const key_override_t minus_plus_override = ko_make_basic(MOD_MASK_SHIFT, DE_MINS, DE_PLUS);
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &comma_pipe_override,
    &semicolon_colon_override,
    &dot_amper_override,
    &slash_asterisk_override,
    &dquote_question_override,
    &squote_excalamtion_override,
    &minus_plus_override,
    &delete_key_override,
    NULL // Null terminate the array of overrides!
};
// End of Overrrides

// Combos
bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    switch (index) {
        case qu_combo:
        case Q_combo:
        case Y_combo:
        case ADIA:
        case UDIA:
        case ODIA:
        case SZ:
        case ESC_combo:
            return false;
        default:
            return true;
    }
}
// End of Combos

// Mod Tap
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_caps_word(keycode, record)) { return false; } // CAPSWORD
    switch (keycode) {
       case NUM_G:
            if (record->event.pressed) {
                tap_code16(S(DE_G));
            }
            return false;
       case COPY:
            if (record->event.pressed) {
                tap_code16(G(DE_C));
            }
            return false;
       case PASTE:
            if (record->event.pressed) {
                tap_code16(G(DE_V));
            }
            return false;
// Following section is from docs.qmk.fm, referring to a sincle copy / paste key
/*        case LT(0,KC_NO):
            if (record->tap.count && record->event.pressed) {
                tap_code16(C(KC_C)); // Intercept tap function to send Ctrl-C
            } else if (record->event.pressed) {
                tap_code16(C(KC_V)); // Intercept hold function to send Ctrl-V
            }
            return false; */
    }
    return true;
}
// End of Mod Tap

