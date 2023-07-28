#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void div(int a,int b);
void mul(int a,int b);
int main()
{
	int a,b;
	a=b=12;      //12-->b-->a
	add(a,b);
	sub(a,b);
	div(a,b);
	mul(a,b);
}

void add(int a,int b)
{
	int c=a+b;
	printf("Add : %d",c);
}
void sub(int a,int b)
{
	int c=a-b;
	printf("\nSub : %d",c);
}
void div(int a,int b)
{
	int c=a/b;
	printf("\nDiv : %d",c);
}
void mul(int a,int b)
{
	int c=a*b;
	printf("\nMul : %d",c);
}
