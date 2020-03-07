#include "Adafruit_Keypad.h"
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,20,4); 

const byte ROWS = 4; 
const byte COLS = 4; 
char keys[ROWS][COLS] = 
{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {2,3,4,5};
byte colPins[COLS] = {6,7,8,9}; 

Adafruit_Keypad customKeypad = Adafruit_Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup()
{
  lcd.setCursor(0,0);
  delay(4000);
  lcd.print("PR ROBOTICS");
  Serial.begin(115200);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);  
  pinMode(13, OUTPUT);  
  customKeypad.begin();
  lcd.begin(16,2);
  lcd.init();     
  lcd.backlight();  
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH); 
  digitalWrite(13, HIGH);         
}

void loop() 
{
  customKeypad.tick();
  while(customKeypad.available())
  {
    keypadEvent e = customKeypad.read();
    delay(100);
    
  if((char)e.bit.KEY == '1')
  {
      digitalWrite(10, LOW);
      Serial.println("RELAY 1 IS ON");
      lcd.println("RELAY 1 IS ON ");
  }
  
  else if((char)e.bit.KEY == '2')
  {
      digitalWrite(10, HIGH);
      Serial.println("RELAY 1 IS OFF");
      lcd.println("RELAY 1 IS OFF");     
  }
     
  else if((char)e.bit.KEY == '3')
  {
      digitalWrite(11, LOW);
      Serial.println("RELAY 2 IS ON");
      lcd.println("RELAY 2 IS ON");
  }
     
  else if((char)e.bit.KEY == 'A')
  {
      digitalWrite(11, HIGH);
      Serial.println("RELAY 2 IS OFF");
      lcd.println("RELAY 2 IS OFF");
  }
  
  else if((char)e.bit.KEY == '4')
  {
      digitalWrite(12, LOW);
      Serial.println("RELAY 3 IS ON");
      lcd.println("RELAY 3 IS ON");
  }

  else if((char)e.bit.KEY == '5')
  {
      digitalWrite(12, HIGH);
      Serial.println("RELAY 3 IS OFF");
      lcd.setCursor(0,0);
      lcd.println("RELAY 3 IS OFF");
  } 
                  
  else if((char)e.bit.KEY == '6')
  {
      digitalWrite(13, LOW);     
      Serial.println("RELAY 4 IS ON");
      lcd.println("RELAY 4 IS ON");       
  }
      
  else if((char)e.bit.KEY == 'B')
  {
      digitalWrite(13, HIGH);
      Serial.println("RELAY 4 IS OFF");
      lcd.println("RELAY 4 IS OFF");
  }
 }
}
