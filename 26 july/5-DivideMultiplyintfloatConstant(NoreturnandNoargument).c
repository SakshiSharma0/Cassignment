#include<stdio.h>
void div();
void multi();

int main()
{
	div();
    multi();
	return 0;
}

void div()
{
    const int a=31;
	const float b=12.34;	
	printf("Divide : %f",a/b);
}
void multi()
{
    const int a=31;
	const float b=12.34;	
	printf("\nMultiply : %f",a*b);
}

