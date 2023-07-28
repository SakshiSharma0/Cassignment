#include<stdio.h>
void div(int a,float b);
void multi(int a,float b);

int main()
{
	const int a=31;
	const float b=12.34;
	div(a,b);
    multi(a,b);
	return 0;
}

void div(int a,float b)
{	
	printf("Divide : %f",a/b);
}
void multi(int a,float b)
{ 	
	printf("\nMultiply : %f",a*b);
}

