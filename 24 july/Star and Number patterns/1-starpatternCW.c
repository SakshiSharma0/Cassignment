#include<stdio.h>
int main()
{
	int r,c,t,n;
	printf("Enter rows of star pattern : ");
	scanf("%d",&n);
	for(r=0;r<n;r++)
	{
		for(t=n;t>r;t--)
		   printf(" ");
		for(c=0;c<=r;c++)
		   printf("*");
		printf("\n");   
	}
	/*	
		--*   with user input
		-**
		***
*/
	return 0;
}
