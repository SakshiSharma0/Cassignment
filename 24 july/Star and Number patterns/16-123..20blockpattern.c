#include<stdio.h>
int main()
{
    int i,j,count=1,sum=0;
    
	for(j=1;j<=20;j++)
        {            
            printf("%d ",j);            
            if(count==5)
            {
               printf("\n");
			   count=0;	
			}
			count++;
        }   
	/*for(i=1;i<=5;i++)
    {
        for(j=0;j<=4;j++)
        {
            sum=sum+count;
            printf("%d",sum);
        }
        printf("\n");
        count++;
        sum=0;
    }*/
}

