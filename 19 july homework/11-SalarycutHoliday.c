#include<stdio.h>

int main()
{
	int bsal=50000;	
	int holiday;
	printf("Enter your Holidays : ");
	scanf("%d",&holiday);	
	
	int netSalary=0.0;	
	
	if(holiday==1)
	   netSalary=bsal;
	else if(holiday>=2 && holiday<=5)
	   netSalary=bsal-(bsal*5/100);
    else if(holiday>5 && holiday<=14)
	   netSalary=bsal-(bsal*10/100);	
	else if(holiday==15)
	   netSalary=(bsal*50)/100;
	else
       netSalary=0;	
	printf("\nSalary : %d\n Alot = %d",netSalary,holiday);
		
	return 0;
}
