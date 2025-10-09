#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

int counter = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello, World!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print("Counter: ");
  lcd.print(counter);
  counter++;
  delay(1000);
}