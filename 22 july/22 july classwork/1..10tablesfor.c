#include<stdio.h>

int main()
{
	int i,k;
		
	for(k=1;k<=10;k++)
	{
	      printf("\n-------Table of %d-------\n",k);
	      for(i=1;i<=10;i++)
	      {
	         printf("%d * %d = %d\n",k,i,i*k);
	      }
    }
	return 0;
}
