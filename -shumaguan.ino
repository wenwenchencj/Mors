void setup()
{
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

int income;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read()-'0';
       if (income==0)
      {
         digitalWrite(6,LOW);
         digitalWrite(5,LOW);
         digitalWrite(4,LOW);
         digitalWrite(3,LOW);
         delay(10);
        }
       if (income==1)
       {
         digitalWrite(6,LOW);
         digitalWrite(5,LOW);
         digitalWrite(4,LOW);
         digitalWrite(3,HIGH);
         delay(10);
       }
      if (income==8)
       {
         digitalWrite(6,LOW);
         digitalWrite(5,LOW);
         digitalWrite(4,HIGH);
         digitalWrite(3,LOW);
         delay(10);
       }
      if (income==9)
       {
         digitalWrite(6,LOW);
         digitalWrite(5,LOW);
         digitalWrite(4,HIGH);
         digitalWrite(3,HIGH);
         delay(10);
       }
      if (income==4)
       {
         digitalWrite(6,LOW);
         digitalWrite(5,HIGH);
         digitalWrite(4,LOW);
         digitalWrite(3,LOW);
         delay(10);
       }
      if (income==5)
       {
         digitalWrite(6,LOW);
         digitalWrite(5,HIGH);
         digitalWrite(4,LOW);
         digitalWrite(3,HIGH);
         delay(10);
       }
      if (income==6)
       {
         digitalWrite(6,HIGH);
         digitalWrite(5,HIGH);
         digitalWrite(4,LOW);
         digitalWrite(3,LOW);
         delay(10);
       }
      if (income==7)
       {
         digitalWrite(6,HIGH);
         digitalWrite(5,HIGH);
         digitalWrite(4,LOW);
         digitalWrite(3,HIGH);
         delay(10);
       }
      if (income==2)
       {
         digitalWrite(6,HIGH);
         digitalWrite(5,LOW);
         digitalWrite(4,LOW);
         digitalWrite(3,LOW);
         delay(10);
       }
      if (income==3)
       {
         digitalWrite(6,HIGH);
         digitalWrite(5,LOW);
         digitalWrite(4,LOW);
         digitalWrite(3,HIGH);
         delay(10);
       }
  }
}
      
