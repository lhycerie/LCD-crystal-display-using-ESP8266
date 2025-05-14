// Made by lhycerie

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); //Set 0x27 for LCD Address with 16 chars x 2 line display

void setup() {
  lcd.init();      // Starts LCD
  lcd.backlight(); // Light on for backlight
  lcd.clear();     // Clear screen
}

void loop() {
  lcd.setCursor(0, 0);   // Insert text for first line 
  lcd.print("Hello!");
  
  lcd.setCursor(0, 1);  // Insert text for second line 
  lcd.print("I'm lhycerie!");

  delay(2000); // 2 seconds delay
}
