#include <stdio.h>
int factorial(int n)
{
int f=1,i;
for(i=1;i<=n;i++)
{
f=f*i;	
}
return f;
}
int main()
{
int n,f;
printf("Enter number");
scanf("%d",&n);
f=factorial(n);
printf("factorial=%d",f);
}








