// JOUBERT Nathan
// PROJET JUKE BOX : HC05 en Maitre
// 26/03/2019 v1.0.1

#include <SoftwareSerial.h>
SoftwareSerial BTserial(8,9);  // RX | TX
// Connect the HC-05 TX to Arduino pin 9 RX.
// Connect the HC-05 RX to Arduino pin 8 TX through a voltage divider.

char c = ' ';
void setup()
{
  Serial.begin(38400);
  Serial.println("Arduino is ready");
  Serial.println("Remember to select Both NL & CR in the serial monitor");
  
  BTserial.begin(38400);
}
 void loop()
{

  //Keep reading from HC-05 Slave and send to Arduino Serial Monitor 
  if (BTserial.available())
  {
    c = BTserial.read();
    Serial.write(c);
   }
   // Keep reading from Arduino Serial Monitor and send to HC-05 Slave
   if (Serial.available())
   {
    c = Serial.read();
    Serial.write(c);
    BTserial.write(c);
   }
 }





 
