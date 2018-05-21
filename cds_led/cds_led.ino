#define SW  2
#define X A0
#define Y A1
void setup() {
 pinMode(SW, INPUT_PULLUP);
 Serial.begin(9600);
}

void loop() {
  int valuex=analogRead(X);
  int valuey=analogRead(Y);
   int sw1=digitalRead(SW);
   Serial.print("X:=");
   Serial.print(valuex);
   Serial.print("  Y:=");
   Serial.print(valuey);
   Serial.print("  SW:=");
   Serial.println(sw1);

   delay(100);
 
}
