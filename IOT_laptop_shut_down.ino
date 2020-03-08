#include <Keyboard.h>
int sd=8;
int st=7;

void setup() 
{   
  pinMode(sd, INPUT_PULLUP); 
  pinMode(st, INPUT_PULLUP);
  Serial.begin(9600); 
  Keyboard.begin();  
}

void loop()   

{

  digitalWrite(sd, HIGH);
  if(digitalRead(sd)== LOW)
    {
      Keyboard.press(128);
      Keyboard.press(177);
      delay(100);
      
      Keyboard.releaseAll();

      Keyboard.press(179);
      delay(100);
      Keyboard.release(179);
      delay(100);
      
      delay(100);
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);      
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);
      
      Keyboard.press(176);
      delay(100);
      Keyboard.release(176);
      delay(100);
      
      Keyboard.press(217);
      delay(100);
      Keyboard.release(217);
      delay(100);
      
      Keyboard.press(176);
      delay(100);
      Keyboard.release(176);
      delay(100);
    }
    
    else if(st= LOW)
    {
      
    }
}
