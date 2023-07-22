#include<stdio.h>
int main()
{
	int a=1,b;
	for(;a<=3;a++)
	{
		for(b=3;b>=a;b--)
		    printf("*\t");
		printf("\n");
	}
	
	return 0;
}
