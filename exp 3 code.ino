void setup()
{
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
}
void loop()
{
  int a=digitalRead(3);
  if(a==HIGH)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
    digitalWrite(3,LOW);
  }
}
