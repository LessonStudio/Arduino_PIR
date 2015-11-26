int LED_PIN=13;//This is the pin that will light up when motion is sensed
int INPUT_PIN=5;//This is the yellow wire in the example. The data comes in here

void setup()
{
  pinMode(LED_PIN, OUTPUT);//This prepares the LED pin for output
  pinMode(INPUT_PIN, INPUT);//This prepares pin 5 for input
}

void loop()
{
  int val=digitalRead(INPUT_PIN); //on each loop we check to see the pin's state
  if(val==HIGH)//If motion is detected it will go HIGH
  {
    digitalWrite(LED_PIN, HIGH);//So we turn on the LED
  }
  else//If there is no motion 
  {
    digitalWrite(LED_PIN, LOW);//we turn off the LED
  } 
}
