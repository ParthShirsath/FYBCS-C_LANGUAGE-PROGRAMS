#include <stdio.h>
#include <ctype.h>
int main()
{
int check(char ch);
int c1=0,c2=0,c3=0,ans;
char ch;
while(1)
{
printf("\nenter character(# means end)=");
scanf("%c",&ch);
if(ch=='#')
break;
ans=check(ch);
if(ans==1)
c1++;
if(ans==2)
c2++;
if(ans==3)
c3++;
}
printf("\nalphabets=%d",c1);
printf("\ndigits=%d",c2);
printf("\nsymbols=%d",c3);
}
int check(char ch)
{
if(isalpha(ch))
return 1;
if(isdigit(ch))
return 2;
if(ispunct(ch))
return 3;
}
