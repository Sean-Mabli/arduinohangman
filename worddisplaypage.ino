void Word_Display_Page_Setup() {
  tft.fillScreen(BLACK);
  tft.setCursor(0, 10);
  tft.setTextColor(WHITE);
  tft.setTextSize(5);
  tft.println(Guessed_Word);
  if (Real_Word != Guessed_Word) {
    tft.drawRect(20, 270, 280, 80, WHITE);
    tft.setCursor(63, 300);
    tft.setTextColor(WHITE);
    tft.setTextSize(3);
    tft.println("Guess Again");
    tft.drawRect(20, 380, 280, 80, WHITE);
    tft.setCursor(72, 410);
    tft.setTextColor(WHITE);
    tft.setTextSize(3);
    tft.println("Guess Word");
  }
  else {
    tft.drawRect(20, 270, 280, 190, WHITE);
    tft.setCursor(90, 300);
    tft.setTextColor(WHITE);
    tft.setTextSize(8);
    tft.println("You");
    tft.setCursor(90, 380);
    tft.setTextColor(WHITE);
    tft.setTextSize(8); 
    tft.println("Won");
    delay(10000);

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
  }
}

void Word_Display_Page_Run() {
  TSPoint p = ts.getPoint();

  if (p.z > MINPRESSURE && p.z < MAXPRESSURE)
  {
    p.x = map(p.x, TS_MAXX, TS_MINX, 480, 0);
    p.y = map(p.y, TS_MAXY, TS_MINY, 0, 320);

    if (p.x > 270 && p.x < 350 && p.y > 20 && p.y < 300 && Real_Word != Guessed_Word)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Page_Number = 2;
      Letter_Choosing_Page_Setup();
      delay(300);
    }

    if (p.x > 380 && p.x < 460 && p.y > 20 && p.y < 300 && Real_Word != Guessed_Word)
    {
      pinMode(XM, OUTPUT);
      pinMode(YP, OUTPUT);
      Page_Number = 5;
      Final_Guess_Page_Setup();
      delay(300);
    }
  }
}