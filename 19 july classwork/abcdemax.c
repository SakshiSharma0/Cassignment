#include<stdio.h>

int main()
{	
	int a,b,c,d,e;
	printf("Enter a,b,c,d and e: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	
	if(a>b && a>c && a>d && a>e)
		printf("A is max");
	else if(b>a && b>c && b>d && b>e)
		printf("B is max");
	else if(c>a && c>b && c>d && c>e)
		printf("C is max");		
	else if(d>a && d>b && d>c && d>e)
		printf("D is max");		
	else if(e>a && e>b && e>c && e>d)
		printf("E is max");		
	else
		printf("All are equal");	
}
