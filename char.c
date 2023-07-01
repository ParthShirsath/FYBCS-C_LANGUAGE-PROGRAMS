#include <stdio.h>
#include <ctype.h>
int main()
{
char ch;
printf("Enter character=");
scanf("%c",&ch);
if(isalpha(ch))
{
	if(ch>='A' && ch<='Z')
	printf("Character is uppercase alphabet");
	else if(ch>='a' && ch<='z')
	printf("Character is Lowercase alphabet");
}
else if(isdigit(ch))
printf("Character is digit");
else if(ispunct(ch))
printf("Character is special symbol");
}
