// Chaser For Loop Program
// This is the same LED Chaser using For loop
// A minituarized version using for loop
void setup() 
{
  // put your setup code here, to run once:
    // put your setup code here, to run once:
 
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Here loop is used to blink LEDs one by one
  int i;
  for ( i = 2; i < 10; i++)               // LED will blink in ascending Order starting from LED1 to LED8
  {
    digitalWrite(i,HIGH); delay(100);
    digitalWrite(i,LOW); delay(100);
  }
  for ( i = 9; i > 1; i--)              // LED will blink in descending Order starting from LED8 to LED1
  {
    digitalWrite(i,HIGH); delay(100);
    digitalWrite(i,LOW); delay(100);
  }
}
