
#include <Servo.h>

Servo m1;  
Servo m2;

void setup() {
  
  m1.attach(5); 
  m2.attach(9);

  m1.write(90);
  m2.write(180);
  
   delay(1000);
  
  m1.write(180);
  m2.write(100);
 
   delay(1000);

  m1.detach();
  m2.detach();

}

void loop() {

}
