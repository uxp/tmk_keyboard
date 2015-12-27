#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
      Q,   W,   E,   R,   T,         Y,   U,   I,   O,   P,
     A,   S,   D,   F,   G,           H,   J,   K,   L,SCLN,
    Z,   X,   C,   V,   B,             N,   M,COMM, DOT,SLSH,
  ESC, TAB,LGUI,LSFT,BSPS,LCTL,LALT, SPC, FN0,MINS,QUOT, ENT),
  /* 1: punctuation and numbers */
  FN_LAYER,                                     \
  /* 2: arrows and function keys */
  LAYER_TWO
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
  [1] = ACTION_LAYER_ON(2, 1),  // switch to layer 2
  [2] = ACTION_LAYER_OFF(2, 1),  // switch back to layer 0
  [3] = ACTION_FUNCTION(BOOTLOADER)
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}
