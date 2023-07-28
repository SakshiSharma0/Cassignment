#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 3 value : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	    printf(" A Max");
	else if(b>a && b>c)
	    printf(" B Max");
	else
	    printf(" C Max");

    return 0;
}
