#include <stdio.h>
int main()
{
	int i,s=0,n;
	printf("enter number=");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	if(n%i==0)	
	s=s+i;
	}
	printf("sum of factor=%d",s);
	if(s==n)
	printf("number is perfect");
	else
	printf("number is not perfect");
}
