#include<stdio.h>
int main() {
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if (n%5==0 && n%11==0)
	printf("the number is divisible by 5 & 11");
	else
	printf("the number is not divisible");
	return 0 ;
	
}
