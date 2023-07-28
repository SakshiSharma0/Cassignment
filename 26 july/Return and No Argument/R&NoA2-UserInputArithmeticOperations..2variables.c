//Return and No argument user input

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
	printf("Subtraction of a and b : %d",subt);

	int multi=mul();
	printf("Multiplication of a and b : %d",multi);

	int rem=div();
	printf("Division of a and b : %d",rem);
	
	int modd=mod();
	printf("Modulation of a and b : %d",modd);
	return 0;
}

int add()
{
	printf("\n\nEnter two value to add: ");    
	scanf("%d%d",&a,&b);
	return a+b;
}
int sub()
{
	printf("\n\nEnter two value to sub: ");    
	scanf("%d%d",&a,&b);
	return a-b;
}
int div()
{
	printf("\n\nEnter two value to div: ");    
	scanf("%d%d",&a,&b);
	return a/b;
}
int mul()
{
	printf("\n\nEnter two value to mul: ");    
	scanf("%d%d",&a,&b);
	return a*b;
}
int mod()
{
	printf("\n\nEnter two value to mod: ");    
	scanf("%d%d",&a,&b);
	return a%b;
}
