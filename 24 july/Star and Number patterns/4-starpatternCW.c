#include<stdio.h>
int main()
{
	int r,c,t;
	for(r=1;r<=3;r++)
	{
		for(t=3;t>r;t--)
		   printf(" ");
		for(c=1;c<=r;c++)
		   printf("*");
		printf("\n");   
	}
	for(r=1;r<=2;r++)
	{
		for(t=1;t<=r;t++)
		   printf(" ");
		for(c=2;c>=r;c--)
		   printf("*");
		printf("\n");   
	}
	/*	
		--*
		-**
		***
		-**
		--*		

*/
	return 0;
}
