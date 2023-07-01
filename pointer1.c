#include<stdio.h>
int main()
{
	int a,b;
	void swap(int *a,int *b);
	printf("enter two numbers=");
	scanf("%d%d",&a,&b);
	printf("\n before swap value of a=%d",a);
	printf("\n before swap value of b=%d",b);
	swap(&a,&b);
	printf("\n after swap value of a=%d",a);
	printf("\n after swap value of b=%d",b);
}
void swap(int *a,int *b)
{
	int t=*a;
		*a=*b;
		*b=t;

}
