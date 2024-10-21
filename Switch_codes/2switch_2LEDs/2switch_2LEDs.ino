int sw1 = 2;
int sw2 = 3;
int led1 = 13;
int led2 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sw1) == LOW)  // means the switch is pressed
  {
     digitalWrite(led1,HIGH);  // make the LED turn ON
     digitalWrite(led2,HIGH);  // make the LED turn ON
  }
  if(digitalRead(sw2) == LOW)  // default state
  {
    digitalWrite(led1,LOW);  // if other switch pressed, make both LEDs off
    digitalWrite(led2,LOW);  // 
  }
}
