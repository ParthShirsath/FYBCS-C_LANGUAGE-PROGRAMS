#include <stdio.h>
int main()
{
	int s=0,n;
	printf("enter number=");
	scanf("%d",&n);
	do{
		s=0;
		while(n>0)
		{
		s=s+n%10;
		n=n/10;
		}
		n=s;
	   }
while(n>9);
printf("sum of digit into single digit=%d",s);
}
