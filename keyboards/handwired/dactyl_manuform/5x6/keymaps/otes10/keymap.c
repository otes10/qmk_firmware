#include QMK_KEYBOARD_H

// Keymap json file generated using https://config.qmk.fm/#/handwired/dactyl_manuform/5x6/LAYOUT_5x6
// File generated from keymap json file using `qmk json2c {keymap}` with QMK MSYS


// Layers
#define TYPING   (0U)
#define GAMING   (1U)
#define FUNCTION (2U)

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_E RCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[TYPING] = LAYOUT_5x6(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_LALT, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,             KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
        KC_LSFT, HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_G,             KC_M,    HOME_N,  HOME_E,  HOME_I,  HOME_O,  KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,             KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_GRV,
                          KC_LBRC, KC_RBRC,                                              KC_MINS, KC_EQL,
                                            KC_TAB,  KC_SPC,           KC_BSPC, KC_ENT,
                                            TG(1),   TT(2),            KC_UP,   KC_RGHT,
                                            KC_F13,  KC_F14,           KC_LEFT, KC_DOWN
    ),
	[GAMING] = LAYOUT_5x6(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LALT, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,             KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,             KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,
        KC_NO,   KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                          KC_LGUI, KC_LALT,                                              KC_NO,   KC_NO,
                                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
    ),
	[FUNCTION] = LAYOUT_5x6(
        KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,
        KC_NO,   KC_NO,   KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,            KC_NLCK, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,  KC_PSLS,
        KC_CAPS, KC_NO,   KC_INS,  KC_HOME, KC_PGUP, KC_NO,            KC_NO,   KC_P4,   KC_P5,   KC_P6,   KC_PPLS,  KC_PAST,
        KC_NO,   KC_NO,   KC_DEL,  KC_END,  KC_PGDN, KC_NO,            KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PEQL,  KC_PENT,
                          KC_NO,   KC_NO,                                                KC_P0,   KC_PDOT,
                                            KC_NO,   KC_NO,            KC_NO, KC_NO,
                                            KC_TRNS, KC_TRNS,          KC_NO, KC_NO,
                                            KC_TRNS, KC_TRNS,          KC_NO, KC_NO
    ),
};
