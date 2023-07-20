#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number to check paliondrome: ");
	scanf("%d",&a);
	
	int rem,sum=0;
	int check=a;
	while(a>0)   //a!=0
	{
		rem=a%10;                         
		sum=sum*10+rem;            
		a=a/10;		               
	}
	
	if(sum==check)
	{
		printf("%d\nPalindrome! ",sum);
	}
	else
	{
		printf("%d\nNot a Palindrome! ",sum);
	}
	
	return 0;
}
