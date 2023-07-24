#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++,count++)
                printf("%d   ",count);
        printf("\n");
    }
       printf("\n");
	   count=1; 
	for(j=1;j<=12;j++)
    { 
		   printf("%d ",j);
           if(count==4)  
		   {
		   	   printf("\n"); 
			   count=0;
		   }                   
           count++;
    }  
    
    return 0;
}

