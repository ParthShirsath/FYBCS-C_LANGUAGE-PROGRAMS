#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int i;
	char s1[100];
	printf("Enter the string=\n");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(isupper(s1[i]))
		printf("%c",tolower(s1[i]));
		else
		printf("%c",toupper(s1[i]));
	}
}
