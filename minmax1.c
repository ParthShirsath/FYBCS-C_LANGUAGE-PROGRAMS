#include<stdio.h>
int main()
{
	void minmax(int a[100],int n);
	int a[100],n,i;
	printf("enter the limit=\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("number tak=");
		scanf("%d",&a[i]);
	}
	minmax(a,n);
}
		void minmax(int a[100],int n)
	{
		int min,max,i;
		min=a[0];
		max=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
			max=a[i];
			if(a[i]<min)
			min=a[i];
		}
		printf("\nminimum number=%d",min);
		printf("\nmaximum number=%d",max);
	}
