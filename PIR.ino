int LED_PIN=13;
int INPUT_PIN=5;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
}

void loop()
{
  int val=digitalRead(INPUT_PIN);
  if(val==HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
  } 
}
