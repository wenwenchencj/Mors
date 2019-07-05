#include <Morse.h>

Morse morse(13)

void setup() 
{
  Serial.begin(9600);
}

void loop() {
  String str = "";
  String morse_s = "";
  int i,t ,tem=0;
  int n = 0;
  while(Serial.available()>0)
  {
      temp = 1;
      str += char(serial.read());
      n++
    }

   if (temp)
   {
	for i in range(len(str)):
      		if  A<=str[i]<=Z:
			str[i]();
		if str[i]==" ":
			c_space();
		if str[i]=="
":
			w_space()
    }
      
}

void A()
{
    dot();
    dash();  
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
