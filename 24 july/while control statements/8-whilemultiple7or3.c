#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two no: ");
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        if(a%7==0 || a%3==0)
        printf("%d ",a);
        a++;
    }
    return 0;
}

