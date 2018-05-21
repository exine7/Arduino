#define Joistick_SW 2
#define Joistick_X A0
#define Joistick_Y A1

void setup() {
 pinMode(Joistick_SW, INPUT_PULLUP);
 Serial.begin(9600);
}

void loop() {
  int x=analogRead(Joistick_X);
  int y=analogRead(Joistick_Y);
  int z=digitalRead(Joistick_SW);
  
   Serial.print("X:=");
   Serial.print(x);
   
   Serial.print("  Y:=");
   Serial.print(y);
   
   Serial.print("  SW:=");
   Serial.println(z);

   delay(100);
 
}
