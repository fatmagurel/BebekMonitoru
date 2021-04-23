int soundSensor = 2;
int LED = 3;
int threshold=500000;

void setup() 
{
  // put your setup code here, to run once:
  pinMode (soundSensor, INPUT);
  pinMode (LED, OUTPUT);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  int statusSensor = digitalRead (soundSensor);

  if(statusSensor == 1)
  {
    digitalWrite (LED, HIGH);
  }

  else
  {
    digitalWrite(LED, LOW);
  }

}
