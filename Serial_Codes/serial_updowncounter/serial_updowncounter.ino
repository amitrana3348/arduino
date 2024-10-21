int sw1 = 2;
int sw2 = 3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello world");
  pinMode(sw1,INPUT_PULLUP);  // connect switch from pin 2 and 3 to GND
  pinMode(sw2,INPUT_PULLUP);
}
int count = 0;

void loop() 
{
  if(digitalRead(sw1) == LOW)
  {
    count++;        // increment the counter
    Serial.print("Count = ");
    Serial.println(count);
    delay(500); // debounce delay
  }
  if(digitalRead(sw2) == LOW)
  {
    count--;      // decrement the counter
    Serial.print("Count = ");
    Serial.println(count);
    delay(500); // debounce delay
  }
}
