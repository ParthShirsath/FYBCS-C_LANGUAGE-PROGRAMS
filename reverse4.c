#include<stdio.h>
int main()
{
	int n,d,r=0,*x;
	printf("enter number=\n");
	scanf("%d",&n);
	x=&n;
	while(*x>0)
	{
	d=*x%10;
	r=r*10+d;
	*x=*x/10;
	} 
	printf("reverse=%d",r);
}
