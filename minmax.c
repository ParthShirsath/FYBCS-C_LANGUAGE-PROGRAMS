#include<stdio.h>
int main()
{
	int a[100],min,n,i;
	printf("enter limit = \n");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	min=*(a+0);
	for(i=0;i<n;i++)
	{
		if(*(a+i)<min)
		min=*(a+i);
	}
	printf("\n minimum number=%d",min);
}
