#include <stdio.h>
int main()
{
int a[10],n,i=0;
printf("enter number=");
scanf("%d",&n);
while(n>0)
{
a[i]=n%8;
n=n/8;
i++;
}
printf("octal number=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
}
