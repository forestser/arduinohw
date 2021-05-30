#define 2 LED;

void setup() {

 pinMode(LED, OUTPUT);
Serial.begin(9600);

}

void loop() {
 if(Serial.available())
 {
  long nu = Serial.parseInt();
  if(nu == 1)
    digitalWrite(LED, HIGH);
  if(nu == 0)
    digitalWrite(LED, LOW);
  
 }
}
