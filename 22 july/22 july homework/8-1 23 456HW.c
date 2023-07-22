#include<stdio.h>
int main()
{
	int r,c,count=0;
	for(r=1;r<=3;r++)
	{
		for(c=1;c<=r;c++)
		{
			count++;
			printf("%d ",count); 
	    }		   
		printf("\n");		
	}	 
	return 0;
}
