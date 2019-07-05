void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    if (Serial.read()=='a')
    {
      dot();
      dash();
    }
    if (Serial.read()=='b')
    {
      b();
    }
    if (Serial.read()=='c')
    {
      c();
    }if (Serial.read()=='d')
    {
      d();
    }if (Serial.read()=='e')
    {
      e();
    }if (Serial.read()=='f')
    {
      f();
    }if (Serial.read()=='g')
    {
      g();
    }if (Serial.read()=='h')
    {
      h();
    }if (Serial.read()=='i')
    {
      i();
    }if (Serial.read()=='j')
    {
      j();
    }if (Serial.read()=='k')
    {
      k();
    }if (Serial.read()=='l')
    {
      l();
    }if (Serial.read()=='m')
    {
      m();
    }if (Serial.read()=='n')
    {
      n();
    }if (Serial.read()=='o')
    {
      o();
    }if (Serial.read()=='p')
    {
      p();
    }if (Serial.read()=='q')
    {
      q();
    }if (Serial.read()=='r')
    {
      r();
    }if (Serial.read()=='s')
    {
      s();
    }if (Serial.read()=='t')
    {
      t();
    }if (Serial.read()=='u')
    {
      u();
    }if (Serial.read()=='v')
    {
      v();
    }if (Serial.read()=='w')
    {
      w();
    }if (Serial.read()=='x')
    {
      x();
    }if (Serial.read()=='y')
    {
      y();
    }if (Serial.read()=='z')
    {
      z();
    }
  }
}

void dot()
  {
      digitalWrite(13,HIGH);
      delay(250);
      digitalWrite(13,LOW);
      delay(250);
    }

void dash()
   {
       digitalWrite(13,HIGH);
       delay(250*4);
       digitalWrite(13,LOW);
       delay(250);
    }

void c_space()
    {
        digitalWrite(13,LOW);
        delay(250*3);
      }

void w_space()
      {
        digitalWrite(13,LOW);
        delay(250*7);
        }

void b()
{
  dash();
  dot();
  dot();
  dot();
}

void c()
{
  dash();
  dot();
  dash();
  dot();
}

void d()
{
  dash();
  dot();
  dot();
}

void e()
{
  dot();
}
   
void f()
{
  dot();
  dot();
  dash();
  dot();
}  
void g()
{
  dash();
  dash();
  dot();
}
  
void h()
{
  dash();
  dash();
  dash();
  dash();
}
    
void i()
{
  dash();
  dash();
}   
void j()
{
  dot();
  dash();
  dash();
  dash();
}  
void k()
{
  dash();
  dot();
  dash();
}
   
void l()
{
  dot();
  dash();
  dot();
  dot();
}
    
void m()
{
  dash();
  dash();
}
    
void n()
{
  dash();
  dot();
}
    
void o()
{
  dash();
  dash();
  dash();
}
    
void p()
{
  dot();
  dash();
  dash();
  dot();
}
   
void q()
{
  dash();
  dash();
  dot();
  dash();
}

void r()
{
  dot();
  dash();
  dash();
  dot();
    
}

void s()
{
    dot();
    dot();
    dot();
}

void t()
{
   dash();   
}

void u()
{
  dot();
  dot();
  dash();    
}

void v()
{
   dot();
   dot();
   dot();
   dash();
}

void w()
{
   dot();
   dash();
   dash();
}

void x()
{
  dash();
  dot();
  dot();
  dash();   
}

void y()
{
   dash();
   dot();
   dash();
   dash();
}

void z()
{
   dash();
   dash();
   dot();
   dot();
}    
