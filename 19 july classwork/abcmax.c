#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a,b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c)
		printf("A is max");
	else if(b>a && b>c)
		printf("B is max");
	else
		printf("C is max");	
}
