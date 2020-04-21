int in1=10;
int in2=11;
int in3=12;

int out=6;
int writevalue =0;

void setup()
{
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT_PULLUP);
  pinMode(out, OUTPUT);     
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(in1) == LOW)
  {
    writevalue +=1;
    Serial.println(writevalue);
    analogWrite(out,writevalue);
    delay(50);

    if(writevalue>=255)
    writevalue=0;
  }

  else if(digitalRead(in2) == LOW)
  {
    writevalue -=1;
    Serial.println(writevalue);
    analogWrite(out,writevalue);
    delay(50);

    if(writevalue<0)
    writevalue=255;
  }

  else if(digitalRead(in3)==LOW)
  {
    writevalue =0;
    analogWrite(out,writevalue);
    Serial.println(writevalue);
    delay(50);
  }
}
