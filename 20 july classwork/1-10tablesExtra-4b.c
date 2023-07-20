#include<stdio.h>

int main()
{
	int i=1;
	
	while(i<=10)
	{
	   printf("\n-------Table of %d-------\n",i);
	   
	   int k=1;
	   while(k<=10)
	   {
	      printf("%d * %d = %d\n",i,k,i*k);
	      k++;
	   }
	   i++;
    }
	return 0;
}
