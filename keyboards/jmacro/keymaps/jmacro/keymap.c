#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB, KC_ESC, KC_LALT, KC_GRAVE, KC_ENTER,
        KC_Z, KC_X, KC_C, KC_V, KC_B
    ),
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // First encoder
        if (clockwise) {
            tap_code(KC_WH_D);
        } else {
            tap_code(KC_WH_U);
        }
    } else if (index == 1) { // Second encoder
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
    }
    return true;
}
