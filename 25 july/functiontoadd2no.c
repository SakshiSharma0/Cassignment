//function with return type and argument(single variable))
//function to add two numbers
#include<stdio.h>
int add(int a,int b); //parameter(function declaration)

int main()
{	
	int r=add(12,23);     //function call(arguments)
	
	printf("Addition of 12 and 23 is : %d",r);
	return 0;
}
int add(int a,int b)      //function definition
	{
		return a+b;
	}
