int in1 = 2;
int in2 = 3;
int en1 = 5;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(en1,OUTPUT);
  // for full speed write below line
  digitalWrite(en1,HIGH);


  //for controlling speed, use below function call
  // 0 -- > motor stop 0% power
// 127 -- > motor run at 50% power
// 255 -- > motor run at 100% power
  analogWrite(5,127);
}

void loop()
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
  delay(3000);
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  delay(1000);
  
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  
  delay(3000);
  
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  delay(1000);
}
