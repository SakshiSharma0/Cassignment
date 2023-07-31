//No return and No argument -- user

#include<stdio.h>
void add();
void sub();
void div();
void mul();


int main()
{
	printf("--------double datatype---------");
	add();
	sub();
	mul();
	div();	
	return 0;
}

void add()
{
	double a,b;
	printf("\n\nEnter two value to add: ");    
	scanf("%lf%lf",&a,&b);
	double res=a+b;
	printf("Addition of a and b : %lf",res);
}
void sub()
{
	double a,b;
	printf("\n\nEnter two value to sub: ");    
	scanf("%lf%lf",&a,&b);
	double res=a-b;
	printf("Subtraction of a and b : %lf",res);
}
void div()
{
	double a,b;
	printf("\n\nEnter two value to div: ");    
	scanf("%lf%lf",&a,&b);
	double res=a/b;
	printf("Division of a and b : %lf",res);
}
void mul()
{
	double a,b;
	printf("\n\nEnter two value to mul: ");    
	scanf("%lf%lf",&a,&b);
	double res=a*b;
	printf("Multiplication of a and b : %lf",res);
}

