#include <stdio.h>
int main()
{
int i,a[100],n,min;
printf("enter the limit=");
scanf("%d",&n);
printf("enter the numbers=");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("minimum number=%d",min);
}
