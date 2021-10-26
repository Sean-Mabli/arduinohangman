#include <Adafruit_GFX.h>
#include <Adafruit_TFTLCD.h>
#include <TouchScreen.h>

#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4

#define BLACK       0x0000
#define WHITE       0xFFFF
#define LIGHTGREY   0xC618

#define YP A2
#define XM A3
#define YM 8
#define XP 9

#define TS_MINX 130
#define TS_MAXX 905

#define TS_MINY 75
#define TS_MAXY 930

#define STATUS_X 10
#define STATUS_Y 65

#include <MCUFRIEND_kbv.h>
MCUFRIEND_kbv tft;
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

int Page_Number = 0;
int Limb_Number = 0;
String Real_Word;
String Guessed_Word;
String Last_Guessed_Word;
String Letter_Pressed;
int Last_Character_Checked;
bool A_Guessed = false;
bool B_Guessed = false;
bool C_Guessed = false;
bool D_Guessed = false;
bool E_Guessed = false;
bool F_Guessed = false;
bool G_Guessed = false;
bool H_Guessed = false;
bool I_Guessed = false;
bool J_Guessed = false;
bool K_Guessed = false;
bool L_Guessed = false;
bool M_Guessed = false;
bool N_Guessed = false;
bool O_Guessed = false;
bool P_Guessed = false;
bool Q_Guessed = false;
bool R_Guessed = false;
bool S_Guessed = false;
bool T_Guessed = false;
bool U_Guessed = false;
bool V_Guessed = false;
bool W_Guessed = false;
bool X_Guessed = false;
bool Y_Guessed = false;
bool Z_Guessed = false;

void setup() {
  Serial.begin(9600);

  tft.reset();
  uint16_t identifier = tft.readID();
  tft.begin(identifier);
  tft.setRotation(0);

  Start_Page_Setup();
}

#define MINPRESSURE 10
#define MAXPRESSURE 1000


void loop() {
  if (Page_Number == 0) {
    Start_Page_Run();
  }
  if (Page_Number == 1) {
    Enter_Word_Page_Run();
  }
  if (Page_Number == 2) {
    Letter_Choosing_Page_Run();
  }
  if (Page_Number == 3) {
    Hangman_Display_Run();
  }
  if (Page_Number == 4) {
    Word_Display_Page_Run();
  }
  if (Page_Number == 5) {
    Final_Guess_Page_Run();
  }
}