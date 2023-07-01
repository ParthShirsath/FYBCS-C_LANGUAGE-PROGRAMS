#include<stdio.h>
void prime(int n)
{
int f=0,i;
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
		f=1;
		break;
	}
}
    if(f==0)
    printf("%d ",n);
}
int main()
{
    int n;
    for(n=100;n<=500;n++)
    {
    prime(n);
    }
}