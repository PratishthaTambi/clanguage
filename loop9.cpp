#include<stdio.h>
int main() {
	int n,sum=0;
	scanf("%d", &n);
	 
	 int lastdigit = n%10 ;
	 while(n<=10)
	  
	{
	 n=  n/10;
    } 
    int firstdigit = n  ;
    
    sum = (firstdigit + lastdigit) ;
    printf("sum of first digit and last digit %d%d" ,sum );
    
    return 0;
}
