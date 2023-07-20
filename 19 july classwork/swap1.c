//number swap
#include<stdio.h>

int main()
{
	int a=12;
	int b=33;
	printf("Value of a : %d",a);
	printf("\nValue of b : %d",b);
	
	//logic1
	a = a+b;  //45
	b = a-b;  //45-33=12
	a = a-b;  //45-12=33
	

	
	printf("\n\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
