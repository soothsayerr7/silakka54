enum custom_keycodes {
    S7_QUOTE = QK_KB_0,
    S7_CARET,
    S7_GRAVE,

    S7_A_ACUT, S7_E_ACUT, S7_I_ACUT, S7_O_ACUT, S7_U_ACUT,
    S7_A_CIRC, S7_E_CIRC,            S7_O_CIRC,
    S7_A_TILD,                       S7_O_TILD,
    S7_A_GRAV,

    S7_C_CEDL
};

void tap_pair(uint16_t first_key, uint16_t second_key, bool is_shifted) {
    uint8_t saved_mods = get_mods();

    clear_mods();
    send_keyboard_report();

    tap_code16(first_key);
    tap_code16(is_shifted ? LSFT(second_key) : second_key);

    set_mods(saved_mods);
    send_keyboard_report();
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        bool is_shifted = (get_mods() & MOD_MASK_SHIFT);

        switch (keycode) {
            case S7_QUOTE:
                tap_pair(is_shifted ? LSFT(KC_QUOT) : KC_QUOT, KC_SPC, false);
                return false;

            case S7_CARET:
                if (is_shifted) {
                    tap_pair(LSFT(KC_6), KC_SPC, false);
                } else {
                    tap_code16(KC_6);
                }
                return false;

            case S7_GRAVE:
                tap_pair(is_shifted ? LSFT(KC_GRV) : KC_GRV, KC_SPC, false);
                return false;

            case S7_A_ACUT: tap_pair(KC_QUOT, KC_A, is_shifted); return false;
            case S7_E_ACUT: tap_pair(KC_QUOT, KC_E, is_shifted); return false;
            case S7_I_ACUT: tap_pair(KC_QUOT, KC_I, is_shifted); return false;
            case S7_O_ACUT: tap_pair(KC_QUOT, KC_O, is_shifted); return false;
            case S7_U_ACUT: tap_pair(KC_QUOT, KC_U, is_shifted); return false;

            case S7_A_CIRC: tap_pair(LSFT(KC_6), KC_A, is_shifted); return false;
            case S7_E_CIRC: tap_pair(LSFT(KC_6), KC_E, is_shifted); return false;
            case S7_O_CIRC: tap_pair(LSFT(KC_6), KC_O, is_shifted); return false;

            case S7_A_TILD: tap_pair(LSFT(KC_GRV), KC_A, is_shifted); return false;
            case S7_O_TILD: tap_pair(LSFT(KC_GRV), KC_O, is_shifted); return false;

            case S7_A_GRAV: tap_pair(KC_GRV, KC_A, is_shifted); return false;

            case S7_C_CEDL: tap_pair(KC_QUOT, KC_C, is_shifted); return false;

            default: return true;
        }
    }
    return true;
}
