#include<stdio.h>
int main()
{
	int i,b;
	printf("Enter start and end range of even numbers : ");
	scanf("%d%d",&i,&b);
    while(i<=b)
	{
		if(i%2==0)
		   printf("%d\t",i);
		i++;
    }
    return 0;
}
