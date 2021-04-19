
void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}
void loop() {
int i;
for(i = 0; i<=15; i++)
{
  digitalWrite(2, i%2);
  digitalWrite(3, (i>>1)%2);
  digitalWrite(4, (i>>2)%2);
  digitalWrite(5, (i>>3)%2);
  delay(800);
}
}
