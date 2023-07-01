//Sum Of All Elements
#include <stdio.h>
int main()
{
	int a[10],n,i,s=0;
	printf("Enter the limit=");
	scanf("%d",&n);
	printf("Enter the Elements=");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	s=s+a[i];
	}
	printf("sum of the elements=%d",s);
}
