//return and No argument
#include<stdio.h>
int add();
int sub();
int div();
int mul();
int mod();
int a,b;
int main()
{
	printf("--------------Arithmetic Operations-------------\n");

	int ad=add();
	printf("Addition of a and b : %d",ad);
	
	int subt=sub();
	printf("\nSubtraction of a and b : %d",subt);

	int multi=mul();
	printf("\nMultiplication of a and b : %d",multi);

	int rem=div();
	printf("\nDivision of a and b : %d",rem);
	
	int modd=mod();
	printf("\nModulation of a and b : %d",modd);

	return 0;
}

int add()
{
	a=90;
	b=12; 
	return a+b;	
}
int sub()
{
	a=100;
	b=56; 
	return a-b;
}
int div()
{
	a=72;
	b=3;
	return a/b;	
}
int mul()
{
	a=34;
	b=100;
	return a*b;
}
int mod()
{
	a=101;
	b=25;
	return a%b;
}
