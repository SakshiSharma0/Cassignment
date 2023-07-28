//No return and No argument

#include<stdio.h>
void add();
void sub();
void div();
void mul();

double a,b;
int main()
{
	printf("--------double datatype---------");
	add();
	sub();
	div();
	mul();
	
	return 0;
}

void add()
{
	a=90.89;
	b=12.245; 
	double res=a+b;
	printf("\nAddition of a and b : %lf",res);
}
void sub()
{
	a=100.12;
	b=56.078; 
	double res=a+b;
	printf("\nSubtraction of a and b : %lf",res);
}
void div()
{
	a=72.54;
	b=3.2;
	double res=a/b;
	printf("\nDivision of a and b : %lf",res);
}
void mul()
{
	a=34.5478;
	b=100.678;
	double res=a*b;
	printf("\nMultiplication of a and b : %lf",res);
}

