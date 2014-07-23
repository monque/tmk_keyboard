#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default Windows */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LGUI,LALT,          SPC,                     RALT,FN0, FN1, RCTL),

    /* 1: Default OS X */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        LCTL,LALT,LGUI,          SPC,                     RALT,FN0, FN1, RCTL),

    /* 2: monque Custom */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        FN0, TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 3: Fn Poker */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL,  \
        TRNS,TRNS,TRNS,UP,  TRNS,TRNS,CALC,TRNS,INS, TRNS,PSCR,SLCK,PAUS,TRNS, \
        CAPS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,     TRNS, \
        TRNS,TRNS,APP, FN3, FN4, FN5, VOLD,VOLU,MUTE,END, PGDN,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 4: Fn Selector */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN8, TRNS,TRNS,TRNS,          FN6,  \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* 5: Mouse mode */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,WH_U,WH_L,MS_U,WH_R,TRNS,TRNS,BTN4,TRNS,BTN5,TRNS,TRNS,TRNS,TRNS, \
        TRNS,WH_D,MS_L,MS_D,MS_R,TRNS,TRNS,BTN1,BTN3,BTN2,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          BTN1,                    TRNS,TRNS,TRNS,TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(3),        // to Fn Poker
    [1] = ACTION_LAYER_MOMENTARY(4),        // to Fn Selector
    [2] = ACTION_LAYER_TAP_KEY(5, KC_SCLN), // to Mouse Mode

    [3] = ACTION_BACKLIGHT_DECREASE(),
    [4] = ACTION_BACKLIGHT_TOGGLE(),
    [5] = ACTION_BACKLIGHT_INCREASE(),

    [6] = ACTION_LAYER_TOGGLE(2),           // toggle monque
    [7] = ACTION_DEFAULT_LAYER_SET(0),      // set Windows
    [8] = ACTION_DEFAULT_LAYER_SET(1),      // set Mac OS X
};
