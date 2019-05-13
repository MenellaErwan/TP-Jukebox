// JOUBERT Nathan
// PROJET JUKE BOX : HC05 Esclave
// 26/03/2019 v1.3.1

#include <SoftwareSerial.h>
SoftwareSerial BTserial(8,9);

int temps = 100;
void setup()
{
  Serial.begin(38400);
  Serial.println("Arduino is ready");
  Serial.println("Remember to select both NL & CR in the serial monitor");

  BTserial.begin(38400);
}

void loop()
{

  //Keep reading from HC-05 Master and send to Arduino Serial Monitor   
  if (BTserial.available())
  {
    Serial.print('$');
    delay(temps);
    Serial.write(BTserial.read());
    delay(50);
    Serial.write(BTserial.read());
    delay(temps);
    Serial.println('/');
  }
  

    
  // Keep reading from Arduino Serial Monitor and send to HC-05 Master
  if (Serial.available())
  {
    BTserial.write(Serial.read());
  }
}
