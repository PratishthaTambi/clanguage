#include<stdio.h>
int main() {
	int a,b;
	printf("enter cost price\n");
	scanf("%d", &a);
	
	printf("enter selling price\n");
	scanf("%d", &b);
	
	
	if(a<b)
	{
	printf("profit");
	}
	
	
	 
	else 
	if (a>b)
	{
	
	printf("loss");
}
    
    
    else
    printf("no profit or no loss happened");
    return 0;
    
	
}
