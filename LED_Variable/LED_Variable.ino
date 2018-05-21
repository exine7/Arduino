#define LED  9
#define DSW A0

void setup() {
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int value=analogRead(DSW);
   analogWrite(LED, value / 4 );
   Serial.println(value);
 
}
