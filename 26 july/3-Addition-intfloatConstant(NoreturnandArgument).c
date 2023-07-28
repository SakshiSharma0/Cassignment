#include<stdio.h>
void add(int a,float b);

int main()
{
	const int a=10;
	const float b=12.34;
	add(a,b);
	return 0;
}

void add(int a,float b)
{
	float c=a+b;	
	printf("Add : %f",c);
}

