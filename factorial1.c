#include<stdio.h>
int main()
{
	int f,n;
	int fact(int n);
	printf("enter number=");
	scanf("%d",&n);
	f=fact(n);
	printf("factorial of a number=%d",f);
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
	f=f*i;
	}
	return f;
}

