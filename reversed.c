#include<stdio.h>
int main() {
	int n, rev=0 ;
	scanf("%d", &n);
	while(n!=0)
	{
		int rem = n%10;
		rev = rev*10+rem;
		n= n/10;
	}
	printf("reversed is %d ", rev);
	return 0;
}
