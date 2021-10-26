void Enter_Word_Page_Setup() {
  tft.fillScreen(BLACK);
  tft.setCursor(30, 10);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Enter Word:");
  tft.drawRect(20, 50, 280, 2, WHITE);
  tft.drawRect(0, 180, 64, 50, WHITE);
  tft.setCursor(22, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("A");
  tft.drawRect(64, 180, 64, 50, WHITE);
  tft.setCursor(86, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("B");
  tft.drawRect(128, 180, 64, 50, WHITE);
  tft.setCursor(150, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("C");
  tft.drawRect(192, 180, 64, 50, WHITE);
  tft.setCursor(214, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("D");
  tft.drawRect(256, 180, 64, 50, WHITE);
  tft.setCursor(278, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("E");
  tft.drawRect(0, 230, 64, 50, WHITE);
  tft.setCursor(22, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("F");
  tft.drawRect(64, 230, 64, 50, WHITE);
  tft.setCursor(86, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("G");
  tft.drawRect(128, 230, 64, 50, WHITE);
  tft.setCursor(150, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("H");
  tft.drawRect(192, 230, 64, 50, WHITE);
  tft.setCursor(214, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("I");
  tft.drawRect(256, 230, 64, 50, WHITE);
  tft.setCursor(278, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("J");
  tft.drawRect(0, 280, 64, 50, WHITE);
  tft.setCursor(22, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("K");
  tft.drawRect(64, 280, 64, 50, WHITE);
  tft.setCursor(86, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("L");
  tft.drawRect(128, 280, 64, 50, WHITE);
  tft.setCursor(150, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("M");
  tft.drawRect(192, 280, 64, 50, WHITE);
  tft.setCursor(214, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("N");
  tft.drawRect(256, 280, 64, 50, WHITE);
  tft.setCursor(278, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("O");
  tft.drawRect(0, 330, 64, 50, WHITE);
  tft.setCursor(22, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("P");
  tft.drawRect(64, 330, 64, 50, WHITE);
  tft.setCursor(86, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Q");
  tft.drawRect(128, 330, 64, 50, WHITE);
  tft.setCursor(150, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("R");
  tft.drawRect(192, 330, 64, 50, WHITE);
  tft.setCursor(214, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("S");
  tft.drawRect(256, 330, 64, 50, WHITE);
  tft.setCursor(278, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("T");
  tft.drawRect(0, 380, 64, 50, WHITE);
  tft.setCursor(22, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("U");
  tft.drawRect(64, 380, 64, 50, WHITE);
  tft.setCursor(86, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("V");
  tft.drawRect(128, 380, 64, 50, WHITE);
  tft.setCursor(150, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("W");
  tft.drawRect(192, 380, 64, 50, WHITE);
  tft.setCursor(214, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("X");
  tft.drawRect(256, 380, 64, 50, WHITE);
  tft.setCursor(278, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Y");
  tft.drawRect(0, 430, 64, 50, WHITE);
  tft.setCursor(22, 440);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Z");
  tft.drawRect(64, 430, 64, 50, WHITE);
  tft.setCursor(80, 448);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("DEL");
  tft.drawRect(128, 430, 128, 50, WHITE);
  tft.setCursor(147 , 445);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("SPACE");
  tft.drawRect(256, 430, 64, 50, WHITE);
  tft.setCursor(265, 448);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("NEXT");
}

void Enter_Word_Page_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 180 && p.x < 230 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "A";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "B";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 128 && p.y < 192 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "C";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 192 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "D";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 256 && p.y < 320 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "E";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "F";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "G";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 128 && p.y < 192 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "H";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 192 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "I";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 256 && p.y < 320 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "J";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "K";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "L";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 128 && p.y < 192 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "M";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 192 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "N";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 256 && p.y < 320 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "O";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "P";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "Q";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 128 && p.y < 192 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "R";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 192 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "S";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 256 && p.y < 320 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "T";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "U";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "V";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 128 && p.y < 192 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "W";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 192 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "X";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 256 && p.y < 320 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "Y";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 0 && p.y < 64 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + "Z";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 64 && p.y < 128 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      tft.setCursor(0, 60);
      tft.setTextColor(BLACK );
      tft.setTextSize(4);
      tft.println(Real_Word);
      Real_Word.remove(Real_Word.length() - 1);
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);

    }
    if (p.x > 430 && p.x < 480 && p.y > 128 && p.y < 256 && Real_Word.length() < 39)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Real_Word = Real_Word + " ";
      tft.setCursor(0, 60);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Real_Word);
      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 256 && p.y < 320)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      while (Real_Word.length() != Guessed_Word.length()) {
        Guessed_Word = Guessed_Word + "_";
      }

      Letter_Pressed = " ";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
      }

      Page_Number = 2;
      Letter_Choosing_Page_Setup();

      delay(300);
    }
  }
}