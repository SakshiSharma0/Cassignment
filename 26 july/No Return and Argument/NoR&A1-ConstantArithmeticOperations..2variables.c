//No return and argument

#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void div(int a,int b);
void mul(int a,int b);
void mod(int a,int b);
int main()
{
	int a,b;
	a=54;
	b=12;      //12-->b-->a
	
	add(a,b);
	sub(a,b);
	div(a,b);
	mul(a,b);
	mod(a,b);
	return 0;
}

void add(int a,int b)
{
    int res=a+b;
	printf("Add : %d",res);
}
void sub(int a,int b)
{
	int res=a-b;
	printf("\nSub : %d",res);
}
void div(int a,int b)
{
	int res=a/b;
	printf("\nDiv : %d",res);
}
void mul(int a,int b)
{
	int res=a*b;
	printf("\nMul : %d",res);
}
void mod(int a,int b)
{
	int res=a%b;
	printf("\nMod : %d",res);
}
