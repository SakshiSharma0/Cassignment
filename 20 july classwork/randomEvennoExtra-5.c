#include<stdio.h>

int main()
{
	int start,end;
	printf("Enter any 2 random no's to print even no's : ");
	scanf("%d %d",&start,&end);
	while(start<=end)
	{
	   if(start%2==0)
	      printf("%d \t",start);
	   start++;
    }
	return 0;
}
