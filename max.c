#include<stdio.h>
int main () {
	int a,b,c;
	printf("enter 3 number");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c )
{   printf("a is maximum");
}
	else
	if(a<b && b>c)
	{ 
	printf("b is maximum");
	}
else 
{   printf("c is maximum");
}
    	return 0;
}
