#include<stdio.h>

int main()
{
	int i=1,t=2;
	printf("---Table of 2---\n");
	while(i<=10)
	{
	    printf("%d * %d = %d\n",t,i,t*i);
	    i++;
	}
	return 0;
}
