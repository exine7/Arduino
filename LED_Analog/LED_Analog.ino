#define LED  9
#define PIN A0

void setup() {
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int a=analogRead(PIN);
   analogWrite(LED, a);
   Serial.println(a);
   delay(100);
}
