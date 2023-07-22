#include<stdio.h>

int main()
{
	int a,no,i=0;
	printf("Enter a number: ");
	scanf("%d",&no);
	a=no;
	while(a!=0)
	{
        a/=10;
        i++;
	}
	printf("%d Digits in %d\n",i,no);
	
	return 0;
}
