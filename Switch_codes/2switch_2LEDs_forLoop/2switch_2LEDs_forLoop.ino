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
int i;  // variable for for loop

void blinking() // seperate function for blinking both LEDs
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(500);  
}
void loop() 
{
  // put your main code here, to run repeatedly:
  if(digitalRead(sw1) == LOW)  // means the switch 1 is pressed
  {
     for(i = 0; i < 5; i++)
     {
       blinking();      // this function will repeat 5 tims
     }
  }
  if(digitalRead(sw1) == LOW)  // means the switch 2 is pressed
  {
     for(i = 0; i < 15; i++)
     {
       blinking();      // this function will repeat 15 tims
     }
  }
  
}
