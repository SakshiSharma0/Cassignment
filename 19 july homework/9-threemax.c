#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter a,b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		if(a>c)
		    printf("A is max");
		else
		    printf("C is max");
	}
	else
	{
	    if(b>c)
		    printf("B is max");
		else
		    printf("C is max");	
	}
		
	return 0;
}
