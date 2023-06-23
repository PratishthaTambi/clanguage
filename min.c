#include<stdio.h>
int main () {
	int a,b;
	printf("enter 2 number");
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		printf("a is minimum");
}
	else
	if(a==b)
{
	printf("a is equal to b");
		}
	else
	printf("b is minimum");
	return 0;
}
