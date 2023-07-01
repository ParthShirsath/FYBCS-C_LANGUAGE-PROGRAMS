#include<stdio.h>
int main()
{
	float a,b,*x,*y;
	printf("enter two number=\n");
	scanf("%f%f",&a,&b);
	x=&a;
	y=&b;
	printf("\nAddition=%f",*x+*y);
	printf("\nSubstraction=%f",*x-*y);
	printf("\nMultiplication=%f",*x**y);
	printf("\nDivision=%f",*x/(*y));
}
