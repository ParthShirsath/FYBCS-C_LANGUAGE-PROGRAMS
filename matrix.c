#include <stdio.h>
int main()
{
	int a[10][10],s=0,r,c,i,j;
	printf("Enter number of row and column");
	scanf("%d%d",&r,&c);
	printf("enter matrix elements");
	for(i=0;i<r;i++)
	  {
		 for(j=0;j<c;j++)
			{
				scanf("%d",&a[i][j]);
			}
	  }

		 for(i=0;i<r;i++)
	  {
		 for(j=0;j<c;j++)
			{
				if(i==j)
				s=s+a[i][j];
			}
	  }
	  		printf("sum of diagonal elements=%d",s);
  }
