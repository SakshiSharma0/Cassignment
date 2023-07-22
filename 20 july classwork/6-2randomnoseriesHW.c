#include<stdio.h>

int main()
{
	int one,two;
	printf("Enter any 2 random no's to print series : ");
	scanf("%d %d",&one,&two);
	
	while(one<=two)
	{
	    printf("%d \t",one);
	    one++;
    }
	return 0;
}
