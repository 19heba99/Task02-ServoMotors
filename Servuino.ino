
#include <Servo.h>

Servo m1;  
Servo m2;
int initial = 0;    

void setup() {
  
  m1.attach(5); 
  m2.attach(9);

  m1.write(initial);
  m2.write(initial);
  
  delay(1000);
  
  m1.write(90);
  m2.write(180);

}

void loop() {

}
