/*This code will help you to attach 13 buttons on one pin which can be used to control 13 different appliances
 * or any motor. This code will create a toggle switch. Only disadvantage is that ypu cannot use multiple button 
 * at a time. For circuit diagram checkout the fritzing circuits repository. 
 */

int in=A0;
int b1= 1;
int b2= 2;
int b3= 3;
int b4= 4;
int b5= 5;
int b6= 6;
int b7= 7;
int b8= 8;
int b9= 9;
int b10= 10;
int b11= 11;
int b12= 12;
int b13= 13;

void setup() 
{
  pinMode(in, INPUT);
  pinMode(b1, OUTPUT);
  pinMode(b2, OUTPUT);
  pinMode(b3, OUTPUT);
  pinMode(b4, OUTPUT);
  pinMode(b5, OUTPUT);
  pinMode(b6, OUTPUT);
  pinMode(b7, OUTPUT);
  pinMode(b8, OUTPUT);
  pinMode(b9, OUTPUT);
  pinMode(b10, OUTPUT);
  pinMode(b11, OUTPUT);
  pinMode(b12, OUTPUT);      
  pinMode(b13, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int val= analogRead(in);

  if(val>=0 && val<10)
  digitalWrite(b1, HIGH);

  else if(val>=0 && val<10 && digitalRead(b1)==HIGH)
  digitalWrite(b1,  LOW);

  else if(val>=10 && val<20)
  digitalWrite(b2, HIGH);

  else if(val>=10 && val<20 && digitalRead(b2)==HIGH)
  digitalWrite(b2,  LOW);
  
  else if(val>=20 && val<30)
  digitalWrite(b3, HIGH);
  
  else if(val>=20 && val<30 && digitalRead(b3)==HIGH)
  digitalWrite(b3,  LOW); 
   
  else if(val>=30 && val<40)
  digitalWrite(b4, HIGH);
  
  else if(val>=30 && val<40 && digitalRead(b4)==HIGH)
  digitalWrite(b4,  LOW);

  else if(val>=40 && val<50)
  digitalWrite(b5, HIGH);

  else if(val>=40 && val<50 && digitalRead(b5)==HIGH)
  digitalWrite(b5,  LOW);
  
  else if(val>=50 && val<60)
  digitalWrite(b6, HIGH);

  else if(val>=50 && val<60 && digitalRead(b6)==HIGH)
  digitalWrite(b6,  LOW);

  else if(val>=60 && val<70)
  digitalWrite(b7, HIGH);

  else if(val>=60 && val<70 && digitalRead(b7)==HIGH)
  digitalWrite(b7,  LOW);
  
  else if(val>=70 && val<80)
  digitalWrite(b8, HIGH);

  else if(val>=70 && val<80 && digitalRead(b8)==HIGH)
  digitalWrite(b8,  LOW);

  else if(val>=80 && val<90)
  digitalWrite(b9, HIGH);
  
  else if(val>=80 && val<90 && digitalRead(b9)==HIGH)
  digitalWrite(b1,  LOW);
    
  else if(val>=90 && val<100)
  digitalWrite(b10, HIGH);

  else if(val>=90 && val<100 && digitalRead(b10)==HIGH)
  digitalWrite(b10,  LOW);

  else if(val>=100 && val<110)
  digitalWrite(b11, HIGH);

  else if(val>=100 && val<110 && digitalRead(b11)==HIGH)
  digitalWrite(b11,  LOW);
  
  else if(val>=110 && val<120)
  digitalWrite(b12, HIGH);

  else if(val>=110 && val<120 && digitalRead(b12)==HIGH)
  digitalWrite(b12,  LOW);  

  else if(val>=120 && val<130)
  digitalWrite(b13, HIGH);

  else if(val>=120 && val<130 && digitalRead(b13)==HIGH)
  digitalWrite(b13,  LOW);
}
