
#include<SoftwareSerial.h>
SoftwareSerial BTserial(2,3);

char c= ' ';
const int key = 12;

void setup() 
{
 pinMode(key,OUTPUT);
 digitalWrite(key,LOW);
 Serial.begin(9600);
 Serial.println("Arduino is ready");
 BTserial.begin(9600);
}

void loop () 
{
 digitalWrite(key,HIGH);
  if (BTserial.available())
  {
    c = BTserial.read();
    Serial.write(c);
  }
    if (Serial.available())
    {
    c = Serial.read();
    BTserial.write(c);
    }
}
