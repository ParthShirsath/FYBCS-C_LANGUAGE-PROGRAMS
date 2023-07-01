//Write A 'C' program using Recursive Function Accept Base
//and Power and calculate them
#include <stdio.h>
int base(int x,int y)
{
if(y==0)
return 1;
else
return(x*base(x,y-1));
}
int main()
{
int x,y,a;
printf("enter the base and power=");
scanf("%d%d",&x,&y);
a=base(x,y);
printf("base to power=%d",a);
}
