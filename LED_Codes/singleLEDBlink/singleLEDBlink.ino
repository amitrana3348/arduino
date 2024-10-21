int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); // make the pin output
  digitalWrite(13,LOW); // keep the pin LOW initially
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(10000;
}
