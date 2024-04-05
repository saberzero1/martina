#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  MAC_MISSION_CONTROL,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           RGB_MODE_FORWARD,                                TOGGLE_LAYER_COLOR,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_MEH,                                         KC_HYPR,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_ALT,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_LEFT_GUI,                                                                    KC_RIGHT_GUI,   KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_GRAVE,       ST_MACRO_0,     KC_APPLICATION, KC_LEFT,        KC_RIGHT,       TD(DANCE_0),                                                                                                    TD(DANCE_1),    KC_UP,          KC_DOWN,        KC_LBRC,        KC_RBRC,        KC_RIGHT_ALT,   
    KC_SPACE,       KC_BSPC,        TT(1),                          TT(2),          KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_GRAVE,       KC_TILD,        LGUI(LCTL(KC_SPACE)),KC_LABK,        KC_RABK,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_MINUS,       KC_UNDS,        
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_SLASH,       KC_QUES,        KC_LBRC,        KC_RBRC,        KC_SCLN,        KC_COLN,        
    KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_COMMA,       KC_DOT,                                         KC_QUOTE,       KC_DQUO,        KC_LCBR,        KC_RCBR,        KC_BSLS,        KC_PIPE,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       LCTL(KC_R),     LCTL(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(KC_RIGHT), LCTL(US_LCBR),  LCTL(KC_EQUAL), KC_AUDIO_VOL_UP,KC_MS_WH_LEFT,  KC_ENTER,       
    KC_TRANSPARENT, LCTL(KC_A),     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    TD(DANCE_2),    KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    MAC_MISSION_CONTROL,                                LCTL(KC_LEFT),  LCTL(US_RCBR),  LCTL(KC_MINUS), KC_AUDIO_VOL_DOWN,KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_DOWN
  ),
};
const uint16_t PROGMEM combo0[] = { KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {213,255,255}, {213,255,255}, {213,255,255}, {212,255,255}, {212,255,255}, {212,255,255}, {212,255,255}, {212,255,255}, {210,255,255}, {210,255,255}, {210,255,255}, {210,255,255}, {210,255,255}, {209,255,255}, {209,255,255}, {209,255,255}, {209,255,255}, {209,255,255}, {207,255,255}, {207,255,255}, {207,255,255}, {207,255,255}, {207,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {206,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {204,255,255}, {202,255,255}, {202,255,255}, {202,255,255}, {191,255,255}, {191,255,255}, {191,255,255}, {188,255,255}, {188,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {191,255,255}, {191,255,255}, {196,255,255}, {196,255,255}, {196,255,255}, {194,255,255}, {194,255,255}, {198,255,255}, {198,255,255}, {198,255,255}, {196,255,255}, {196,255,255}, {199,255,255}, {199,255,255}, {199,255,255}, {198,255,255}, {198,255,255}, {201,255,255}, {201,255,255}, {201,255,255}, {199,255,255}, {202,255,255}, {202,255,255}, {202,255,255}, {201,255,255}, {201,255,255}, {202,255,255}, {202,255,255} },

    [1] = { {110,255,255}, {110,255,255}, {110,255,255}, {108,243,255}, {108,243,255}, {108,243,255}, {108,243,255}, {108,243,255}, {105,231,255}, {105,231,255}, {105,231,255}, {105,231,255}, {105,231,255}, {103,219,255}, {103,219,255}, {103,219,255}, {103,219,255}, {103,219,255}, {100,207,255}, {100,207,255}, {100,207,255}, {100,207,255}, {100,207,255}, {97,195,255}, {97,195,255}, {97,195,255}, {97,195,255}, {97,195,255}, {93,183,255}, {93,183,255}, {93,183,255}, {93,183,255}, {93,183,255}, {89,171,255}, {84,166,255}, {89,171,255}, {57,217,255}, {57,217,255}, {57,217,255}, {55,225,255}, {55,225,255}, {60,210,255}, {60,210,255}, {60,210,255}, {57,217,255}, {57,217,255}, {64,202,255}, {64,202,255}, {64,202,255}, {60,210,255}, {60,210,255}, {67,195,255}, {67,195,255}, {67,195,255}, {64,202,255}, {64,202,255}, {71,187,255}, {71,187,255}, {71,187,255}, {67,195,255}, {67,195,255}, {75,179,255}, {75,179,255}, {75,179,255}, {71,187,255}, {79,173,255}, {79,173,255}, {79,173,255}, {75,179,255}, {75,179,255}, {79,173,255}, {79,173,255} },

    [2] = { {41,255,255}, {41,255,255}, {41,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {40,255,255}, {39,255,255}, {39,255,255}, {39,255,255}, {39,255,255}, {39,255,255}, {37,255,255}, {37,255,255}, {37,255,255}, {37,255,255}, {37,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {36,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {35,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {32,255,255}, {31,255,255}, {32,255,255}, {21,255,255}, {21,255,255}, {21,255,255}, {20,255,255}, {20,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {21,255,255}, {21,255,255}, {24,255,255}, {24,255,255}, {24,255,255}, {22,255,255}, {22,255,255}, {25,255,255}, {25,255,255}, {25,255,255}, {24,255,255}, {24,255,255}, {26,255,255}, {26,255,255}, {26,255,255}, {25,255,255}, {25,255,255}, {28,255,255}, {28,255,255}, {28,255,255}, {26,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {26,255,255}, {28,255,255}, {29,255,255}, {29,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_GUI) SS_DELAY(100) SS_LGUI(SS_TAP(X_L)));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);

    case RGB_SLD:
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_ALT);
        tap_code16(KC_LEFT_ALT);
        tap_code16(KC_LEFT_ALT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_ALT);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_ALT); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(KC_LEFT_ALT); register_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: register_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_ALT); register_code16(KC_LEFT_ALT);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_ALT); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_HOLD: unregister_code16(KC_LEFT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_ALT); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT_CTRL);
        tap_code16(KC_RIGHT_CTRL);
        tap_code16(KC_RIGHT_CTRL);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT_CTRL);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT_CTRL); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT_CTRL); register_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_HOLD: register_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT_CTRL); register_code16(KC_RIGHT_CTRL);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT_CTRL); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT_CTRL); break;
        case DOUBLE_HOLD: unregister_code16(KC_RIGHT_SHIFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT_CTRL); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_H));
        tap_code16(LCTL(KC_H));
        tap_code16(LCTL(KC_H));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_H));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_H)); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_H))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_H)); register_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_H)); register_code16(LCTL(KC_H));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_H)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_H))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_H)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_H)); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
