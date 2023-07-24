#include<stdio.h>
int main()
{
	int r,c,t;
	for(r=1;r<=3;r++)
	{
		for(t=1;t<=r;t++)
		   printf("-");
		for(c=3;c>=r;c--)
		   printf("*");
		printf("\n");   
	}
	
	return 0;
}
