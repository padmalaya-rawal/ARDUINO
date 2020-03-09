//THIS VIDEO IS BROUGHT TO YOU BY PR ROBOTICS
//IF YOU LIKE THIS VIDEO, DON'T FORGET TO LIKE,SHARE,COMMENT AND SUBSCRIBE THE CHANNEL

//Subscribe us on YOUTUBE : www.youtube.com/PRROBOTICS
//Support us on PATREON   : www.patreon.com/PRROBOTICS


#include <SPI.h>
#include <MFRC522.h>
 
#define SS_PIN 10
#define RST_PIN 9
#define RELAY 3 //relay pin
#define ACCESS_DELAY 2000
#define DENIED_DELAY 1000
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();          // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, LOW);
  Serial.println("Put your card to the reader...");
  Serial.println();

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "86 71 2D F9") //change here the UID of the card/cards that you want to give access
  {
    Serial.println("Authorized access");
    Serial.println();
    delay(500);
    if(digitalRead(RELAY) == HIGH)
    digitalWrite(RELAY, LOW);

    else
    digitalWrite(RELAY, HIGH);


  }
 
 else   {
    Serial.println(" Access denied");
    delay(DENIED_DELAY);
}
}
