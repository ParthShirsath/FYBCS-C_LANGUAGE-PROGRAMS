#include <stdio.h>
int main()
{
	int a[10],i,n,x,cnt=0;
	printf("enter limit=");
	scanf("%d",&n);
	printf("enter numbers=");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	printf("enter number to found=");
	scanf("%d",&x);
	for(i=0;i<a[i];i++)
	{
		if(a[i]==x)
		{
		cnt++;
		}
	}
	printf("number is found %d times",cnt);
}
