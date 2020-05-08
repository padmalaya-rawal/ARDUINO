int ir=10;
int l1=0;
int l2=1;
int l3=2;
int l4=3;
int l5=4;
int l6=5;
int l7=6;
int l8=7;
int l9=8;
int l10=9;
int buz=11;

void setup()
{
  pinMode(ir, INPUT);
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  pinMode(l6, OUTPUT);
  pinMode(l7, OUTPUT);
  pinMode(l8, OUTPUT);
  pinMode(l9, OUTPUT);
  pinMode(l10, OUTPUT);
  pinMode(buz, OUTPUT);
}

void loop() 
{
  if(digitalRead(ir)==LOW)
  {
    digitalWrite(l2, HIGH);
    delay(1000);
    digitalWrite(l1, HIGH);
    delay(1000);
    digitalWrite(l3, HIGH);
    delay(1000);
    digitalWrite(l4, HIGH);
    delay(1000);
    digitalWrite(l5, HIGH);
    delay(1000);
    digitalWrite(l6, HIGH);
    delay(1000);
    digitalWrite(l7, HIGH);
    delay(1000);
    digitalWrite(l8, HIGH);
    delay(1000);
    digitalWrite(l9, HIGH);
    delay(1000);
    digitalWrite(l10, HIGH);
    delay(1000);
    digitalWrite(l10, LOW);
    delay(1000);
    digitalWrite(l9, LOW);
    delay(1000);
    digitalWrite(l8, LOW);
    delay(1000);
    digitalWrite(l7, LOW);
    delay(1000);
    digitalWrite(l6, LOW);
    delay(1000);
    digitalWrite(l5, LOW);
    delay(1000);
    digitalWrite(l4, LOW);
    delay(1000);
    digitalWrite(l3, LOW);
    delay(1000);
    digitalWrite(l1, LOW);
    delay(1000);
    digitalWrite(l2, LOW);
    delay(1000);
  }
}
