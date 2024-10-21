int buzzer = 8;
void setup() 
{
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // no need to repeat the melody.
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
}
