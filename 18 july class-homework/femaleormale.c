#include<stdio.h>

int main()
{

	int ch;										
	printf("Enter your gender(f/m): ");
	scanf("%c",&ch);
	
	
	if(ch=='f' || ch=='F')									
	{
		printf("\nFemale");
		return 0;
	}
	
	
    if(ch=='m' || ch=='M')									
	{
		printf("\nMale");
	}
	else
	{
		printf("\nOther");
	}
	return 0;	
}
