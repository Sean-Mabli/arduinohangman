void Hangman_Display_Setup() {
  if (Limb_Number == 1) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    tft.drawRect(240, 40, 64, 50, WHITE);
    tft.setCursor(262, 50);
    tft.setTextColor(WHITE);
    tft.setTextSize(4);
    tft.println(Letter_Pressed);
    tft.drawLine(229, 30, 313, 100, WHITE);
    tft.drawLine(230, 30, 314, 100, WHITE);
    tft.drawLine(231, 30, 315, 100, WHITE);
    tft.drawLine(313, 30, 229, 100, WHITE);
    tft.drawLine(314, 30, 230, 100, WHITE);
    tft.drawLine(315, 30, 231, 100, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(35, 412);
    tft.setTextColor(WHITE);
    tft.setTextSize(2);
    tft.println("Choose Another Letter");
  }

  if (Limb_Number == 2) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    tft.drawRect(240, 40, 64, 50, WHITE);
    tft.setCursor(262, 50);
    tft.setTextColor(WHITE);
    tft.setTextSize(4);
    tft.println(Letter_Pressed);
    tft.drawLine(229, 30, 313, 100, WHITE);
    tft.drawLine(230, 30, 314, 100, WHITE);
    tft.drawLine(231, 30, 315, 100, WHITE);
    tft.drawLine(313, 30, 229, 100, WHITE);
    tft.drawLine(314, 30, 230, 100, WHITE);
    tft.drawLine(315, 30, 231, 100, WHITE);

    tft.drawLine(160, 120, 160, 280, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(35, 412);
    tft.setTextColor(WHITE);
    tft.setTextSize(2);
    tft.println("Choose Another Letter");
  }

  if (Limb_Number == 3) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    tft.drawRect(240, 40, 64, 50, WHITE);
    tft.setCursor(262, 50);
    tft.setTextColor(WHITE);
    tft.setTextSize(4);
    tft.println(Letter_Pressed);
    tft.drawLine(229, 30, 313, 100, WHITE);
    tft.drawLine(230, 30, 314, 100, WHITE);
    tft.drawLine(231, 30, 315, 100, WHITE);
    tft.drawLine(313, 30, 229, 100, WHITE);
    tft.drawLine(314, 30, 230, 100, WHITE);
    tft.drawLine(315, 30, 231, 100, WHITE);

    tft.drawLine(160, 120, 160, 280, WHITE);
    tft.drawLine(160, 200, 100, 140, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(35, 412);
    tft.setTextColor(WHITE);
    tft.setTextSize(2);
    tft.println("Choose Another Letter");
  }

  if (Limb_Number == 4) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    tft.drawRect(240, 40, 64, 50, WHITE);
    tft.setCursor(262, 50);
    tft.setTextColor(WHITE);
    tft.setTextSize(4);
    tft.println(Letter_Pressed);
    tft.drawLine(229, 30, 313, 100, WHITE);
    tft.drawLine(230, 30, 314, 100, WHITE);
    tft.drawLine(231, 30, 315, 100, WHITE);
    tft.drawLine(313, 30, 229, 100, WHITE);
    tft.drawLine(314, 30, 230, 100, WHITE);
    tft.drawLine(315, 30, 231, 100, WHITE);

    tft.drawLine(160, 120, 160, 280, WHITE);
    tft.drawLine(160, 200, 100, 140, WHITE);
    tft.drawLine(160, 200, 220, 140, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(35, 412);
    tft.setTextColor(WHITE);
    tft.setTextSize(2);
    tft.println("Choose Another Letter");
  }

  if (Limb_Number == 5) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    tft.drawRect(240, 40, 64, 50, WHITE);
    tft.setCursor(262, 50);
    tft.setTextColor(WHITE);
    tft.setTextSize(4);
    tft.println(Letter_Pressed);
    tft.drawLine(229, 30, 313, 100, WHITE);
    tft.drawLine(230, 30, 314, 100, WHITE);
    tft.drawLine(231, 30, 315, 100, WHITE);
    tft.drawLine(313, 30, 229, 100, WHITE);
    tft.drawLine(314, 30, 230, 100, WHITE);
    tft.drawLine(315, 30, 231, 100, WHITE);

    tft.drawLine(160, 120, 160, 280, WHITE);
    tft.drawLine(160, 200, 100, 140, WHITE);
    tft.drawLine(160, 200, 220, 140, WHITE);
    tft.drawLine(160, 280, 100, 340, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(35, 412);
    tft.setTextColor(WHITE);
    tft.setTextSize(2);
    tft.println("Choose Another Letter");
  }

  if (Limb_Number == 6) {
    tft.fillScreen(BLACK);
    tft.drawCircle(160, 70, 50, WHITE);
    tft.fillCircle(140, 50, 5, WHITE);
    tft.fillCircle(180, 50, 5, WHITE);
    tft.drawLine(140, 80, 180, 80, WHITE);
    tft.drawLine(140, 81, 180, 81, WHITE);
    tft.drawLine(140, 82, 180, 82, WHITE);

    if (Guessed_Word.indexOf("_") != -1) {
      tft.drawRect(240, 40, 64, 50, WHITE);
      tft.setCursor(262, 50);
      tft.setTextColor(WHITE);
      tft.setTextSize(4);
      tft.println(Letter_Pressed);

      tft.drawLine(229, 30, 313, 100, WHITE);
      tft.drawLine(230, 30, 314, 100, WHITE);
      tft.drawLine(231, 30, 315, 100, WHITE);
      tft.drawLine(313, 30, 229, 100, WHITE);
      tft.drawLine(314, 30, 230, 100, WHITE);
      tft.drawLine(315, 30, 231, 100, WHITE);
    }

    tft.drawLine(160, 120, 160, 280, WHITE);
    tft.drawLine(160, 200, 100, 140, WHITE);
    tft.drawLine(160, 200, 220, 140, WHITE);
    tft.drawLine(160, 280, 100, 340, WHITE);
    tft.drawLine(160, 280, 220, 340, WHITE);

    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(70, 410);
    tft.setTextColor(WHITE);
    tft.setTextSize(3);
    tft.println("Play Again");
  }
}

void Hangman_Display_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 380 && p.x < 460 && p.y > 20 && p.y < 300 && Limb_Number != 6)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Page_Number = 2;
      Letter_Choosing_Page_Setup();

      delay(300);
    }
    if (p.x > 380 && p.x < 460 && p.y > 20 && p.y < 300 && Limb_Number == 6)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Start_Page_Setup();

      Page_Number = 0;
      Limb_Number = 0;
      Real_Word = "";
      Guessed_Word = "";
      Letter_Pressed = "";
      Last_Character_Checked = "";
      A_Guessed = false;
      B_Guessed = false;
      C_Guessed = false;
      D_Guessed = false;
      E_Guessed = false;
      F_Guessed = false;
      G_Guessed = false;
      H_Guessed = false;
      I_Guessed = false;
      J_Guessed = false;
      K_Guessed = false;
      L_Guessed = false;
      M_Guessed = false;
      N_Guessed = false;
      O_Guessed = false;
      P_Guessed = false;
      Q_Guessed = false;
      R_Guessed = false;
      S_Guessed = false;
      T_Guessed = false;
      U_Guessed = false;
      V_Guessed = false;
      W_Guessed = false;
      X_Guessed = false;
      Y_Guessed = false;
      Z_Guessed = false;

      delay(300);
    }
  }
}