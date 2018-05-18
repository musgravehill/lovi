void SERVO_init() {
  SERVO_BALL.attach(SERVO_BALL_pin);
  SERVO_BALL.write(150);
}

void SERVO_BALL_push() {
  SERVO_BALL.write(40);
  delay(450);
  SERVO_BALL.write(150);
  delay(450);
}
