// Define all of
enum custom_keycodes {
  KC_ETREMA = SAFE_RANGE,
  KC_NDASH,
  KC_MDASH,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
          #ifdef MACROS_ENABLED
            case KC_ETREMA:  // Types " and e in US Int'l
                if (record->event.pressed) {
                SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(1) SS_TAP(X_E));
                } else {
                
                }
                break;
            case KC_NDASH:
                if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_0)));
                } else {

                }
                break;
            case KC_MDASH:
                if (record->event.pressed) {
                SEND_STRING(SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_5) SS_TAP(X_KP_1)));
                } else {

                }
                break;
          #endif
    }

  return process_record_keymap(keycode, record);
}