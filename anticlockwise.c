DC motor rotation in anticlockwise direction
#include<reg51.h>
sbit pp=p1^0;
sbit np=p1^1;
void main()
{
  unsigned int i;
  pp=0;
  np=0;
  while(1)
  {
    pp=0;
    np=1;
    for(i=0;i<60000;i++);
  }
}
