#include<stdio.h>

int main()
{
	int age;											
	printf("Enter your age : ");
	scanf("%d",&age);
	
	if(age>=18)											
	{
		printf("\nEligible for vote");
	}
	else										
	{
		printf("\nNot a eligible voter!");
	}
	return 0;
}
