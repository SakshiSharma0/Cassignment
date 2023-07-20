#include<stdio.h>

int main()
{
	int i=50;
	printf("50-1000 Even Numbers\n");
	while(i<=1000)
	{
	   if(i%2==0)
	      printf("%d \t",i);
	   i++;
	}
	return 0;
}
