#include<stdio.h>
int main()
{
	int a,b,t,*x,*y;
	printf("Enter Two Number");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	t=*x;
	*x=*y;
	*y=t;
	printf("\nSwap value of a=%d",*x);
	printf("\nSwap value of b=%d",*y);
}
