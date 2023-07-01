#include<stdio.h>
int main()
{
	int x,y,ch,t;
	do{
	printf("Enter two numbers=");
	scanf("%d%d",&x,&y);
	printf("\nMENU");
	printf("\n1-check if %d is=%d",x,y);
	printf("\n2-check if %d is<%d",x,y);
	printf("\n3-Interchange");
	printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:if(x==y)
		   printf("%d is equal to %d",x,y);
		   else
		   printf("%d is not equal to %d",x,y);
		   break;
	case 2:if(x<y)
		   printf("%d is less than %d",x,y);
		   else
		   printf("%d is not less than %d",x,y);
		   break;
	case 3:t=x;
		   x=y;
		   y=t;
		   printf("\nx=%d",x);
		   printf("\ny=%d",y);
		   break;
	default:printf("Invalid choice");
	}
}while(ch<=3);
}
