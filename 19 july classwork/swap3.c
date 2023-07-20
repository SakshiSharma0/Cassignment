//number swap
#include<stdio.h>

int main()
{
	int a=12;
	int b=33;
	printf("Value of a : %d",a);
	printf("\nValue of b : %d",b);
	
    int c;
    //logic3
    c=a;
    a=b;
    b=a;
	
	printf("\n\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
