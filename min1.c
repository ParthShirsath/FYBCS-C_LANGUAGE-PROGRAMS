#include<stdio.h>
int main()
{
	int a,b,c,*x,*y,*z;
	printf("Enter three numbers=\n");
	scanf("%d%d%d",&a,&b,&c);
	x=&a;
	y=&b;
	z=&c;
	if((*x<*y)&&(*x<*z))
	printf("%d is the minimum number",*x);
	else if((*y<*x)&&(*y<*z))
	printf("%d is the minimum number",*y);
	else
	printf("%d is the minimum number",*z);
}
