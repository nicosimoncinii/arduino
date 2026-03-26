// C++ code
//


  const int PIN_VERDE = 13;
  const int PIN_GIALLO = 10;
  const int PIN_ROSSO = 8;
  const int PIN_BOTTONE = 2;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  
  pinMode(PIN_BOTTONE, INPUT_PULLUP);
  
  
}

void loop()
{
  digitalWrite(PIN_VERDE,  HIGH);
  digitalWrite(PIN_GIALLO, LOW);
  digitalWrite(PIN_ROSSO,  LOW);
  
  while (digitalRead(PIN_BOTTONE) == HIGH) {

  }
  
  delay(300);
  
  digitalWrite(PIN_VERDE, LOW);
  digitalWrite(PIN_ROSSO, HIGH);
  delay(5000);

  digitalWrite(PIN_ROSSO,  LOW);
  digitalWrite(PIN_GIALLO, HIGH);
  delay(3000);

  digitalWrite(PIN_GIALLO, LOW);
}