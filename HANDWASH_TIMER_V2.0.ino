int ir=10;
void setup()
{
  pinMode(ir, INPUT_PULLUP);
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() 
{
  if(digitalRead(10)==LOW)   //an ir sensor is connected to pin 10 
  {
    for(int i=0; i<=9; i++)
    {
      digitalWrite(i, HIGH);
      delay(1000);
    }

    for(int i=9; i>=0; i--)
    {
      digitalWrite(i, LOW);
      delay(1000);
    }
  }
}
