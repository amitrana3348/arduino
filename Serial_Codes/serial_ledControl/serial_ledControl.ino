int led1 = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello world");
  pinMode(led1,OUTPUT);

}

void loop() 
{
  if(Serial.available() > 0)
  {
      int rxd = Serial.read();
      if(rxd == 'A' || rxd == 'a')    // check if received character is small 'a' or CAPS 'A'
      {
        digitalWrite(led1,HIGH);  
      }
      if(rxd == 'B' || rxd == 'b')    // check if received character is small 'b' or CAPS 'B'
      {
        digitalWrite(led1,LOW);  
      }
  }
}
