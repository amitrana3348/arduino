int led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  analogWrite(6,50);
}

int i;
void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i < 256;i++)
  {
    analogWrite(6,i);
    delay(20);  
  }
  delay(1000);

  for(i = 255; i >= 0;i--)
  {
    analogWrite(6,i);
    delay(20);  
  }
  delay(1000);
  
}
