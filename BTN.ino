
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
      Serial.println("GAME ON");

      Serial.print("GAME_LVL=");
      Serial.println(GAME_LVL, DEC);

      Serial.print("GAME_BALLS_COUNT_max=");
      Serial.println(GAME_BALLS_COUNT_max, DEC);
    }
  }


}
