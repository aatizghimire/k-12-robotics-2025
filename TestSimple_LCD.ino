#include<LiquidCrystal_I2C.h>
#include<Wire.h>
LiquidCrystal_I2C lcd(0x27,20,4);
void setup() {
 
lcd.init();
lcd.backlight();
}

void loop() {
  
lcd.clear();
lcd.setCursor(10,2);
lcd.print("Welcome");
}
