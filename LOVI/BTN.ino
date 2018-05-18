
void BUTTON_init() {
  pinMode(BTN_START_pin, INPUT_PULLUP);
  pinMode(BTN_LVL_pin, INPUT_PULLUP);
}

void BUTTON_check() {
  boolean button_state;

  //start game
  button_state = digitalRead(BTN_START_pin);
  if (!button_state) {
    if (!GAME_isOn) {
      GAME_BALLS_COUNT_curr = 0;
      GAME_BALLS_COUNT_max = LVL_balls_count[GAME_LVL];
      GAME_isOn = true;
    }
  }

  //lvl game
  button_state = digitalRead(BTN_LVL_pin);
  if (!button_state) {
    if (!GAME_isOn) {
      GAME_LVL++;
      if (GAME_LVL > 2) {
        GAME_LVL = 0;
      }
      GAME_BALLS_COUNT_max = LVL_balls_count[GAME_LVL];
    }
  }

}
