#include <stdio.h>
int main()
{
	int s=0,n,d;
	printf("ENTER NUMBER=");
	scanf("%d",&n);
	while(n>0)
	{
		d=n%10;
		s=(s*10)+d;
		n=n/10;
	}
	printf("reverse number=%d",s);
	
}
