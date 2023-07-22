#include<stdio.h>

int main()
{
	int n,num=2,j=0;
	printf("Enter a number: ");
	scanf("%d",&n);

	while(j<n)
	{
		int prime=1;
		int i=2;
		while(i<num)
	    {
		    if(num%i==0)
		    {
		       prime=0;	
		       break;
			}		       
            i++;
	    }
	    if(prime)
	    {
	    	printf("%d \t",num);
		    j++;
		}
	     
		num++;  
	}

	
	return 0;
}
