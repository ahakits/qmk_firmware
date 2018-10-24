#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define WIN_OS 0
#define MAC_OS 1
#define SYMB 2
#define META 3
#define FN 4

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* WIN_OS
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  | Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  |  ]   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LSft | LCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   '  |   \  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | Bksp |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      | META | LGUI | LAlt |  FN  |Space |   |Space | Enter| META |  FN  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [WIN_OS] = LAYOUT( \
    KC_ESC,    KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,   KC_T,           KC_Y,   KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, \
    KC_LSFT,   KC_LCTL, KC_A,     KC_S,    KC_D,    KC_F,   KC_G,           KC_H,   KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_BSLS, \
    MO(SYMB),  KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,   KC_B,           KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_UP,   KC_BSPC, \
    XXXXXXX,   XXXXXXX, MO(META), KC_LGUI, KC_LALT, MO(FN), KC_SPC,         KC_SPC, KC_ENT,  MO(META), MO(FN), KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  /* MAC_OS
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  | Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  |  ]   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LSft | LCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   '  |   \  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | Bksp |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      | META | Opt  | LGUI |  FN  |Space |   |Space | Enter| META |  FN  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [MAC_OS] = LAYOUT( \
    KC_ESC,    KC_TAB,  KC_Q,     KC_W,    KC_E,    KC_R,   KC_T,           KC_Y,   KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC, \
    KC_LSFT,   KC_LCTL, KC_A,     KC_S,    KC_D,    KC_F,   KC_G,           KC_H,   KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_BSLS, \
    MO(SYMB),  KC_LSFT, KC_Z,     KC_X,    KC_C,    KC_V,   KC_B,           KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_UP,   KC_BSPC, \
    XXXXXXX,   XXXXXXX, MO(META), KC_LALT, KC_LGUI, MO(FN), KC_SPC,         KC_SPC, KC_ENT,  MO(META), MO(FN), KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   ~  |   !  |   @  |   #  |   $  |   %  |   |   ^  |   &  |   *  |  (   |  )   |  _   |  +   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LSft | LCtrl|      |      |      |      |      |   | LEFT | DOWN |  UP  | RIGHT|      |      |  Del |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |      |      |      |      |      |   |      |      |   ,  |   .  |   /  |  UP  | Bksp |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      | META | LGUI | LAlt |  FN  |Space |   |Space | Enter| META |  FN  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, KC_TILD, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5),           S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), KC_UNDS, KC_PLUS, \
    _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, KC_DEL, \
    _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______ \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   `  |   1  |   2  |   3  |   4  |   5  |   |   6  |   7  |   8  |   9  |   0  |   -  |   =  |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LSft | LCtrl|  F1  |  F2  |  F3  |  F4  |  F5  |   |  F6  |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |      |      |      |      |      |   |      |      |   ,  |   .  |   /  |  UP  | Bksp |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      | META | LGUI | LAlt |  FN  |Space |   |Space | Enter| META |  FN  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, \
    _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,             KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______ \
  ),

  /* FN
  * ,------------------------------------------------.   ,------------------------------------------------.
  * | ESC  |      |      |      |  UP  |      |      |   |      |      | Pscr | ScLk | Paus |      |      |
  * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
  * | LSft | LCtrl|      | LEFT | DOWN | RIGHT|      |   |      |      | Home | PgUp | Bksp |      |      |
  * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
  * | SYMB | LSft |      |      |      |      |      |   |      |      |      |      |      |  UP  | Bksp |
  * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
  * | Win  | mac  | META | LGUI | LAlt |  FN  |Space |   |Space | Enter| META |  FN  | LEFT | DOWN | RIGHT|
  * `------------------------------------------------'   `------------------------------------------------'
   */
  [FN] = LAYOUT( \
    _______,    XXXXXXX,    XXXXXXX, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX,           XXXXXXX, XXXXXXX, KC_PSCR, KC_SLCK, KC_PAUS, XXXXXXX, XXXXXXX, \
    _______,    _______,    XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,           XXXXXXX, XXXXXXX, KC_HOME, KC_PGUP, KC_BSPC, XXXXXXX, XXXXXXX, \
    _______,    _______,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX, KC_DEL,  KC_END,  KC_PGDN, XXXXXXX, _______, _______, \
    DF(WIN_OS), DF(MAC_OS), _______, _______, _______, _______, _______,           _______, _______, _______, _______, _______, _______, _______ \
  )
};
