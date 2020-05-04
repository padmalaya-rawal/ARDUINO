int redLed = 10;
int blueLed = 11;
int buzzer = 9;
int red_ontime = 150;
int blue_ontime = 150;
int red_offtime = 150;
int blue_offtime = 150;

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(int i=1; i<=5; i++)
  {
    digitalWrite(redLed, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(red_ontime);
    digitalWrite(redLed, LOW);
    digitalWrite(buzzer, LOW);  
    delay(red_offtime);
    digitalWrite(blueLed, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(blue_ontime);
    digitalWrite(blueLed, LOW);
    digitalWrite(buzzer, LOW);
    delay(blue_offtime);
    }
 
 
 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 15ś)
 {
    analogWrite(redLed, fadeValue);
    analogWrite(buzzer, fadeValue);
    digitalWrite(blueLed, LOW);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 15)
  {
    analogWrite(redLed, fadeValue);
    analogWrite(buzzer, fadeValue);
    digitalWrite(blueLed, LOW);
    delay(30);
  } 

  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 15)
  {
    analogWrite(blueLed, fadeValue);
    analogWrite(buzzer, fadeValue);
    digitalWrite(redLed, LOW);
    delay(30);
  }

  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 15)
  {
    analogWrite(blueLed, fadeValue);
    analogWrite(buzzer, fadeValue);
    digitalWrite(redLed, LOW);
    delay(30);
  } 
}
