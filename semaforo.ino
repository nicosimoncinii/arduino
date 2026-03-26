// C++ code
//


  const int PIN_VERDE = 13;
  const int PIN_GIALLO = 10;
  const int PIN_ROSSO = 8;
  

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  
  
  
}

void loop()
{
  digitalWrite(PIN_VERDE,  HIGH);
  digitalWrite(PIN_GIALLO, LOW);
  digitalWrite(PIN_ROSSO,  LOW);
  delay(5000);
  
  digitalWrite(PIN_VERDE, LOW);
  digitalWrite(PIN_GIALLO, HIGH);
  delay(2000);

  digitalWrite(PIN_GIALLO,  LOW);
  digitalWrite(PIN_ROSSO, HIGH);
  delay(5000);

  digitalWrite(PIN_GIALLO, LOW);
}