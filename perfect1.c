#include<stdio.h>
int main()
{
	int s=0,i,n,*x;
	printf("enter number to check perfect=");
	scanf("%d",&n);
	x=&n;
	for(i=0;i<n;i++)
	{
	if(*x%i==0)
	s=s+i;
	}
	if(s==*x)
	printf("%d is perfect number",*x);
	else
	printf("%d is not perfect number",*x);
}
