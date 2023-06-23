#include<stdio.h>
int main() {
	printf("Enter the size of array => \n");
	int n;
	scanf("%d",&n);
	// create an array of size n
	int a[n];
	int i;
	// enter elements of array
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	// print all the array of elements
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
