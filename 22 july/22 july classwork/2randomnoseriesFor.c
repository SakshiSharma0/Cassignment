#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 random numbers to print series : ");
	scanf("%d%d",&a,&b);
	for(;a<=b;a++)    //for(;;)
	{
		printf("%d\t",a);
	}
	
	return 0;
}
