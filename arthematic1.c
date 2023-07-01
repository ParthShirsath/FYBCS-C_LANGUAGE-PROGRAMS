#include<stdio.h>
int main()
{
	int a,b,*x,*y;
	printf("enter two numbers=\n");
	scanf("%d%d",&a,&b);
	x=&a;
	y=&b;
	printf("\naddition=%d",*x+*y);	
	printf("\nsubstraction=%d",*x-*y);
	printf("\nmultiplication=%d",*x**y);
	printf("\ndivision=%d",*x/(*y));
}