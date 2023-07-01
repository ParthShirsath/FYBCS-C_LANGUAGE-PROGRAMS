#include<stdio.h>
int main()
{
	int n,*x;
	printf("Enter Number=\n");
	scanf("%d",&n);
	x=&n;
	if(*x%2==0)
	{
		printf("Number is even");
	}	
	else
	{
		printf("Number is odd");	
	}
}
