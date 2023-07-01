#include <stdio.h>
int main()
{
	int n,*x,m,*y;
	printf("enter two number=\n");
	scanf("%d%d",&n,&m);
	x=&n;
	y=&m;
	if(*x>*y)
	printf("%d is maximum number",*x);
	else
	printf("%d is maximum number",*y);
}
