#include<stdio.h>
int main() {
	int n,count=0,sum;
	
	scanf("%d", &n);
	while(n!=0)
	{
		n = n/10;
		count++;
	}

	sum= sum + n ;
	printf("%d",sum);
	return 0;
}
