//Accept Numbers And Display The Sum Of Digit
#include <stdio.h>
int main()
{
int a[10],i,n,s=0;
float avg;
printf("enter Limit");
scanf("%d",&n);
printf("Enter numbers=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
printf("\nsum of digits=%d",s);
avg=(float)s/n;
printf("\naverage=%.2f",avg);
}
