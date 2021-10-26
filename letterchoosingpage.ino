void Letter_Choosing_Page_Setup() {
  tft.fillScreen(BLACK);
  tft.setCursor(5, 10);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Guess Letter:");
  tft.drawRect(5, 50, 310, 2, WHITE);
  if (A_Guessed == true) {
    tft.fillRect(12.8, 60, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 60, 64, 50, WHITE);
  tft.setCursor(34.8, 70);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("A");
  if (B_Guessed == true) {
    tft.fillRect(89.6, 60, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 60, 64, 50, WHITE);
  tft.setCursor(111.6, 70);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("B");
  if (C_Guessed == true) {
    tft.fillRect(166.4, 60, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 60, 64, 50, WHITE);
  tft.setCursor(188.4, 70);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("C");
  if (D_Guessed == true) {
    tft.fillRect(243.2, 60, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 60, 64, 50, WHITE);
  tft.setCursor(265.2, 70);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("D");
  if (E_Guessed == true) {
    tft.fillRect(12.8, 120, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 120, 64, 50, WHITE);
  tft.setCursor(34.8, 130);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("E");
  if (F_Guessed == true) {
    tft.fillRect(89.6, 120, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 120, 64, 50, WHITE);
  tft.setCursor(111.6, 130);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("F");
  if (G_Guessed == true) {
    tft.fillRect(166.4, 120, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 120, 64, 50, WHITE);
  tft.setCursor(188.4, 130);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("G");
  if (H_Guessed == true) {
    tft.fillRect(243.2, 120, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 120, 64, 50, WHITE);
  tft.setCursor(265.2, 130);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("H");
  if (I_Guessed == true) {
    tft.fillRect(12.8, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 180, 64, 50, WHITE);
  tft.setCursor(34.8, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("I");
  if (J_Guessed == true) {
    tft.fillRect(89.6, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 180, 64, 50, WHITE);
  tft.setCursor(111.6, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("J");
  if (K_Guessed == true) {
    tft.fillRect(166.4, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 180, 64, 50, WHITE);
  tft.setCursor(188.4, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("K");
  if (L_Guessed == true) {
    tft.fillRect(243.2, 180, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 180, 64, 50, WHITE);
  tft.setCursor(265.2, 190);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("L");
  if (M_Guessed == true) {
    tft.fillRect(12.8, 240, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 240, 64, 50, WHITE);
  tft.setCursor(34.8, 250);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("M");
  if (N_Guessed == true) {
    tft.fillRect(89.6, 240, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 240, 64, 50, WHITE);
  tft.setCursor(111.6, 250);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("N");
  if (O_Guessed == true) {
    tft.fillRect(166.4, 240, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 240, 64, 50, WHITE);
  tft.setCursor(188.4, 250);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("O");
  if (P_Guessed == true) {
    tft.fillRect(243.2, 240, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 240, 64, 50, WHITE);
  tft.setCursor(265.2, 250);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("P");
  if (Q_Guessed == true) {
    tft.fillRect(12.8, 300, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 300, 64, 50, WHITE);
  tft.setCursor(34.8, 310);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Q");
  if (R_Guessed == true) {
    tft.fillRect(89.6, 300, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 300, 64, 50, WHITE);
  tft.setCursor(111.6, 310);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("R");
  if (S_Guessed == true) {
    tft.fillRect(166.4, 300, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 300, 64, 50, WHITE);
  tft.setCursor(188.4, 310);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("S");
  if (T_Guessed == true) {
    tft.fillRect(243.2, 300, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 300, 64, 50, WHITE);
  tft.setCursor(265.2, 310);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("T");
  if (U_Guessed == true) {
    tft.fillRect(12.8, 360, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 360, 64, 50, WHITE);
  tft.setCursor(34.8, 370);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("U");
  if (V_Guessed == true) {
    tft.fillRect(89.6, 360, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 360, 64, 50, WHITE);
  tft.setCursor(111.6, 370);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("V");
  if (W_Guessed == true) {
    tft.fillRect(166.4, 360, 64, 50, LIGHTGREY);
  }
  tft.drawRect(166.4, 360, 64, 50, WHITE);
  tft.setCursor(188.4, 370);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("W");
  if (X_Guessed == true) {
    tft.fillRect(243.2, 360, 64, 50, LIGHTGREY);
  }
  tft.drawRect(243.2, 360, 64, 50, WHITE);
  tft.setCursor(265.2, 370);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("X");
  if (Y_Guessed == true) {
    tft.fillRect(12.8, 420, 64, 50, LIGHTGREY);
  }
  tft.drawRect(12.8, 420, 64, 50, WHITE);
  tft.setCursor(34.8, 430);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Y");
  if (Z_Guessed == true) {
    tft.fillRect(89.6, 420, 64, 50, LIGHTGREY);
  }
  tft.drawRect(89.6, 420, 64, 50, WHITE);
  tft.setCursor(111.6, 430);
  tft.setTextColor(WHITE);
  tft.setTextSize(4);
  tft.println("Z");
  tft.drawRect(166.4, 420, 140.8, 50, WHITE);
  tft.setCursor(175.4, 438);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);
  tft.println("Guess Word");
}

void Letter_Choosing_Page_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 60 && p.x < 110 && p.y > 12.8 && p.y < 76.8 && A_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      A_Guessed = true;
      Letter_Pressed = "A";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 60 && p.x < 110 && p.y > 89.6 && p.y < 153.6 && B_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      B_Guessed = true;
      Letter_Pressed = "B";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 60 && p.x < 110 && p.y > 166.4 && p.y < 230.4 && C_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      C_Guessed = true;
      Letter_Pressed = "C";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 60 && p.x < 110 && p.y > 243.2 && p.y < 307.2 && D_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      D_Guessed = true;
      Letter_Pressed = "D";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 120 && p.x < 170 && p.y > 12.8 && p.y < 76.8 && E_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      E_Guessed = true;
      Letter_Pressed = "E";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 120 && p.x < 170 && p.y > 89.6 && p.y < 153.6 && F_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      F_Guessed = true;
      Letter_Pressed = "F";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 120 && p.x < 170 && p.y > 166.4 && p.y < 230.4 && G_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      G_Guessed = true;
      Letter_Pressed = "G";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 120 && p.x < 170 && p.y > 243.2 && p.y < 307.2 && H_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      H_Guessed = true;
      Letter_Pressed = "H";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 180 && p.x < 230 && p.y > 12.8 && p.y < 76.8 && I_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      I_Guessed = true;
      Letter_Pressed = "I";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 180 && p.x < 230 && p.y > 89.6 && p.y < 153.6 && J_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      J_Guessed = true;
      Letter_Pressed = "J";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 180 && p.x < 230 && p.y > 166.4 && p.y < 230.4 && K_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      K_Guessed = true;
      Letter_Pressed = "K";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 180 && p.x < 230 && p.y > 243.2 && p.y < 307.2 && L_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      L_Guessed = true;
      Letter_Pressed = "L";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 240 && p.x < 290 && p.y > 12.8 && p.y < 76.8 && M_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      M_Guessed = true;
      Letter_Pressed = "M";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 240 && p.x < 290 && p.y > 89.6 && p.y < 153.6 && N_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      N_Guessed = true;
      Letter_Pressed = "N";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 240 && p.x < 290 && p.y > 166.4 && p.y < 230.4 && O_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      O_Guessed = true;
      Letter_Pressed = "O";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 240 && p.x < 290 && p.y > 243.2 && p.y < 307.2 && P_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      P_Guessed = true;
      Letter_Pressed = "P";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 300 && p.x < 350 && p.y > 12.8 && p.y < 76.8 && Q_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Q_Guessed = true;
      Letter_Pressed = "Q";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 300 && p.x < 350 && p.y > 89.6 && p.y < 153.6 && R_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      R_Guessed = true;
      Letter_Pressed = "R";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 300 && p.x < 350 && p.y > 166.4 && p.y < 230.4 && S_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      S_Guessed = true;
      Letter_Pressed = "S";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 300 && p.x < 350 && p.y > 243.2 && p.y < 307.2 && T_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      T_Guessed = true;
      Letter_Pressed = "T";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 360 && p.x < 410 && p.y > 12.8 && p.y < 76.8 && U_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      U_Guessed = true;
      Letter_Pressed = "U";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 360 && p.x < 410 && p.y > 89.6 && p.y < 153.6 && V_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      V_Guessed = true;
      Letter_Pressed = "V";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 360 && p.x < 410 && p.y > 166.4 && p.y < 230.4 && W_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      W_Guessed = true;
      Letter_Pressed = "W";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 360 && p.x < 410 && p.y > 243.2 && p.y < 307.2 && X_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      X_Guessed = true;
      Letter_Pressed = "X";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 420 && p.x < 470 && p.y > 12.8 && p.y < 76.8 && Y_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Y_Guessed = true;
      Letter_Pressed = "Y";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 420 && p.x < 470 && p.y > 89.6 && p.y < 153.6 && Z_Guessed == false)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Z_Guessed = true;
      Letter_Pressed = "Z";

      if (Real_Word.indexOf(Letter_Pressed) != -1) {
        Last_Character_Checked = 0;
        do {
          Guessed_Word = Guessed_Word.substring(0, Real_Word.indexOf(Letter_Pressed, Last_Character_Checked)) + Letter_Pressed + Guessed_Word.substring(Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1);
          Last_Character_Checked = Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) + 1;
        } while (Real_Word.indexOf(Letter_Pressed, Last_Character_Checked) != -1);
        Page_Number = 4;
        Word_Display_Page_Setup();
      }
      else {
        Limb_Number = Limb_Number + 1;
        Page_Number = 3;
        Hangman_Display_Setup();
      }
      delay(300);
    }

    if (p.x > 420 && p.x < 470 && p.y > 166.4 && p.y < 307.2)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);

      Page_Number = 5;
      Final_Guess_Page_Setup();

      delay(300);
    }
  }
}