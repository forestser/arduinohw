byte LEDA;
void setup() {
pinMode(2, OUTPUT);
Serial.begin(9600);

}

void loop() {
if(Serial.available())
{
  long A = Serial.parseInt();
  if(A == 1)
  {
    LEDA = LEDA ^ 1;
    digitalWrite(2, HIGH);
  }
}
}
