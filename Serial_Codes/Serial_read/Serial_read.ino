void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) // it means some data has been received and ready for reading
  {
     int rxd = Serial.read();
     delay(1000);
     Serial.print("YOu've pressed ");
     Serial.write(rxd); // will print the received character as it is on terminal
     Serial.println("");
     Serial.print(rxd); // will print the ascii converted to decimal of the received character
     Serial.println("");
  }
  
}
