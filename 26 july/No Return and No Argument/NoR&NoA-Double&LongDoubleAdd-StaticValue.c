//No return and No argument -- user

#include<stdio.h>
void add();

int main()
{
	printf("--------double and long double datatype---------");
	add();	
	return 0;
}
void add()
{
	double m=23.456;
	long double n=234543.563427;
	long double res=m+n;
	printf("\n\nAddition of %lf and %Lf is : %Lf",m,n,res);
}
