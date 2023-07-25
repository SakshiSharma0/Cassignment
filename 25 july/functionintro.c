//function with return type and argument(single variable))

#include<stdio.h>
int show(int a);   //parameter (function declaration)

int main()
{	
	int f=show(3);     //function call
	
	printf("%d",f);
	return 0;
}
int show(int a)      //function definition
	{
		return a;
	}
