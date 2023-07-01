#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x,y,ch,i,sum;
	float avg;
	do{
	printf("\nenter First and second number=");
	scanf("%d%d",&x,&y);
	printf("\nMENU");
	printf("\n1-maximum of two numbers");
	printf("\n2-all integeers between them");
	printf("\n3-sum and average");
	printf("\n4-EXIT");
	printf("\nEnter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
   	case 1 : if(x>y)
   	{
		printf("%d is maximum number",x);
   	}
	else
   	{
		printf("%d is maximum number",y);
   	}
   	break;
   	case 2 : for(i=x;i<=y;i++)
	{
	printf("%d",i);
	}
	break;
	case 3 :sum=x+y;
	printf("sum=%d",sum);
	avg=x+y/2;
	printf("average=%f",avg);
	break;
	case 4 : exit(0);
		 break;
	default : printf("Invalid choice");
	}
	}while(ch!=4);
}
