//No return and No argument

#include<stdio.h>
void add();
void sub();
void div();
void mul();
void mod();
int a,b;
int main()
{
	
	add();
	sub();
	div();
	mul();
	mod();
	return 0;
}

void add()
{
	a=90;
	b=12; 
	int res=a+b;
	printf("\n\nAddition of a and b : %d",res);
}
void sub()
{
	a=100;
	b=56; 
	int res=a+b;
	printf("\nSubtraction of a and b : %d",res);
}
void div()
{
	a=72;
	b=3;
	int res=a/b;
	printf("\nDivision of a and b : %d",res);
}
void mul()
{
	a=34;
	b=100;
	int res=a*b;
	printf("\nMultiplication of a and b : %d",res);
}
void mod()
{
	a=100;
	b=10;
	int res=a%b;
	printf("\nModulation of a and b : %d",res);
}
