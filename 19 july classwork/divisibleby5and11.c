#include<stdio.h>

int main()
{

	int a;										
	printf("Enter a number : ");
	scanf("%d",&a);
	
	
	if(a%5==0 && a%11==0)									
	{
		printf("\nDivisible by 5 and 11 both");
	}
	else												
	{
		printf("\nNot divisible");
	}
	
	return 0;	
}
