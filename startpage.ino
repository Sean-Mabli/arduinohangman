void Start_Page_Setup() {
  tft.fillScreen(BLACK);
  tft.drawCircle(160, 70, 50, WHITE);
  tft.fillCircle(140, 50, 5, WHITE);
  tft.fillCircle(180, 50, 5, WHITE);
  tft.drawLine(140, 80, 180, 80, WHITE);
  tft.drawLine(140, 81, 180, 81, WHITE);
  tft.drawLine(140, 82, 180, 82, WHITE);
  tft.drawLine(160, 120, 160, 280, WHITE);
  tft.drawLine(160, 200, 100, 140, WHITE);
  tft.drawLine(160, 200, 220, 140, WHITE);
  tft.drawLine(160, 280, 100, 340, WHITE);
  tft.drawLine(160, 280, 220, 340, WHITE);
  tft.drawRect(20, 380, 280, 80, WHITE);
  tft.setCursor(50, 410);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("Play Hangman!");
}

void Start_Page_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 380 && p.x < 460 && p.y > 20 && p.y < 300)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Page_Number = 1;
      Enter_Word_Page_Setup();
      delay(300);
    }
  }
}