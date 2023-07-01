#include<stdio.h>
int factorial(int n)
{
	int f=1;
	while(n>0)
	{
	f=f*n;
	n--;
	}
	return f;
}
int main()
{
	int n,ans;
	printf("Enter Number=\n");
	scanf("%d",&n);
	ans=factorial(n);
	printf("Factorial of %d is=%d",n,ans);
}
