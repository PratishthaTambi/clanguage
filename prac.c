#include<stdio.h>
int  main() {
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("\n the first element\t");
		for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		
	}
	printf("\n the second element\t");
	for(i=0;i<n;i++){
	
    printf("%d\t",b[i]);}
    return 0;
}
