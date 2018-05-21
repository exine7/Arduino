#include <Servo.h>

#define PIN_SERVO 5
#define DSW A0
#define Joistick_X A2

Servo servo;
int val=90;
int gap;
void setup() {
    Serial.begin(9600);
  servo.attach(PIN_SERVO);

 servo.write(90);
}

void loop() {
    
  //  int val=analogRead(DSW);
  int x=analogRead(Joistick_X);

  if (x>510 && val<175) {
    gap=1024-(1024-x);
    gap=map(gap,0,512,0,7);
    val += gap;
  }
  if (x<490 && val>0) {
    gap=509-x;
    gap=map(gap,0,512,0,7);
    val -= gap;
  }

 
  
  
   // val = map(val,0,1023,0,179);
    servo.write(val);
    Serial.print("val : "); 
    Serial.print(val); 
    Serial.print("  x : "); 
    Serial.print(x); 
    Serial.print("  gap : "); 
    Serial.println(gap); 

    delay(1000);


}
