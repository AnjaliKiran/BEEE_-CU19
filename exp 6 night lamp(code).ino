int sp=A0;
int lp=11;
void setup()
{
  Serial.begin(9600);
  pinMode(lp,OUTPUT);
}
void loop()
{
  int sv=analogRead(sp);
  Serial.println(sv);
  delay(100);
  if(sv>300)
  {
    digitalWrite(lp,HIGH);
  }
  else
  {
    digitalWrite(lp,LOW);
  }
}