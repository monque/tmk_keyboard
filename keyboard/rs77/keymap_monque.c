#include "keymap_common.h"

#define KEYMAP_TKG( \
    K0A, K0B, K0C, K0D, K0E, K0F, K0G, K0H, K0I, K0J, K0K, K0L, K0M, K0N, K0O, K0P, K0Q, K0R, \
    K1A, K1B, K1C, K1D, K1E, K1F, K1G, K1H, K1I, K1J, K1K, K1L, K1M, K1N, K1O, K1P, K1Q, K1R, \
    K2A, K2B, K2C, K2D, K2E, K2F, K2G, K2H, K2I, K2J, K2K, K2L,      K2N, K2O, K2P, K2Q     , \
    K3A,      K3C, K3D, K3E, K3F, K3G, K3H, K3I, K3J, K3K, K3L, K3M,      K3O, K3P, K3Q     , \
    K4A, K4B, K4C,                               K4J, K4K, K4L, K4M, K4N,      K4P, K4Q, K4R  \
) { \
    { KC_##K0A, KC_##K0B, KC_##K0C, KC_##K0D, KC_##K0E, KC_##K0F, KC_##K0G, KC_##K0H, KC_##K0I, KC_##K0J, KC_##K0K, KC_##K0L, KC_##K0M, KC_##K0N, KC_##K0O, KC_##K0P, KC_##K0Q, KC_##K0R }, \
    { KC_##K1A, KC_##K1B, KC_##K1C, KC_##K1D, KC_##K1E, KC_##K1F, KC_##K1G, KC_##K1H, KC_##K1I, KC_##K1J, KC_##K1K, KC_##K1L, KC_##K1M, KC_##K1N, KC_##K1O, KC_##K1P, KC_##K1Q, KC_##K1R }, \
    { KC_##K2A, KC_##K2B, KC_##K2C, KC_##K2D, KC_##K2E, KC_##K2F, KC_##K2G, KC_##K2H, KC_##K2I, KC_##K2J, KC_##K2K, KC_##K2L, KC_NO,    KC_##K2N, KC_##K2O, KC_##K2P, KC_##K2Q, KC_NO    }, \
    { KC_##K3A, KC_NO,    KC_##K3C, KC_##K3D, KC_##K3E, KC_##K3F, KC_##K3G, KC_##K3H, KC_##K3I, KC_##K3J, KC_##K3K, KC_##K3L, KC_##K3M, KC_NO,    KC_##K3O, KC_##K3P, KC_##K3Q, KC_NO    }, \
    { KC_##K4A, KC_##K4B, KC_##K4C, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K4J, KC_##K4K, KC_##K4L, KC_##K4M, KC_##K4N, KC_NO,    KC_##K4P, KC_##K4Q, KC_##K4R }, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO    }  \
}

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[KEYMAPS_COUNT][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* 0: Default Windows */
    KEYMAP_TKG(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,NLCK,PSLS,PAST,PMNS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,P7,  P8,  P9,  PPLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,     ENT, P4,  P5,  P6   ,     \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,P1,  P2,  P3   ,     \
        LCTL,LGUI,LALT,                              SPC, RALT,FN0, FN1, RCTL,     P0,  PDOT,PENT),

    /* 1: Default OS X */
    KEYMAP_TKG(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,NLCK,PSLS,PAST,PMNS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,P7,  P8,  P9,  PPLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN2, QUOT,     ENT, P4,  P5,  P6   ,     \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,P1,  P2,  P3   ,     \
        LCTL,LALT,LGUI,                              SPC, RALT,FN0, FN1, RCTL,     P0,  PDOT,PENT),

    /* 2: monque Custom */
    KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        LCTL,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS ,     \
        FN0, TRNS,TRNS,                              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS),

    /* 3: Fn Poker */
    KEYMAP_TKG(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,UP,  TRNS,TRNS,CALC,TRNS,INS, TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        CAPS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,     TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,APP, FN3, FN4, FN5, VOLD,VOLU,MUTE,END, PGDN,          TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,TRNS,                              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS),

    /* 4: Fn Selector */
    KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,FN7, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN8, TRNS,TRNS,TRNS,          FN6, TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,TRNS,                              TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS),

    /* 5: Mouse mode */
    KEYMAP_TKG(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,WH_U,WH_L,MS_U,WH_R,TRNS,TRNS,BTN4,TRNS,BTN5,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,WH_D,MS_L,MS_D,MS_R,TRNS,TRNS,BTN1,BTN3,BTN2,TRNS,TRNS,     TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,ACL0,ACL1,ACL2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS,TRNS,TRNS,TRNS ,     \
        TRNS,TRNS,TRNS,                              BTN1,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,TRNS),

};

#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[FN_ACTIONS_COUNT] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
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

#ifdef KEYMAP_EX_ENABLE
uint16_t keys_count(void) {
    return sizeof(keymaps) / sizeof(keymaps[0]) * MATRIX_ROWS * MATRIX_COLS;
}

uint16_t fn_actions_count(void) {
    return sizeof(fn_actions) / sizeof(fn_actions[0]);
}
#endif
