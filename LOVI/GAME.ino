void GAME_process() {
  if (GAME_isOn) {
    if (GAME_BALLS_COUNT_curr < GAME_BALLS_COUNT_max) {
      uint32_t delta_delay = millis() - SERVO_BALL_prevTime;
      if (delta_delay > LVL_delays[GAME_LVL][GAME_BALLS_COUNT_curr]) {
        SERVO_BALL_prevTime = millis();        
        if (random(0, 2) == 1) {
          SERVO_BALL_1_push();
        } else {
          SERVO_BALL_2_push();
        }
        GAME_BALLS_COUNT_curr++;
      }
    } else {
      GAME_isOn = false;
    }
  }
}
