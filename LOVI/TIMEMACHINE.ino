void TS_loop() {
  uint32_t  TS_currMillis = millis();
  if ((TS_currMillis - TS_prev_21ms) > 21L) {
    TS_21ms();
    TS_prev_21ms = TS_currMillis;
  }
  if ((TS_currMillis - TS_prev_301ms) > 301L) {
    TS_301ms();
    TS_prev_301ms = TS_currMillis;
  }
}

void TS_21ms() {
  GAME_process();
}

void TS_301ms() {
  BUTTON_check();
  OLED_display();
}


