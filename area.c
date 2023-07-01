#include<stdio.h>
int main()
{
	float r,*pr,area;
	printf("enter radius=");
	scanf("%f",&r);
	pr=&r;
	area=(float)3.14**pr**pr;
	printf("area of the circle=%.2f",area);
}
