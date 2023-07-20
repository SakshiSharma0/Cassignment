#include<stdio.h>

int main()
{
	int i=100;
	printf("1-100 Even Numbers\n");
	while(i>=1)
	{
	   if(i%2==0)
	      printf("%d \t",i);
	   i--;
	}
	return 0;
}
