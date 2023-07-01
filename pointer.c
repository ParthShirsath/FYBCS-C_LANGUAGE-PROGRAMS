#include<stdio.h>
int main()
{
	int a,b;
	void swap(int *x,int *y);
	printf("enter two numbers=");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\n after swap value of a=%d",a);
	printf("\n after swap value of b=%d",b);
}
void swap(int *x,int *y)
{
	int t=*x;
		*x=*y;
		*y=t;
}
