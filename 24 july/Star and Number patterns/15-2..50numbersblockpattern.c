#include<stdio.h>
int main()
{
    int j,count=1;   
        for(j=1;j<=25;j++)
        { 
		   printf("%d    ",2*j);
           if(count==5)  
		   {
		   	   printf("\n"); 
			   count=0;
		   }                   
           count++;
        }  
    return 0;
}

