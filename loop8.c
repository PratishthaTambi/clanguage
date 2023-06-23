#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	
	int lastdigit= n%10 ;
	while(n>=10)
	{
	n=	n/10;
	
	}
	int firstdigit= n;
	printf("first digit\n and last digit %d%d", firstdigit , lastdigit);
	return 0;
}
