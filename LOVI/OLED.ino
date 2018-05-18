void OLED_init() {
  myOLED.begin();
  myOLED.setBrightness(1);
}

void OLED_display() {
  myOLED.clrScr();

  myOLED.setFont(SmallFont);
  if (GAME_isOn) {
    myOLED.print("GAME ON", 40, 50);
  } else {
    myOLED.print("GAME END", 40, 50);
  }
  myOLED.print("LVL", 92, 10);

  myOLED.setFont(BigNumbers);
  myOLED.printNumI(GAME_BALLS_COUNT_curr, 0, 0, 2, '0'); //x,y, lenght(including sign), filler to lenth
  myOLED.printNumI(-1 * GAME_BALLS_COUNT_max, 34, 0, 2, '0');
  myOLED.printNumI(GAME_LVL, 114, 0);

  myOLED.update();
}
