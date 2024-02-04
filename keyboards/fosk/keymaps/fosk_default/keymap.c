#include QMK_KEYBOARD_H

//#define M_PROG DYN_MACRO_PROG

enum fosk_layers {
    _HOME,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // [_HOME] = LAYOUT(
  //     //kb right half (flipped horizontally)
  //   MO(_FN),    KC_NO,    KC_PSCR,            KC_F12,   KC_F11,   KC_F10,   KC_F9,    KC_F8, 
  //   KC_NO,    KC_EQL,   KC_MINS,  KC_0,     KC_9,     KC_8,     KC_7,     KC_6,     KC_PMNS, 
  //   KC_BSLS,  KC_RBRC,  KC_LBRC,  KC_P,     KC_O,     KC_I,     KC_U,     KC_Y,     KC_PPLS, 
  //             KC_ENT,   KC_QUOT,  KC_SCLN,  KC_L,     KC_K,     KC_J,     KC_H,     
  //   KC_BSPC,  KC_UP,    KC_RSFT,  KC_SLSH,  KC_DOT,   KC_COMM,  KC_M,     KC_N,     KC_PENT,
  //   KC_RGHT,  KC_DOWN,  KC_LEFT,  KC_RCTL,  KC_RGUI,  KC_APP,             KC_SPC,   
  //     //kb left half
  //   KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7, 
  //   KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_NUM,   KC_PSLS,  KC_PAST, 
  //   KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_P7,    KC_P8,    KC_P9, 
  //   KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_P4,    KC_P5,    KC_P6, 
  //   KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_P1,    KC_P2,    KC_P3, 
  //   KC_LCTL,  KC_LGUI,            KC_LALT,  KC_SPC,             KC_P0,    KC_P0,    KC_PDOT //second P0 should be Macro 0
  // ),

  [_HOME] = LAYOUT(

    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,
    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  RGB_MOD,  RGB_VAI,
    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_NUM,   KC_PSLS,  KC_PAST,
    KC_PMNS,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   RGB_VAD,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_P7,    KC_P8,    KC_P9,
    KC_PPLS,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_P4,    KC_P5,    KC_P6,
    KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_P1,    KC_P2,    KC_P3,
    KC_PENT,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  KC_UP,    KC_BSPC,
    KC_LCTL,  KC_LGUI,            KC_LALT,  KC_SPC,             KC_P0,    KC_P0,    KC_PDOT,
    KC_SPC,   KC_APP,   KC_RGUI,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT

  ),

  [_FN] = LAYOUT(
      //kb right half (flipped horizontally)
    _______,  _______,  _______,            KC_F24,   KC_F23,   KC_F22,   KC_F21,   KC_F20, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
              _______,  _______,  _______,  _______,  _______,  _______,  _______,  
    _______,  RGB_VAI,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    RGB_MOD,  RGB_VAD,  RGB_TOG,  _______,  _______,  _______,            _______,  
      //kb left half
    _______,            KC_F13,   KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
    _______,  _______,            _______,  _______,            _______,  _______,  _______
  )

};     

// turn led 69 (under Caps Key) red
const rgblight_segment_t PROGMEM caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {69, 1, HSV_RED}
);

// wasd
const rgblight_segment_t PROGMEM game_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  {66, 3, HSV_PURPLE},
  {72, 1, HSV_PURPLE}
);

// define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    caps_layer,
    game_layer
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = rgb_layers;
}