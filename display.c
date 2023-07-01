#include <stdio.h>
int main()
{
void display(char ch,int n);
char ch;'
int n;
printf("enter the charachter=");
scanf("%c",ch);
printf("enter the limit=");
scanf("%d",n);
display(ch,n);
}
void display(char ch,int n)
{
int i;
for(i=1;i<=n;i++)
{
printf("%c",ch++);
}
}