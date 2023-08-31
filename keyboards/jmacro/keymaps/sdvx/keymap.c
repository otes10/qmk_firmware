#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_C, KC_LALT, KC_M, TO(1),
        KC_D, KC_F, KC_C, KC_J, KC_K
    ),
    [1] = LAYOUT(
        KC_LCTL, LCTL(KC_Z), KC_LALT, LALT(KC_5), TO(0),
        LALT(KC_1), LALT(KC_2), KC_C, LALT(KC_3), LALT(KC_4)
    ),
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // First encoder
        switch (get_highest_layer(layer_state)) {
            case 0:
                if (clockwise) {
                    tap_code(KC_W);
                } else {
                    tap_code(KC_E);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_WH_U);
                } else {
                    tap_code(KC_WH_D);
                }
                break;
        }
    } else if (index == 1) { // Second encoder
        switch (get_highest_layer(layer_state)) {
            case 0:
                if (clockwise) {
                    tap_code(KC_O);
                } else {
                    tap_code(KC_P);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;
        }
    }
    return true;
}
