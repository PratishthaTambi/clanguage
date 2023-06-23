#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ans= a[0];
	for(i=0;i<n;i++)
	{
		if(ans<a[i])
		ans= a[i];
		
		
	}
	printf("%d\n",ans);
	int ans1=a[0];
	for(i=0;i<n;i++)
	
	{
			
		if(ans1>a[i])
		ans1= a[i];
	}
		printf("%d",ans1 );
		return 0;
		
	}
