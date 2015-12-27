#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
      Q,   W,   E,   R,   T,         Y,   U,   I,   O,   P,
     A,   S,   D,   F,   G,           H,   J,   K,   L,SCLN,
    Z,   X,   C,   V,   B,             N,   M,COMM, DOT,SLSH,
  ESC, TAB,LGUI,LSFT,BSPS,LCTL,LALT, SPC, FN0,MINS,QUOT, ENT),

  /* 1: punctuation and numbers */
	KEYMAP(
   EXCL,  AT,LCBR,RCBR,VBAR,      PGUP,  P7,  P8,  P9,PAST,
  HASH,DOLR,LPBR,RPBR, GRV,        PGDN,  P4,  P5,  P6,PPLS,
 PERC, CAR,LBRC,RBRC,TILD,          AMPR,  P1,  P2,  P3,PSLS,
  FN1, INS,LGUI,LSFT,BSPS,LCTL,LALT, SPC, FN0,PDOT,  P0,PEQL),

  /* 2: arrows and function keys */
	KEYMAP(
    INS,HOME,  UP, END,PGUP,        UP,  F7,  F8,  F9,PAST,
   DEL,LEFT,DOWN,RGHT,PGDN,        DOWN,  F4,  F5,  F6,PPLS,
   NO,  NO,  NO,  NO,  NO,            NO,  F1,  F2,  F3,PSLS,
   NO,  NO,LGUI,LSFT,BSPS,LCTL,LALT, SPC, FN0,  NO,  NO, FN3),
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
