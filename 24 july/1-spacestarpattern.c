#include<stdio.h>
int main()
{
	int r,c,t;
	for(r=0;r<5;r++)
	{
		for(t=4;t>=r;t--)
		   printf(" ");
		for(c=0;c<=r;c++)
		   printf("*");
		printf("\n");   
	}
	
	return 0;
}
