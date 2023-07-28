#include<stdio.h>
int add(int a,int b);

int main()
{
	int a,b;
	a=12;
	b=46;
	//printf("Enter 2 no's to add : ");
	//scanf("%d%d",&a,&b);
	add(a,b);
	
	int res=printf("Add : %d",result);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}

