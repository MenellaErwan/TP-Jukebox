//JOUBERT Nathan
//PROJET JUKE BOX : Clavier/HC05 Maître
//26/03/2019 v2.4.2

#include <SoftwareSerial.h>
SoftwareSerial BTserial(8, 9);

char c = ' ';

//Atribution des Colonnes
int C1 = 2;
int C2 = 3;
int C3 = 4;
int C4 = 5;
int C5 = 6;
int C6 = 7;

//Atribution des Lignes
int L1 = 13;
int L2 = 12;
int L3 = 11;
int L4 = 10;                             

int temps = 100;
int temps2 = 50;
  
//////////////////////////////////////////////////////////////////////

void setup()
{
  Serial.begin(38400);
  Serial.println("Arduino is ready");
  Serial.println("Remember to select Both NL & CR in the serial monitor");
  
  BTserial.begin(38400);  
      
    pinMode(L1, INPUT);
    pinMode(L2, INPUT);
    pinMode(L3, INPUT);
    pinMode(L4, INPUT);
    
    pinMode(C1, OUTPUT);
    pinMode(C2, OUTPUT);
    pinMode(C3, OUTPUT);
    pinMode(C4, OUTPUT);
    pinMode(C5, OUTPUT);
    pinMode(C6, OUTPUT);
}

void loop() 
{
    colonne1(); 
    colonne2();
    colonne3();
    colonne4();
    colonne5();
    colonne6();
 
    if (BTserial.available())
    {
      c = BTserial.read();
      Serial.write(c);
    }
    if (Serial.available())
    {
      c = Serial.read();
      Serial.write(c);
      BTserial.write(c);
    }
}
//////////////////////////////////////////////////////////////////////

void colonne1()
{
  digitalWrite(C1, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("7");
    }
    if(digitalRead(L2) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("4");
    }
    if(digitalRead(L3) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("1");
    }
  digitalWrite(C1, LOW);
  delay(temps);  
}
/////////////////////////////////////////////////////////////////////
void colonne2()
{
  digitalWrite(C2, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("8");
    }
    if(digitalRead(L2) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("5");
    }
    if(digitalRead(L3) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("2");
    }
    if(digitalRead(L4) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("0");
    }
  digitalWrite(C2, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
void colonne3()
{
  digitalWrite(C3, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("9");
    }
    if(digitalRead(L2) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("6");
    }
    if(digitalRead(L3) == HIGH)
    {
      BTserial.write("0");
      delay(temps2);
      BTserial.write("3");
    }
  digitalWrite(C3, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
void colonne4()
{
  digitalWrite(C4, HIGH);

    if(digitalRead(L2) == HIGH)           
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("1");                //Volume +
    }
    if(digitalRead(L3) == HIGH)           
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("2");                //Volume -              
    }
  digitalWrite(C4, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
void colonne5()
{
  digitalWrite(C5, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("6");                //Supprimer    
    }
    if(digitalRead(L2) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("3");                //Musique Suivante
    }
    if(digitalRead(L3) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("8");                //Liste Précédante
    }
  digitalWrite(C5, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
void colonne6()
{
  digitalWrite(C6, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("5");                //Pause
    }
    if(digitalRead(L2) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("4");                //Musique précédante
    }
    if(digitalRead(L3) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("7");                //Liste Suivante
    }
    if(digitalRead(L4) == HIGH)
    {
      BTserial.write("1");
      delay(temps2);
      BTserial.write("9");                //Entrer/Valider
    }
  digitalWrite(C6, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
