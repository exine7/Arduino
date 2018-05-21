#define LED  13
#define SW 7
int old=0

void setup() {
 Serial.begin(9600);
 pinMode(LED, OUTPUT);
 pinMode(SW, INPUT_PULLUP);
}

void loop() {
  int value = digitalRead(SW);
  if (old != value){
  Serial.println(value);
  delay(100);
  digitalWrite(LED, old);
  old=value;
  }
}
