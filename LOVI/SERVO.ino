void SERVO_init() {
  SERVO_BALL_1.attach(SERVO_BALL_1_pin);
  SERVO_BALL_2.attach(SERVO_BALL_2_pin);
  SERVO_BALL_1.write(20);
  SERVO_BALL_2.write(175);
}

void SERVO_BALL_1_push() {
  SERVO_BALL_1.write(170);  //drop ball
  delay(600);
  SERVO_BALL_1.write(20);  //goto top (ready state)
}

void SERVO_BALL_2_push() {
  SERVO_BALL_2.write(20);
  delay(600);
  SERVO_BALL_2.write(175);  
}
