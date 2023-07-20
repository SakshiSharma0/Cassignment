#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	int i=1;
	int fact=1;
	while(i<=a)
	{
		fact *=i;
		i++;
	}
	
	printf("%d",fact);
	return 0;
}
