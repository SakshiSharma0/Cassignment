#include<stdio.h>
int main()
{
	int sum=0,rem,a;
	printf("Enter a number to check : ");
	scanf("%d",&a);
	int temp=a;
	while(a>0)
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
	}
	if(sum==temp)
	   printf("\n%d is Palindrome",sum);
	else 
	   printf("\n%d is not Palindrome",sum);
	return 0;
}
