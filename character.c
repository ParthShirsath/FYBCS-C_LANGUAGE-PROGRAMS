#include<stdio.h>
int character(char ch)
int main()
{
char ch,c;
printf("enter character=");
scanf("%c",&ch);
character(ch);
}
int character(char ch)
{
	int i,n;
	printf("enter limit=");
	scanf("%d",&n);
	printf("Next n character=");
	for(i=0;i<n;i++)
{
	printf(" %c",ch++);
}
}
