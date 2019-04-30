//Joubert Nathan
//Décodage clavier pour Juke Box (MINI PROJET)
//v0.0.1


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
  
//////////////////////////////////////////////////////////////////////

void setup()
{
    Serial.begin(9600);
      
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
}

//////////////////////////////////////////////////////////////////////

void colonne1()
{
  digitalWrite(C1, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      Serial.println("7");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("4");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("1");
    }
    if(digitalRead(L4) == HIGH)
    {
      Serial.println("-");
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
      Serial.println("8");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("5");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("2");
    }
    if(digitalRead(L4) == HIGH)
    {
      Serial.println("0");
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
      Serial.println("9");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("6");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("3");
    }
    if(digitalRead(L4) == HIGH)
    {
      Serial.println(".");
    }
  digitalWrite(C3, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
void colonne4()
{
  digitalWrite(C4, HIGH);

    if(digitalRead(L1) == HIGH)
    {
      Serial.println("Echape");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("Page précédante");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("Page suivante");
    }
    if(digitalRead(L4) == HIGH)
    {
      Serial.println("Information");
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
      Serial.println("Supprimer");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("Volume -");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("Musique précédante");
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
      Serial.println("Pause");
    }
    if(digitalRead(L2) == HIGH)
    {
      Serial.println("Volume +");
    }
    if(digitalRead(L3) == HIGH)
    {
      Serial.println("Musique suivante");
    }
    if(digitalRead(L4) == HIGH)
    {
      Serial.println("Entrer");
    }
  digitalWrite(C6, LOW);
  delay(temps); 
}
/////////////////////////////////////////////////////////////////////
