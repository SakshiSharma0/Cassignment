#include<stdio.h>
int main()
{
	int r,c,t;

	for(r=0;r<3;r++)
	{
		for(t=0;t<=r;t++)
		   printf(" ");
		for(c=3;c>r;c--)
		   printf("*");
		printf("\n");   
	}
	/*	
		***  with user input
		-**
		__*
*/
	return 0;
}
