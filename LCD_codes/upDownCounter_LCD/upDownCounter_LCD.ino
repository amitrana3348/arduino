#include <LiquidCrystal.h>
int sw1 = A0;
int sw2 = A1;
const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() 
{
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("Up-Down Counter");
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
}
int count = 0;
void loop() 
{
  if(digitalRead(sw1) == LOW)
  {
      count++;                // increment count
      lcd.setCursor(0,1);   // set cursor position
      lcd.print(count);   // print count value
      lcd.print("  ");  // print 2 additional Spaces 
      delay(500);     // debounce delay
  }
  if(digitalRead(sw2) == LOW)
  {
      count--;                // decrement count
      lcd.setCursor(0,1);   // set cursor position
      lcd.print(count);   // print count value
      lcd.print("  ");  // print 2 additional Spaces 
      delay(500);     // debounce delay
  }
}
