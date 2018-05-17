void SERVO_init() {
  SERVO_BALL.attach(SERVO_BALL_pin);
  SERVO_BALL.write(150);
}

void SERVO_BALL_push() {
  SERVO_BALL.write(25);
  delay(500);
  SERVO_BALL.write(150);
  delay(500);
}
