#include<stdio.h>
int add();

int main()
{
	int result=add();
	printf("Add : %d",result);
	return 0;
}

int add()
{
	int a,b;
	printf("Enter 2 no's to add : ");
	scanf("%d%d",&a,&b);
	return a+b;
}

