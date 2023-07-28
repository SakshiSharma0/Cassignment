#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number to check : ");
	scanf("%d",&a);
	int rem,c,sum=0;
	int check=a;
	while(a>0)   //a!=0
	{
		rem=a%10; 
		c=rem*rem*rem;                        
		sum=sum+c;            
		a=a/10;		               
	}
	
	if(sum==check)
		printf("\n%d Armstrong! ",sum);
	else
		printf("\n%d Not a Armstrong! ",sum);
	
	return 0;
}
