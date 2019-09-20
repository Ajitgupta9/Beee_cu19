void setup()
{
  for(int i =3;i<=6;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(int i =3;i<=6;i++)
  {
 
    digitalWrite(i, HIGH);

    delay(30);
    
    digitalWrite(i, LOW);
  
    delay(30);
  }
  for(int i =6;i>=3;i--)
  {
 
    digitalWrite(i, HIGH);
   
    delay(30);
    
    digitalWrite(i, LOW);
 
    delay(30);
  }
}
  
