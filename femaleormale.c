#include<stdio.h>

int main()
{

	int ch;										
	printf("Enter your gender(f/m): ");
	scanf("%c",&ch);
	
	
	if(ch=='f' || ch=='F')									
	{
		printf("\nFemale");
	}
    if(ch=='m' || ch=='M')									
	{
		printf("\nMale");
	}
	else
	{
		printf("\nInvalid");
	}
	return 0;	
}
