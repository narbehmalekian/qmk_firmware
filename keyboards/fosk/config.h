#pragma once

#include "config_common.h"

#define USB_MAX_POWER_CONSUMPTION 500
/* force n-key rollover*/
#define FORCE_NKRO
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 50
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9
/* key matrix pins */
#define MATRIX_ROW_PINS { B0, D0, D1, D2, D3, D5, B6, D4, D6, D7, B4, B5 }
#define MATRIX_COL_PINS { B1, B2, B7, F7, F6, F5, F4, F1, F0 }
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

//#define LED_NUM_LOCK_PIN E0
//#define LED_CAPS_LOCK_PIN E1
//#define LED_SCROLL_LOCK_PIN B7

//#define BACKLIGHT_PIN B3
// enable support for multiple lighting layers
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 2
// If defined, then lighting layers will be shown even if RGB Light is off.
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LIMIT_VAL 150 // maximum brightness, out of 255

#define RGB_DI_PIN B3 // The pin connected to the data pin of the LEDs
#define RGB_MATRIX_LED_COUNT 99 // The number of LEDs connected
#define RGB_MATRIX_TIMEOUT 90000 // in ms
#define RGB_MATRIX_DEFAULT_HUE 255
#define RGB_MATRIX_DEFAULT_SAT 240
#define RGB_MATRIX_DEFAULT_VAL 100


#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_HUE_PENDULUM

// #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP

#define RGB_MATRIX_KEYPRESSES
// #define RGB_MATRIX_KEYRELEASES
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#define ENABLE_RGB_MATRIX_SPLASH

// units to step when in/decreasing value (brightness)
#define RGB_MATRIX_VAL_STEP 25
#define RGB_MATRIX_HUE_STEP 8
#define RGB_MATRIX_SAT_STEP 8

#define ENCODERS_PAD_A { C7 }
#define ENCODERS_PAD_B { C6 }
#define ENCODER_RESOLUTION 4


// #define RGB_MATRIX_CUSTOM_EFFECTS_IMPLS
// RGB_MATRIX_EFFECT(reactive_glow)
// static bool reactive_glow(effect_params_t* params) {
//   RGB_MATRIX_USE_LIMITS(led_min, led_max);
//   for (uint8_t i = led_min; i < led_max; i++) {
//     rgb_matrix_set_color(i, 0xff, 0xff, 0x00);
//   }
//   return rgb_matrix_check_finished_leds(led_max);
// }


// #define DYNAMIC_MACRO_COUNT 12
// #define DYNAMIC_MACRO_SIZE 48
// #define DYNAMIC_MACRO_EEPROM_STORAGE
// #define DYNAMIC_MACRO_EEPROM_MAGIC_ADDR (uint16_t*)32
// #define DYNAMIC_MACRO_EEPROM_BLOCK0_ADDR (uint8_t*)34