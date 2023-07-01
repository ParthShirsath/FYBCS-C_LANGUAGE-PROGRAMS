#include <stdio.h>
int main()
{
	int n,e=0,o=0,z=0,d;
	printf("Enter Number=\n");
	scanf("%d",&n);
	while(n>0)
	{
	d=n%10;
	n=n/10;
	if(d==0)
	z++;
	else if(d%2==0)
	e++;
	else
	o++;
	}	
	printf("\nEven Digits=%d",e);
	printf("\nOdd Digits=%d",o);
	printf("\nEven Digits=%d",z);
}
