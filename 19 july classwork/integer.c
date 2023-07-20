#include<stdio.h>

int main()
{
	int n;
	printf("Enter a integer: ");
	scanf("%d",&n);
	
	if(n>0)
		printf("Positive Integer");	
	else if(n<0)
		printf("Negative Integer");	
	else
	    printf("Integer is Zero");	
}
