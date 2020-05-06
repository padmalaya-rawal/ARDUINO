//Temperature controlled fan v2.0
/*Components used:
 * 1. Arduino nano
 * 2. LCD 1602 with I2C inerface
 * 3. DHT11 sensor
 * 4. BC547 transistor
 * 5. 1K resistor
 * 6. CPU fan
 * 7. 3 power supply - 5V
 * 8. Breadboard
 * 9. Jumper Wires
 * 10. IR sensor
 */

#include "DHT.h"                        
#include <LiquidCrystal_I2C.h>  
LiquidCrystal_I2C lcd(0x27,16,2);  
DHT dht(7, DHT11);

void setup() 
{
  pinMode(3, OUTPUT);
  lcd.begin(16,2);                   // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  lcd.init();       
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("  Temperature");
  lcd.setCursor(0,1);
  lcd.print("Controlled  FAN");
  delay(4000);
  lcd.noBacklight();
  lcd.clear();
  dht.begin();                       //initialzing dht module
}

void loop()
{
  float t = dht.readTemperature();

  if(t>32.10)
  {
    if(digitalRead(2)==LOW)
    {
      lcd.backlight();
      lcd.setCursor(0,0);        //it will set the cursor to (0,0) position of the LCD
      lcd.print("Temp: ");       //it will print Temp: on the LCD
      lcd.print(t);              //it will print temperature on the LCD
      lcd.print((char)223);      //it will print degree's symbol on the display & 223 is its ASCII value
      lcd.print("C");            //it will print C on the LCD
      digitalWrite(3, HIGH);
      delay(4000);
     }

     else 
     {
      lcd.noBacklight();
      lcd.setCursor(0,0);        //it will set the cursor to (0,0) position of the LCD
      lcd.print("Temp: ");       //it will print Temp: on the LCD
      lcd.print(t);              //it will print temperature on the LCD
      lcd.print((char)223);      //it will print degree's symbol on the display & 223 is its ASCII value
      lcd.print("C");            //it will print C on the LCD
      digitalWrite(3, HIGH);
     }
  }

  else 
  {
    if(digitalRead(2)==LOW)
    {
      lcd.backlight();
      lcd.setCursor(0,0);        //it will set the cursor to (0,0) position of the LCD
      lcd.print("Temp: ");       //it will print Temp: on the LCD
      lcd.print(t);              //it will print temperature on the LCD
      lcd.print((char)223);      //it will print degree's symbol on the display & 223 is its ASCII value
      lcd.print("C");            //it will print C on the LCD
      digitalWrite(3, LOW);
      delay(4000);
     }

     else 
     {
      lcd.noBacklight();
      lcd.setCursor(0,0);        //it will set the cursor to (0,0) position of the LCD
      lcd.print("Temp: ");       //it will print Temp: on the LCD
      lcd.print(t);              //it will print temperature on the LCD
      lcd.print((char)223);      //it will print degree's symbol on the display & 223 is its ASCII value
      lcd.print("C");            //it will print C on the LCD
      digitalWrite(3, LOW);
     }
  }
}
