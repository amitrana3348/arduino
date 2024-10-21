int LDR=A2;//Declare LDR pin 

void setup()
{
  pinMode(LDR,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int val;
  val=analogRead(LDR); //reading analog value of ldr
  Serial.println(val); //printing value
  delay(2000);  
}
