//Return and argument
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int mul(int a,int b);
int mod(int a,int b);

int main()
{
	int a,b;
	a=54;
	b=12;      
	printf("--------------Arithmetic Operations-------------\n");
	int ad=add(a,b);
	printf("Addition of a and b : %d",ad);
	int subt=sub(a,b);
	printf("\nSubtraction of a and b : %d",subt);
	int multi=mul(a,b);
	printf("\nMultiplication of a and b : %d",multi);
	int rem=div(a,b);
	printf("\nDivision of a and b : %d",rem);
	int modd=mod(a,b);
	printf("\nModulation of a and b : %d",modd);

	return 0;
}
int add(int a,int b)
{
	return a+b;	
}
int sub(int a,int b)
{
	return a-b;
}
int div(int a,int b)
{
	return a/b;	
}
int mul(int a,int b)
{
	return a*b;
}
int mod(int a,int b)
{
	return a%b;
}

