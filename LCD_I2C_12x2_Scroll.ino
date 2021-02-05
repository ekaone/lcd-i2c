#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4); //Change to (0x27,16,2) for 16x2 LCD.

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.print("Scroll Left");
}
void loop(){
  lcd.scrollDisplayLeft();
  delay(500);
}
