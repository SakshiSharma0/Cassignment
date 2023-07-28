#include<stdio.h>

int main()
{
	int a;
	printf("Enter your age : ");
	scanf("%d",&a);
	if(a>=18)
	    printf("Voter");
	else
	    printf("Not eligible");

    return 0;
}
