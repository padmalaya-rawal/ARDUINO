int led= A1;
int btn= A0;
int loadstate=LOW;
int state=LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

void loop() 
{
  if(state ==HIGH && digitalRead(power_btn) ==LOW)
  {
    state = LOW;
    loadstate=!loadstate;
    delay(30);
  }

  if(state==LOW && digitalRead(power_btn) ==HIGH)
  {
    state=HIGH;
    delay(30);
  }
 
  if(loadstate==HIGH)
    digitalWrite(power_led, HIGH);

  else 
    digitalWrite(power_led, LOW);
}
