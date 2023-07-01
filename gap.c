#include<stdio.h>
int main()
{
	int n,m=0;
	printf("Enter number=\n");
	scanf("%d",&n);
	while(n>0)
	{
		m=m*10+n%10;
		n/=10;
	}
	printf("Number =");
	while(m>0)
	{
		printf("%d\t",m%10);
		m=m/10;
	}
}
