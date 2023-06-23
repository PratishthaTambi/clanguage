#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,s,j;
	for(i=1;i<=n;i++)
	{
		for(s=n-i;s>=1;s--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(s=1;s<=i;s++)
		{
			printf(" ");
		}
		for(j=n-1;j>=i;j--){
		
		printf("*");
	}
	printf("\n");
	}
	return 0;
	
}
