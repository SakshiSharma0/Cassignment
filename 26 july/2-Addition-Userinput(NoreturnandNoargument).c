#include<stdio.h>
void add();

int main()
{
	add();
	return 0;
}

void add()
{
	int a,b;
	printf("Enter 2 no's to add : ");
	scanf("%d%d",&a,&b);
	printf("Add : %d",a+b);
}

