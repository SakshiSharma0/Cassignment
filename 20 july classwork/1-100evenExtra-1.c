#include<stdio.h>

int main()
{
	int i=1;
	printf("1-100 Even Numbers\n");
	while(i<=100)
	{
	   if(i%2==0)
	      printf("%d \t",i);
	   i++;
	}
	return 0;
}
