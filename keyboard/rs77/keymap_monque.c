#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default qwerty */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,      NUMLOCK,KP_SLASH,KP_ASTERISK,KP_MINUS,\
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      KP_7,   KP_8,    KP_9,       KP_PLUS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN3, QUOT,     ENT,       KP_4,   KP_5,    KP_6,       NO,      \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,      KP_1,   KP_2,    KP_3,       KP_ENTER,\
        LCTL,LGUI,LALT,          SPC,                     RALT,FN0, FN1, RCTL,      KP_0,   NO,      KP_DOT,     NO),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(2),        // to Fn overlay
    [1] = ACTION_LAYER_MOMENTARY(2),        // to Fn overlay
};
