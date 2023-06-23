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
	printf("%d\n",ans);
	int ans1= arr[0];
	for(i=0;i<n;i++)
	{
		if(ans1>arr[i])
		ans1=arr[i];
	}
	printf("%d\n ",ans1);
	
	return 0;
}
