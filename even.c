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
printf("even numbers=");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d ",a[i]);
}
}




