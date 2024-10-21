int led = 13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello world");
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available() > 0)  // if the serial available function returns 1
    // it means that some data has been received in the serial buffer of arduino
  {
      int rxd = Serial.read();
      if(rxd == 'A' || rxd == 'a')
      {
        digitalWrite(led,HIGH); 
      }
      if(rxd == 'B' || rxd == 'b')
      {
        digitalWrite(led,LOW); 
      }
  }
}
