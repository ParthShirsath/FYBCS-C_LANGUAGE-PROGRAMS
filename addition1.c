//Addition Of Two Matrix
#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r,c;
	printf("Enter number of row and column");
	scanf("%d%d",&r,&c);
	printf("Enter first matrix elements=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter second matrix elements=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("addition=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
	    printf("\n");
 	}
}
