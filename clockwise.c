# DC-motor
Interfacing DC motor with 8051 microcontroller
DC motor rotation in clockwise direction
#include<reg51.h>
sbit pp=p1^0;
sbit np=p1^1;
void main()
{
unsigned int i;
pp=0;
np=0;
while(1);
{
pp=1;
np=0;
for(i=0;i<60000;i++);
}
}
