#include<stdio.h>
int add(int a,int b); //parameter(function declaration)

int sub(int a,int b)      //function definition
	{
		return a-b;
	}
	
int mul(int a,int b)      //function definition
	{
		return a-b;
	}
int div(int a,int b)      //function definition
	{
		return a/b;
	}
int mod(int a,int b)      //function definition
	{
		return a%b;
	}
int main()
{	
	int r=add(12,23);     //function call(arguments)
	
	printf("Addition of 2 no's is : %d",r);
	printf("\nSubtraction of 2 no's is : %d",sub(20,3));
	printf("\nMultiplication of 2 no's is : %d",mul(20,3));
	printf("\nDivision of 2 no's is : %d",div(21,3));
	printf("\nModulation of 2 no's is : %d",mod(20,3));
	return 0;
}
int add(int a,int b)      //function definition
	{
		return a+b;
	}
	

