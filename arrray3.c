#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n%d\n",sum);
	return 0;
}
