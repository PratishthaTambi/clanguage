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
	int key;
	scanf("%d",&key);
	printf("%d\n",key);
	for(i=0;i<n;i++)
	{
		if (a[i]==key)
		{
			printf("%d fount the position %d",key,i+1);
			return 0;
		}
	
		
	}
	printf("key is not found %d",key);
	
}
