byte LED[] = {2,3,4,5,6,7,8,9};
byte Cur_LED = 0;
void setup() {
  for(int i=0 ; i<=7 ; i++)
 pinMode(i, OUTPUT);
 Serial.begin(9600);
}

void loop()
{
  if (Serial.available())
    {
      int i = Serial.parseInt();
     i--;
      Cur_LED = Cur_LED ^ (1 << i);
      for (int j = 0; j <= 8 ; j++)
          digitalWrite(LED[j], Cur_LED & (1<<j));
    }
}
