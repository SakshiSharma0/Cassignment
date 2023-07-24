#include<stdio.h>
int main()
{
    int i,j,t;
    for(i=1;i<=4;i++)
    {
        for(t=1;t<i;t++)
            printf(" ");
        for(j=4;j>=i;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
