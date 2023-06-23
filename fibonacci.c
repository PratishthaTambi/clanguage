#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int count=2;
	int first=1;
	int second=1;
	printf("%d\n", first);
	printf("%d\n",second);
	int tem;
	while(count<n)
	{
		tem=first;
		first =second;
		second=first+tem;
		printf("%d\n",second);
		count++;
	}
	return 0;
}
