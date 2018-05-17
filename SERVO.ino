void SERVO_init() {
  pinMode(SERVO_BALL_RELAY_pin, OUTPUT);
  SERVO_BALL.attach(SERVO_BALL_pin);
}
void SERVO_BALL_on() {
  digitalWrite(SERVO_BALL_RELAY_pin, 0);
}
void SERVO_BALL_off() {
  digitalWrite(SERVO_BALL_RELAY_pin, 1);
}

void SERVO_BALL_test() {
  SERVO_BALL_on();

  SERVO_BALL.write(90);
  delay(20);
  SERVO_BALL.write(0);
  delay(20);
  SERVO_BALL.write(180);
  delay(20);
  SERVO_BALL.write(90);

  SERVO_BALL_off();

}
