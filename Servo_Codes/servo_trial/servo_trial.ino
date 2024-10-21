#include <Servo.h>   // Make code in Servo.h available to this sketch 
Servo myservo;       // Create servo object called "myservo" 
int servo_pin=9;     // The servo must be attached to pin 9 or pin 10  
 
void setup() 
{ 
  myservo.attach(servo_pin);   // attaches the servo pin to myservo object 
} 

void loop()
{
  myservo.write(0);
  delay(3000);
  myservo.write(180);
  delay(3000);
}
