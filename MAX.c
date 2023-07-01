#include <stdio.h>
int main()
{
int i,a[100],n,max;
printf("enter the limit=");
scanf("%d",&n);
printf("enter the numbers=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("maximum number=%d",max);
}
