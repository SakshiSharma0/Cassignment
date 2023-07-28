#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two values to swap: ");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("\n--------Swapped values are--------- ");
    printf("\n\nA : %d",a);
    printf("\nB : %d",b);
    return 0;
}
