void GAME_process() {
  if (GAME_isOn) {
    if (GAME_BALLS_COUNT_curr < GAME_BALLS_COUNT_max) {

      uint32_t delta_delay = millis() - SERVO_BALL_prevTime;
      if (delta_delay > LVL_delays[GAME_LVL][GAME_BALLS_COUNT_curr]) {
        SERVO_BALL_prevTime = millis();
        GAME_BALLS_COUNT_curr++;
        SERVO_BALL_push();
      }

    } else {
      GAME_isOn = false;
    }
  }
}
