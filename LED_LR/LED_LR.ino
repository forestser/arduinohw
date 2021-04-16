byte Pin[] = {2,3,4,5,6,7,8,9};
byte Pin_num = sizeof(Pin) / sizeof(byte); // Pin
void setup() {
 for(int i=2 ; i<=9 ; i++)
 pinMode(i, OUTPUT);
}

void loop() {
for(int i = 0; i<Pin_num; i++)
{
  for(int j = 0; j<Pin_num; j++)
  {
    if (i == j)
       digitalWrite(Pin[j], HIGH);
    else
       digitalWrite(Pin[j], LOW);  
  }
  delay(500);
}
for(int i = Pin_num-2; i>0; i--)
{
  for(int j = 0; j<Pin_num; j++)
  {
    if(i == j)
      digitalWrite(Pin[j], HIGH);
    else
      digitalWrite(Pin[j], LOW);
  }
  delay(500);
}
}
