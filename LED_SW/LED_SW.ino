#define LED  13
#define SW 7
void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(SW, INPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char value=Serial.read();
    
    if (value=='1') digitalWrite(LED, HIGH);
    if (value=='0') digitalWrite(LED, LOW);
  }
  

}
