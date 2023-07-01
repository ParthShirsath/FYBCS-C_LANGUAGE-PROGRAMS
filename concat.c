

#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30],s2[30];
	printf("Enter the first string=\n");
	gets(s1);
	printf("Enter the second string=\n");
	gets(s2);
	strcat(s1,s2);
	printf("\nfirst string=%s",s1);
	printf(" \nsecond string=%s",s2);
}