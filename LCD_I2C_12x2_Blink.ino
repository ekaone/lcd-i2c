#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4); //Change to (0x27,16,2) for 16x2 LCD.

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.print("Blink Cursor!");
}
void loop(){
  lcd.blink();
  delay(5000);
  lcd.noBlink();
  delay(2000);
}
