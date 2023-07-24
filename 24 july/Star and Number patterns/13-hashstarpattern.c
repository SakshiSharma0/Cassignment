#include<stdio.h>
int main()
{
    int i,j,a;
    for(a=1;a<=3;a++)
    {
        for(i=2;i>=a;i--)
            printf("#");
        for(j=1;j<=a;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
