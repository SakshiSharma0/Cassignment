//function with no return type and no argument
//function to add two numbers
#include<stdio.h>
void add(); //parameter(function declaration)

//prototype

void sub()      //function definition
{
	int a,b,c;
	printf("\nEnter two values : ");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("Subtraction of a & b is : %d",c);
}

void mul()      //function definition
{
	int a,b,c;
	printf("\nEnter two values : ");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("Multiplication of a & b is : %d",c);
}

void div()      //function definition
{
	int a,b,c;
	printf("\nEnter two values : ");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("Division of a & b is : %d",c);
}

void mod()      //function definition
{
	int a,b,c;
	printf("\nEnter two values : ");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("Modulation of a & b is : %d",c);
}


int main()
{	
	add();     //function call(arguments)
	sub();
	mul();
	div();
	mod();
	return 0;
}
void add()      //function definition
{
	int a,b,c;
	printf("\nEnter two values : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition of a & b is : %d",c);
}


