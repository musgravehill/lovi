

#define SERVO_BALL_pin 5
#define BTN_LVL_pin 7
#define BTN_START_pin 8

uint8_t GAME_BALLS_COUNT_max = 0;
uint8_t GAME_BALLS_COUNT_curr = 0;
uint8_t GAME_LVL = 0;
bool GAME_isOn = false;

uint8_t LVL_balls_count[3] = {6, 8, 10};

uint16_t LVL_delays[3][30] = {
  { 5000, 5000, 3000, 1000, 0, 0 },
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
uint32_t SERVO_BALL_prevTime = 0L;


//================================== TIMEMACHINE =================================================================
uint32_t TS_prev_21ms = 0L;
uint32_t TS_prev_301ms = 0L;

//=============================== OLED ============================================================================
//OLED SDA A4, SCL A5
#include <OLED_I2C.h>
OLED  myOLED(SDA, SCL); //128*64
extern uint8_t SmallFont[]; //6*86
extern uint8_t BigNumbers[]; //14*24

void setup() {
  delay(2000);  
  SERVO_init();
  BUTTON_init();
  OLED_init();
  GAME_BALLS_COUNT_max = LVL_balls_count[GAME_LVL];
}

void loop() {
  TS_loop();
}
