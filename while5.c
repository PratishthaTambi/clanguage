#include<stdio.h>
int main() {
	int n, count=0,sum=0;
	scanf("%d", &n);
	while(n!=0)
	{
		n= (n/10) ;
		count ++ ;
	
	}
	printf("%d\n", count);
	sum= (sum+n);
	printf("%d\n",sum);
	return 0;
}
