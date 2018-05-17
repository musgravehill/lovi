

#define SERVO_BALL_pin 5
#define BTN_START_pin 7
#define BTN_LVL_pin 8

uint8_t GAME_BALLS_COUNT_max = 1;
uint8_t GAME_BALLS_COUNT_curr = 1;
uint8_t GAME_LVL = 1;
bool GAME_isOn = false;

uint8_t LVL_balls_count[3] = {5, 8, 10};

uint16_t LVL_delays[3][30] = {
  { 2000, 2000, 1000, 1000, 1000 },
  {2000, 1000, 1000, 0, 0, 0, 0, 0},
  {2000, 2000, 1000, 1000, 1000, 0, 0, 0, 0, 0}
};

/*= [2000, 2000, 2000, 2000, 2000, 1000, 1000, 1000, 0, 0]; //size= LVL_1_balls_count
  uint16_t LVL_2_delays = [2000, 2000, 2000, 2000, 2000, 1000, 1000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 ]; //size= LVL_2_balls_count
  uint16_t LVL_3_delays = [2000, 2000, 2000, 2000, 2000, 1000, 1000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]; //size= LVL_3_balls_count
*/

//=================================== SERVO ball ==================================================================
#include <Servo.h>
Servo SERVO_BALL;


//================================== TIMEMACHINE =================================================================
uint32_t TS_prev_5ms = 0L;
uint32_t TS_prev_301ms = 0L;

void setup() {
  Serial.begin(57600);
  SERVO_init();
  BUTTON_init();
}

void loop() {
  TS_loop();
}
