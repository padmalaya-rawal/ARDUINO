//Temperature controlled fan

/*Components used:
 * 1. Arduino nano
 * 2. LCD 1602 with I2C inerface
 * 3. DHT11 sensor
 * 4. BC547 transistor
 * 5. 1K resistor
 * 6. CPU fan
 * 7. 2 power supply - 5V
 * 8. Breadboard
 * 9. Jumper Wires
 */

#include "DHT.h"                        
#include <LiquidCrystal_I2C.h>  
LiquidCrystal_I2C lcd(0x27,20,4);  
DHT dht(7, DHT11);

void setup() 
{
  pinMode(3, OUTPUT);
  lcd.begin(16,2);                   // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  lcd.init();       
  lcd.backlight();                   //to turn on backlight of LCD display
  lcd.setCursor(0,0);
  lcd.print("  Temperature");
  lcd.setCursor(0,1);
  lcd.print("Controlled  FAN");
  delay(4000);
  lcd.clear();
  dht.begin();                       //initialzing dht module
}

void loop()
{
  delay(1000);
  float t = dht.readTemperature();

  lcd.setCursor(0,0);        //it will set the cursor to (0,0) position of the LCD
  lcd.print("Temp: ");       //it will print Temp: on the LCD
  lcd.print(t);              //it will print temperature on the LCD
  lcd.print((char)223);      //it will print degree's symbol on the display & 223 is its ASCII value
  lcd.print("C");            //it will print C on the LCD

  if(t>34.10)
  {
    digitalWrite(3, HIGH);
  }

  else 
  {
    digitalWrite(3, LOW);
  }
}
