//Accept A number And Display its Binary
#include <stdio.h>
int main()
{
int a[10],n,i=0;
printf("Enter Number=");
scanf("%d",&n);
while(n>0)
{
a[i]=n%2;
n=n/2;
i++;
}
printf("Binary number=");
for(i=i-1;i>=0;i--)
printf("%d",a[i]);
}
