void GAME_process() {
  if (GAME_isOn) {
    if (GAME_BALLS_COUNT_curr < GAME_BALLS_COUNT_max) {
      SERVO_BALL_push();
      delay(LVL_delays[GAME_LVL][GAME_BALLS_COUNT_curr]);
      GAME_BALLS_COUNT_curr++;
    } else {
      GAME_isOn = false;
    }
    Serial.print("GAME_BALLS_COUNT_curr=");
    Serial.println(GAME_BALLS_COUNT_curr, DEC);
  }
}
