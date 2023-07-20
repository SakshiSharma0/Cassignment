#include<stdio.h>
#include<ctype.h>
int main()
{
	int n;										
	printf("Enter a number : ");
	scanf("%d",&n);	
 	
	    if(n%3==0 || n%7==0)									
		   printf("\nDivisible by either 3 or 7");
	    else												
		   printf("\nNot divisible");
   
	return 0;	
}
