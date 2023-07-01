#include <stdio.h>
int main()
{
	int *a[100],i,n;
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("number tak:");
		scanf("%d",a+i);
	}
	printf("reverse number\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",*(a+i));
	}
}
