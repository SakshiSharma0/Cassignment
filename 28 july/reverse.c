#include<stdio.h>
int main()
{
	int sum=0,rem,a=111999;
	int temp=a;
	while(a>0)
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	   printf("%d",sum);
	
	return 0;
}
