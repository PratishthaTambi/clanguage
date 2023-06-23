#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n],e[n],o[n],x=0,y=0;
	int i;
    for(i=0;i<n;i++);
    {
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++);
	{
		if(a[i]%2== 0)
		{
		e[x]=a[i];
		x++;
	    }
	    else
	    {
	    	o[y++]=a[i];
		}
		
	} 
	printf("\n even array %d\n",x);
	for(i=0;i<n;i++)
	{
		printf("%d\t",e[i]);
	}
	printf("\n odd array %d\n",y);
	for(i=0;i<n;i++)
	{
		printf("%d\t",o[i]);
	}
	return 0;
}

