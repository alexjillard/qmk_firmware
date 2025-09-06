/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    BASE = 0,
    GAMING,
    SYMBOL,
    NUMBER,
    NAV,
    FUNC,
    MOUSE
};

#define NM_SPC LT(NUMBER, KC_SPC)
#define GO_BASE TO(0)
#define GO_SYM TO(SYMBOL)
#define GO_NUM TO(NUMBER)
#define GO_NAV TO(NAV)
#define GO_FUNC TO(FUNC)
#define GO_MOUS TO(MOUSE)


#define PD_BASE PDF(BASE)
#define PD_GAME PDF(GAMING)
#define PT_Z LT(MOUSE, KC_Z)
#define PT_SLSH LT(MOUSE, KC_SLSH)


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
           KC_ESC, XXXXXXX, XXXXXXX,  LCS(4), LCSG(4), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
           KC_TAB,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,       KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN, KC_MINS,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          KC_LCTL,    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,       KC_M,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX,    PT_Z,    KC_X,    KC_C,    KC_D,    KC_V,       KC_K,    KC_H, KC_COMM,  KC_DOT, PT_SLSH,  GO_SYM,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                      GO_NAV,  KC_SPC, KC_BSPC,    GO_BASE, OS_LSFT,
                                              KC_LALT, KC_LGUI,    KC_ENT
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),
  [GAMING] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
           KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
           KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_MINS,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          KC_LSFT,    PT_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, PT_SLSH,  GO_SYM,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                      GO_NAV,  KC_SPC, KC_BSPC,    GO_BASE, OS_LSFT,
                                              KC_LALT, KC_LGUI,     KC_ENT
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),
  [SYMBOL] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, KC_UNDS, KC_MINS, KC_DQUO, KC_QUOT, XXXXXXX,    XXXXXXX, KC_LCBR, KC_RCBR, KC_TILD, KC_MINS, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_BSLS, KC_LPRN, KC_RPRN, KC_PIPE, KC_PLUS, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,    XXXXXXX, KC_LBRC, KC_RBRC,  KC_GRV,  KC_EQL,  GO_NUM,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                     _______, _______, _______,    GO_BASE, _______,
                                              _______, _______,    _______
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),
  [NUMBER] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, XXXXXXX, XXXXXXX,   KC_UP, XXXXXXX, XXXXXXX,    XXXXXXX,   KC_P7,   KC_P8,   KC_P9, KC_PPLS, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,    KC_LBRC,   KC_P4,   KC_P5,   KC_P6, KC_PDOT, KC_LBRC,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,   KC_P1,   KC_P2,   KC_P3, KC_PENT,  GO_SYM,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                     _______, _______, _______,    GO_BASE, _______,
                                              _______, _______,      KC_P0
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),
  [NAV] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_PGUP,   KC_UP, KC_PGDN, KC_COPY, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT,  KC_CUT, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_INS, KC_HOME, XXXXXXX,  KC_END, KC_PSTE, GO_FUNC,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                     _______, _______, _______,    GO_BASE, _______,
                                              _______, _______,    _______
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),

  [FUNC] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     PD_BASE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,     PD_GAME, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                     _______, _______, _______,     GO_BASE, _______,
                                              _______, _______,     _______
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),

  [MOUSE] = LAYOUT(
     // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
          XXXXXXX, XXXXXXX,S_D_RMOD,DPI_RMOD, DPI_MOD, S_D_MOD,    S_D_MOD, DPI_MOD,DPI_RMOD,S_D_RMOD, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          _______, XXXXXXX, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,    XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, XXXXXXX,
     // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
          XXXXXXX, SNIPING, DRGSCRL, MS_BTN2, MS_BTN1, XXXXXXX,    XXXXXXX, MS_BTN1, MS_BTN2, DRGSCRL, SNIPING, XXXXXXX,
     // ╰──────────────────────────────────────────────────────┤ ├─────────────────────────────────────────────────────╯
                                     _______, _______, _______,    GO_BASE, _______,
                                              _______, _______,    MS_BTN1
     //                            ╰───────────────────────────╯ ╰──────────────────╯
     ),
};
// clang-format on

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&delete_key_override
};
