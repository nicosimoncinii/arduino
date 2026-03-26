// C++ code
//


  const int PIN_ROSSO = 8;
  

void setup()
{
  pinMode(8, OUTPUT);
  
}

void loop()
{

  digitalWrite(PIN_ROSSO, LOW);
  delay(1000);
  digitalWrite(PIN_ROSSO, HIGH);
  delay(1000);

}