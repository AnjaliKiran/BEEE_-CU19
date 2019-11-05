void setup()
{
  for(int i=1;i<5;i++)
    pinMode(i,OUTPUT);
}
void loop()
{
  for(int i=1;i<5;i++)
  {
    digitalWrite(i,HIGH);
    if(i==4)
    {
      digitalWrite(1,HIGH);
    }
    else
      digitalWrite(i+1,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
}