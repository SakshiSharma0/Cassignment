#include<stdio.h>
int main()
{
    int i,j,a;
    for(a=1;a<=3;a++)
    {
        for(i=1;i<=a;i++)
            printf("#");
        for(j=3;j>a;j--)
            printf("*");
        printf("\n");
    }
	printf("\n");
    for(a=1;a<=3;a++)
    {
    	for(j=3;j>=a;j--)
            printf("*");
        for(i=1;i<a;i++)
            printf("#");
        printf("\n");
    }
    return 0;
}

