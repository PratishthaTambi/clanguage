#include<stdio.h>
int main() {
	int arr[8] = {1,3,5,7,9,11,13,14};
	int i;
	for( i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	for( i=0;i<8;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
	
}
