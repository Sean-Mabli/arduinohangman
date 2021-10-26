void Final_Guess_Page_Setup() {
  tft.fillScreen(BLACK);
  tft.setCursor(0, 10);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println(Guessed_Word);
  if (A_Guessed == true) {
    tft.fillRect(0, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 180, 64, 50, WHITE);
  tft.setCursor(22, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("A");
  if (B_Guessed == true) {
    tft.fillRect(64, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(64, 180, 64, 50, WHITE);
  tft.setCursor(86, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("B");
  if (C_Guessed == true) {
    tft.fillRect(128, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(128, 180, 64, 50, WHITE);
  tft.setCursor(150, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("C");
  if (D_Guessed == true) {
    tft.fillRect(192, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(192, 180, 64, 50, WHITE);
  tft.setCursor(214, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("D");
  if (E_Guessed == true) {
    tft.fillRect(256, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(256, 180, 64, 50, WHITE);
  tft.setCursor(278, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("E");
  if (F_Guessed == true) {
    tft.fillRect(0, 230, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 230, 64, 50, WHITE);
  tft.setCursor(22, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("F");
  if (G_Guessed == true) {
    tft.fillRect(64, 230, 64, 50, LIGHTGREY);
  }
  tft.drawRect(64, 230, 64, 50, WHITE);
  tft.setCursor(86, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("G");
  if (H_Guessed == true) {
    tft.fillRect(128, 230, 64, 50, LIGHTGREY);
  }
  tft.drawRect(128, 230, 64, 50, WHITE);
  tft.setCursor(150, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("H");
  if (I_Guessed == true) {
    tft.fillRect(192, 230, 64, 50, LIGHTGREY);
  }
  tft.drawRect(192, 230, 64, 50, WHITE);
  tft.setCursor(214, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("I");
  if (J_Guessed == true) {
    tft.drawRect(256, 230, 64, 50, LIGHTGREY);
  }
  tft.drawRect(256, 230, 64, 50, WHITE);
  tft.setCursor(278, 240);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("J");
  if (K_Guessed == true) {
    tft.fillRect(0, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 280, 64, 50, WHITE);
  tft.setCursor(22, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("K");
  if (L_Guessed == true) {
    tft.fillRect(64, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(64, 280, 64, 50, WHITE);
  tft.setCursor(86, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("L");
  if (M_Guessed == true) {
    tft.fillRect(128, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(128, 280, 64, 50, WHITE);
  tft.setCursor(150, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("M");
  if (N_Guessed == true) {
    tft.fillRect(192, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(192, 280, 64, 50, WHITE);
  tft.setCursor(214, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("N");
  if (O_Guessed == true) {
    tft.fillRect(256, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(256, 280, 64, 50, WHITE);
  tft.setCursor(278, 290);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("O");
  if (P_Guessed == true) {
    tft.fillRect(0, 330, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 330, 64, 50, WHITE);
  tft.setCursor(22, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("P");
  if (Q_Guessed == true) {
    tft.fillRect(64, 330, 64, 50, LIGHTGREY);
  }
  tft.drawRect(64, 330, 64, 50, WHITE);
  tft.setCursor(86, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Q");
  if (R_Guessed == true) {
    tft.fillRect(128, 330, 64, 50, LIGHTGREY);
  }
  tft.drawRect(128, 330, 64, 50, WHITE);
  tft.setCursor(150, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("R");
  if (S_Guessed == true) {
    tft.fillRect(192, 330, 64, 50, LIGHTGREY);
  }
  tft.drawRect(192, 330, 64, 50, WHITE);
  tft.setCursor(214, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("S");
  if (T_Guessed == true) {
    tft.fillRect(256, 330, 64, 50, LIGHTGREY);
  }
  tft.drawRect(256, 330, 64, 50, WHITE);
  tft.setCursor(278, 340);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("T");
  if (U_Guessed == true) {
    tft.fillRect(0, 380, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 380, 64, 50, WHITE);
  tft.setCursor(22, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("U");
  if (V_Guessed == true) {
    tft.fillRect(64, 380, 64, 50, LIGHTGREY);
  }
  tft.drawRect(64, 380, 64, 50, WHITE);
  tft.setCursor(86, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("V");
  if (W_Guessed == true) {
    tft.fillRect(128, 280, 64, 50, LIGHTGREY);
  }
  tft.drawRect(128, 380, 64, 50, WHITE);
  tft.setCursor(150, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("W");
  if (X_Guessed == true) {
    tft.fillRect(192, 380, 64, 50, LIGHTGREY);
  }
  tft.drawRect(192, 380, 64, 50, WHITE);
  tft.setCursor(214, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("X");
  if (Y_Guessed == true) {
    tft.fillRect(256, 380, 64, 50, LIGHTGREY);
  }
  tft.drawRect(256, 380, 64, 50, WHITE);
  tft.setCursor(278, 390);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Y");
  if (Z_Guessed == true) {
    tft.fillRect(0, 430, 64, 50, LIGHTGREY);
  }
  tft.drawRect(0, 430, 64, 50, WHITE);
  tft.setCursor(22, 440);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Z");
  tft.drawRect(64, 430, 128, 50, WHITE);
  tft.setCursor(75, 445);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("DELETE");
  tft.drawRect(192, 430, 128, 50, WHITE);
  tft.setCursor(213, 445);
  tft.setTextColor(WHITE);
  tft.setTextSize(3);
  tft.println("ENTER");
  Last_Guessed_Word = Guessed_Word;
}

void Final_Guess_Page_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 180 && p.x < 230 && p.y > 0 && p.y < 64 && A_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "A" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 64 && p.y < 128 && B_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "B" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 128 && p.y < 192 && C_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "C" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 192 && p.y < 256 && D_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "D" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 180 && p.x < 230 && p.y > 256 && p.y < 320 && E_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "E" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 0 && p.y < 64 && F_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "F" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 64 && p.y < 128 && G_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "G" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 128 && p.y < 192 && H_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "H" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 192 && p.y < 256 && I_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "I" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 230 && p.x < 280 && p.y > 256 && p.y < 320 && J_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "J" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 0 && p.y < 64 && K_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "K" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 64 && p.y < 128 && L_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "L" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 128 && p.y < 192 && M_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "M" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 192 && p.y < 256 && N_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "N" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 280 && p.x < 330 && p.y > 256 && p.y < 320 && O_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "O" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 0 && p.y < 64 && P_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "P" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 64 && p.y < 128 && Q_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "Q" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 128 && p.y < 192 && R_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "R" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 192 && p.y < 256 && S_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "S" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 330 && p.x < 380 && p.y > 256 && p.y < 320 && T_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "T" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 0 && p.y < 64 && U_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "U" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 64 && p.y < 128 && V_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "V" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 128 && p.y < 192 && W_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "W" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 192 && p.y < 256 && X_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "X" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 380 && p.x < 430 && p.y > 256 && p.y < 320 && Y_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "Y" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 0 && p.y < 64 && Z_Guessed == false && Guessed_Word.indexOf("_") != -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Last_Guessed_Word = Guessed_Word;

      Guessed_Word = Guessed_Word.substring(0, Guessed_Word.indexOf("_")) + "Z" + Guessed_Word.substring(Guessed_Word.indexOf("_") + 1);

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 64 && p.y < 192)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Guessed_Word = Last_Guessed_Word;

      tft.fillRect(0, 0, 320, 180, BLACK);
      tft.setCursor(0, 10);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Guessed_Word);

      delay(300);
    }
    if (p.x > 430 && p.x < 480 && p.y > 192 && p.y < 320 && Guessed_Word.indexOf("_") == -1)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      if (Real_Word == Guessed_Word) {
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = 6;
        Page_Number = 3;
        Hangman_Display_Setup();
      }

      delay(300);
    }
  }
}