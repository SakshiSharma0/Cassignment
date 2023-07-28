#include<stdio.h>
void add();

int main()
{
	add();
	return 0;
}

void add()
{
    const int a=31;
	const float b=12.34;	
	printf("Add : %f",a+b);
}

