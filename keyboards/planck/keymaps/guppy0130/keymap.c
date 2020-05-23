#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* L0
 * ,-----------------------------------------------------------------------------------.
 * | Esc  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | CTRL | GUI  | Alt  |  `   | MOD1 |    Space    | MOD2 | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
    [0] = LAYOUT_ortho_4x12(
        KC_ESC , KC_Q   , KC_W   , KC_E  , KC_R , KC_T  , KC_Y  , KC_U , KC_I   , KC_O   , KC_P   , KC_BSPC,
        KC_TAB , KC_A   , KC_S   , KC_D  , KC_F , KC_G  , KC_H  , KC_J , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z   , KC_X   , KC_C  , KC_V , KC_B  , KC_N  , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,
        KC_LCTL, KC_LGUI, KC_LALT, KC_GRV, MO(1), KC_SPC, KC_SPC, MO(2), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT
    ),
/* L1
 * ,-----------------------------------------------------------------------------------.
 * |      |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | HOME |PRNTSC|SLEEP |      | Vol+ |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             | END  | Prev | Play | Next | Vol- |
 * `-----------------------------------------------------------------------------------'
 */
    [1] = LAYOUT_ortho_4x12(
        KC_TRNS, KC_1   , KC_2   , KC_3 , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL ,
        KC_TRNS, KC_F1  , KC_F2  , KC_F3, KC_F4  , KC_F5  , KC_F6  , KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS,
        KC_TRNS, KC_F7  , KC_F8  , KC_F9, KC_F10 , KC_F11 , KC_F12 , KC_HOME, KC_PSCR, KC_SLEP, KC_NO  , KC_VOLU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_END , KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD
    ),
/* L2
 * ,-----------------------------------------------------------------------------------.
 * |      |RESET |DEBUG |      |      |      |      |NUMLK |   7  |   8  |   9  |  /   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MU_MOD|AU_ON |AU_OFF|      |      |SCRLK |   4  |   5  |   6  |  *   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |MUV_DE|MUV_IN|MU_ON |MU_OFF|      |      |CAPLK |   1  |   2  |   3  |  -   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |  `   |      |    Space    |      |   =  |   0  |   .  |  +   |
 * `-----------------------------------------------------------------------------------'
 */
    [2] = LAYOUT_ortho_4x12(
        KC_TRNS, RESET  , DEBUG  , KC_NO, KC_NO , KC_NO  , KC_NO  , KC_NLCK, KC_P7  , KC_P8, KC_P9  , KC_PSLS,
        KC_TRNS, KC_NO  , MU_MOD , AU_ON, AU_OFF, KC_NO  , KC_NO  , KC_SLCK, KC_P4  , KC_P5, KC_P6  , KC_PAST,
        KC_TRNS, MUV_DE , MUV_IN , MU_ON, MU_OFF, KC_NO  , KC_NO  , KC_CAPS, KC_P1  , KC_P2, KC_P3  , KC_PMNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO , KC_TRNS, KC_TRNS, KC_TRNS, KC_PEQL, KC_P0, KC_PDOT, KC_PPLS
    )
};
