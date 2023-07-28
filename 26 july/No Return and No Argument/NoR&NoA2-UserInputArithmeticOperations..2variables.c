//No return and No argument user input

#include<stdio.h>
void add();
void sub();
void div();
void mul();
void mod();
int a,b;
int main()
{
	printf("--------------Arithmetic Operations-------------\n");
	
	add();
	sub();
	mul();
	div();
	mod();
	return 0;
}

void add()
{
	printf("\n\nEnter two value to add: ");    
	scanf("%d%d",&a,&b);

	int res=a+b;
	printf("Addition of a and b : %d",res);
}
void sub()
{
	printf("\n\nEnter two value to sub: ");    
	scanf("%d%d",&a,&b);
	int res=a-b;
	printf("Subtraction of a and b : %d",res);
}
void div()
{
	printf("\n\nEnter two value to div: ");    
	scanf("%d%d",&a,&b);
	int res=a/b;
	printf("Division of a and b : %d",res);
}
void mul()
{
	printf("\n\nEnter two value to mul: ");    
	scanf("%d%d",&a,&b);
	int res=a*b;
	printf("Multiplication of a and b : %d",res);
}
void mod()
{
	printf("\n\nEnter two value to mod: ");    
	scanf("%d%d",&a,&b);
	int res=a%b;
	printf("Modulation of a and b : %d",res);
}
