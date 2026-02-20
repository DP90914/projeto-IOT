int led = 14;

void setup(){
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led , HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(200);
}