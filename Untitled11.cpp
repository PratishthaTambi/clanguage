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
	int ans= arr[0];
	for(i=0;i<n;i++)
	{
		if(ans<arr[i])
		ans=arr[i];
	}
	printf("%d",ans);
	return 0;
}
