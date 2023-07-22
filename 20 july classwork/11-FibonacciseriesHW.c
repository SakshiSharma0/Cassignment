#include<stdio.h>

int main()
{
	int i=0,n,a=0,b=1,sum=0;
	printf("Enter a no for Fibonacci Series: \n");
	scanf("%d",&n);
	while(i<=n)
	{
	    printf("%d\t",a);
	    sum=a+b;
	    a=b;
	    b=sum;	    
	    i++;
	}
	return 0;
}
