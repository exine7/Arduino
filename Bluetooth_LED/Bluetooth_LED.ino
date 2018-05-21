#include <SoftwareSerial.h>
#define RX 2
#define TX 3 

#define LED 13

SoftwareSerial bt(RX, TX);
 
void setup(){
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(LED,OUTPUT);
}
void loop(){
  if (bt.available()) {       
    val = bt.read();
    if (val=='1'){
      digitalWrite(LED, HIGH);
      bt.println("LED ON");
  }


    if (val=='0'){
      digitalWrite(LED, LOW);
      bt.println("LED OFF");
  }
  
}
