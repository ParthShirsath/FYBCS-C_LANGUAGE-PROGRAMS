#include <stdio.h>
int main()
{
	int *a[100],n,i,min;
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("number tak:");
		scanf("%d",a+i);
	}
	min=*(a+0);
	for(i=1;i<n;i++)
	{
		if(*(a+i)>min)
		min=*(a+i);
	}
	printf("\nMinimum number=%d",min);
}
