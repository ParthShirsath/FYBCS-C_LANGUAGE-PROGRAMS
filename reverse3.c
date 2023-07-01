#include <stdio.h>
int main()
{
	int a[10],i,n;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("numbers in the reverse order=");
	for(i=n-1;i>=0;i--)
	{
	printf("%d,",a[i]);
	}
}
