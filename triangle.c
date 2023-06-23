#include<stdio.h>
int main() {
	int a,b,c;
	printf("enter 3 sides\n");
	scanf("%d%d%d", &a,&b,&c);
	
	if (a==b && b==c)
	printf("it is a equiletral triangle");
	
	else
	if (a==b || b==c || a==c)
	printf("it is a isosceles triangle");
	
	else
	printf("it is a scalene triangle");
	
	return 0;
}
