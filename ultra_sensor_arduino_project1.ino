// C++ code
//
  int trigPin = 9;
  int echoPin = 9;
  void setup()
{

  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
}

void loop()
{
    digitalWrite(trigPin, LOW);
  delayMicroseconds(5);

  digitalWrite(trigPin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(trigPin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  pinMode(echoPin, INPUT);
  
}