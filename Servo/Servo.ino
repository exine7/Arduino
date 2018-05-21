#include <Servo.h>

#define PIN_SERVO 9
#define DSW A0

Servo servo;

void setup() {
    Serial.begin(9600);
  servo.attach(PIN_SERVO);

  servo.write(90);
}

void loop() {

    int val=analogRead(DSW);
    val = map(val,0,1023,0,179);
    servo.write(val);
    Serial.println(val); 

  delay(15);

    
 // if(Serial.available()){    
  //  if(val == '1') servo.write(0);
//    else if(val == '2') servo.write(90);
 //   else if(val == '3') servo.write(175);
  //  else if(val == '9')  servo.attach(PIN_SERVO);
  //  else servo.detach();
//  } 
}
