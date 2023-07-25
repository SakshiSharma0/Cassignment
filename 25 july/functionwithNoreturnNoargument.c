//function with no return type and no argument
//function to add two numbers
#include<stdio.h>
void add(); //parameter(function declaration)
//prototype
int main()
{	
	add();     //function call(arguments)
	return 0;
}
void add()      //function definition
{
	int a,b,c;
	printf("Enter two values : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition is : %d",c);
}
