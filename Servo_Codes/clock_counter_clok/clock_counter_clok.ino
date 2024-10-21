#include <Servo.h>   // Make code in Servo.h available to this sketch 
Servo myservo;       // Create servo object called "myservo" 
int servo_pin=9;     // The servo must be attached to pin 9 or pin 10  
 
void setup() 
{ 
  myservo.attach(servo_pin);   // attaches the servo pin to myservo object 
} 

void loop() 
{ 
  int pos = 0;          // variable to store the servo position 
  int dtwait=15;        // duration of wait at the end of each step  
  for(pos = 0; pos < 180; pos++) { 
    myservo.write(pos);               // Move to position in variable 'pos' 
    delay(dtwait);                    // wait dtwait for the servo to reach the position 
  } 
  for(pos = 180; pos>=0; pos--) { 
    myservo.write(pos);              // Move to position in variable 'pos' 
    delay(dtwait);                   // wait dtwait for the servo to reach the position 
  } 
}
