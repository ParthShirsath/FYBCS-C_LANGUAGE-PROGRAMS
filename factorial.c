#include <stdio.h>
int fact(int n)
{
if(n==0)
return 1;
else
return(n*fact(n-1));
}
int main()
{
int n,a;
printf("enter the number=");
scanf("%d",&n);
a=fact(n);
printf("factorial of a number=%d",a);
}