#include<stdio.h>

int main()
{
	int a,b,c,d,e;
	printf("Enter 5 value : ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e)
	    printf(" A Max");
	else if(b>a && b>c && b>d && b>e)
	    printf(" B Max");
	else if(c>a && c>b && c>d && c>e)
	    printf(" C Max");
	else if(d>a && d>c && d>b && d>e)
	    printf(" D Max");
	else if(e>a && e>c && e>b && e>d)
	    printf(" E Max");
	else
	    printf(" Equal");

    return 0;
}
