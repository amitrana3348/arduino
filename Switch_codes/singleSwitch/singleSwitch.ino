int sw = 2;
int led = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(sw,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw) == LOW)  // means the switch is pressed
  {
     digitalWrite(led,HIGH);  // make the LED turn ON
  }
  else
  {
    digitalWrite(led,LOW);  // else, keep the LED off  
  }
}
