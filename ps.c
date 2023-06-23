#include<stdio.h>
int main(){
	int n,pos1,pos2;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			pos1=i+1;
		}
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			pos2=i+1;
		}
	}
	printf("max=%d at pos1=%d\n",max,pos1);
	printf("min=%d at pos2=%d\n",min,pos2);
}
