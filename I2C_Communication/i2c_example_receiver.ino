#include <LiquidCrystal.h> // Library for the LCD screen
#include <Wire.h> // Library for I2C

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2); //Pins used with the LCD display.

void setup()
{
  Wire.begin(8);
  Wire.onReceive(receiveEvent); // receiveEvent = ISR
  lcd_1.begin(16, 2); // Set up the number of columns and rows on the LCD.

  // Print a message to the LCD.
  lcd_1.print("Button pressed:");
}

void loop()
{	
  
  delay(50);
  
}

void receiveEvent(int dataSize){
 
  while(Wire.available()){
    char c = Wire.read();
  	// set the cursor to column 0, line 1
  	// (note: line 1 is the second row, since counting
  	// begins with 0):
  	lcd_1.setCursor(0, 1);
  	// print the number of seconds since reset:
  	lcd_1.print(c);
    lcd_1.setCursor(2,1);
    if (c!=49){
      lcd_1.print("times");
  	}
    else{
      lcd_1.print("time  ");
    }
  }
  
  
}
