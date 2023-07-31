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
	double m;
	long double n;
	printf("\n\nEnter a double type value to add: ");    
	scanf("%lf", &m);
	printf("\nEnter a long double type value to add: ");    
	scanf("%Lf", &n);
	long double res=m+n;
	printf("Addition of %lf and %Lf is : %Lf",m,n,res);
}
