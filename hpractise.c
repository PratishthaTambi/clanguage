#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d\t",&arr[i]);
	
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return; 
}
