#include <stdio.h>
int main()
{
int i=0,a[10],n;
	printf("enter number=");
	scanf("%d",&n);
	while(n>0)
	{
	a[i]=n%16;
	n=n/16;
	i++;
	}
	printf("Hexadecimal number=");
	for(i=i-1;i>=0;i--)
	{
	if(a[i]==10)
	printf("A");
	else if(a[i]==11)
	printf("B");
	else if(a[i]==12)
	printf("C");
	else if(a[i]==13)
	printf("D");
	else if(a[i]==14)
	printf("E");
	else if(a[i]==15)
	printf("F");
	else
	printf("%d",a[i]);
	}
}
