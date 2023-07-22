#include<stdio.h>
int main()
{
	int r,sum=0;
	for(r=1;r<=10;r++)
	{
		sum=sum+r;  
		printf("%d ",r);
	}
	printf("\nseries.. \n\nSum of 1..10 numbers: %d",sum); 
	return 0;
}
