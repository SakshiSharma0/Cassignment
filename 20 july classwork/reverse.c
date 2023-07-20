#include<stdio.h>

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	int rem,sum=0;
	while(a>0)
	{
		rem=a%10;                 //500%10=0           
		sum=sum*10+rem;            //0*10+0
		a=a/10;		               //500/10=50
	}
	printf("%d\n",sum);
	
	return 0;
}
