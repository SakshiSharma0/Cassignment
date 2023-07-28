//No return and argument user input

#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void div(int a,int b);
void mul(int a,int b);
void mod(int a,int b);
int main()
{
	int a,b;
	printf("--------------Arithmetic Operations-------------\n");
	printf("Enter a value : ");    
	scanf("%d",&a);
	printf("Enter b value : ");    
	scanf("%d",&b);
	
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
	mod(a,b);
	return 0;
}

void add(int a,int b)
{
	int res=a+b;
	printf("\n\nAddition of a and b : %d",res);
}
void sub(int a,int b)
{
	int res=a-b;
	printf("\nSubtraction of a and b : %d",res);
}
void div(int a,int b)
{
	int res=a/b;
	printf("\nDivision of a and b : %d",res);
}
void mul(int a,int b)
{
	int res=a*b;
	printf("\nMultiplication of a and b : %d",res);
}
void mod(int a,int b)
{
	int res=a%b;
	printf("\nModulation of a and b : %d",res);
}
