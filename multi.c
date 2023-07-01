#include<stdio.h>
int main()
{
	int i,n;
	printf("enter number=");
	scanf("%d",&n);
	printf("multiplication table of %d=\n",n);
	for(i=1;i<=10;i++)
	{
	printf("\n%dx%d=%d",n,i,n*i);	
	}
}
