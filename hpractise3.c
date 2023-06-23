#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++)
	
	{
	scanf("%d",&arr[i]);
	  	
	}
	for(i=0;i<n;i++)
	{
	
	printf("%d\t", arr[i]);
}
    int sum=0;
    for(i=0;i<n;i++)
    {
    	sum= sum+arr[i] ;;
     	
	}
	printf("\n%d\n", sum);
	return 0;
}
