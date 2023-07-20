#include<stdio.h>

int main()
{
	int a,b;
										
	printf("Enter a number : ");
	scanf("%d",&a);
	printf("Enter b number : ");
	scanf("%d",&b);
	
	if(a>b)											
		printf("\nA is greater than B");
	else
		printf("\nB is greater");
	
	return 0;
}
