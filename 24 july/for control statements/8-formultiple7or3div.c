
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    for(;a<=b;a++)
    {
        if(a%7==0 || a%3==0)
        printf("%d ",a);
    }
    return 0;
}
