#include <stdio.h>
#include <stdlib.h>
void symmetric(int a[10][10],int r)
{
	int i,j,f=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(a[i][j]!=a[j][i])	
			{
				f=1;
				break;
			}
		}
	}
	if(f==0)
	printf("\nMatrix is Symmetric");
	else
	printf("\nMatrix is not Symmetric");
}
void trace(int a[10][10],int r)
{
	int i,j,s=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i==j)
			s=s+a[i][j];
		}
	}
	printf("\nSum of diagonal Elements=%d",s);
}
void upper(int a[10][10],int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i>j)
			{
				printf("%d\t",a[i][j]);
			}
		}
		printf("\n");
	}
}
int main()
{
		int i,j,a[10][10],r,ch;
		printf("Enter The Number Of Rows For Square Matrix=");
		scanf("%d",&r);
		printf("\nEnter The Elements In The Matrix=\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
			scanf("%d",&a[i][j]);	
			}
		}
		do
		{
			printf("\nMENU");
			printf("\n1-Symmetric");
			printf("\n2-Sum of the diagonal Elements");
			printf("\n3-Upper Triangular Matix");
			printf("\nEnter Your choice=");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1 : symmetric(a,r);
						 break;
				case 2 : trace(a,r);
						 break;
				case 3 : upper(a,r);
						 break;
				case 4 : exit(0);
						 break;
			}
		}while(ch!=4);
}
