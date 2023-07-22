#include<stdio.h>

int main()
{
	int i;//k;
	int a,b;
	printf("Enter 2 random numbers to print tables : ");
	scanf("%d%d",&a,&b);	
	for(;a<=b;a++)     //for(k=a;k<=b;k++)
	{
	      printf("\n-------Table of %d-------\n",a);  //k
	      for(i=1;i<=10;i++)
	      {
	         printf("%d * %d = %d\n",a,i,i*a);        //k,i,i*k
	      }
    }
	return 0;
}
