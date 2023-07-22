#include<stdio.h>

int main()
{
	int i=1,t;
	printf("Enter a no to print it's table : ");
	scanf("%d",&t);
	printf("---Table of %d---\n",t);
	while(i<=10)
	{
	    printf("%d * %d = %d\n",t,i,t*i);
	    i++;
	}
	return 0;
}
