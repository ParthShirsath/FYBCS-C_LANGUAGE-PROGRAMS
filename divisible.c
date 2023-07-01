#include <stdio.h>
int main()
{
int i,a[100],n;
printf("enter the limit=");
scanf("%d",&n);
printf("enter the numbers=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("numbers which is divisible by 3 and 5=");
for(i=0;i<n;i++)
{
if((a[i]%3==0)&&(a[i]%3==0))
printf("%d ",a[i]);
}
}




