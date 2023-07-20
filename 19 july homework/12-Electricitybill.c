#include<stdio.h>

int main()
{
	int discount,units,amount;
	float pay;
	printf("Enter your electricity units consumed : ");
	scanf("%d",&units);		
	
	if(units>=1 && units<=10)
	   discount=10;
	else if(units>=11 && units<=20)
	   discount=15;
    else if(units>=21 && units<=40)
	   discount=30;	
	else if(units>=40)
	   discount=50;
	
	amount=units*10;
	pay=amount-(amount*discount/100);
	printf("\nUnit : %d\nAmount = %d\nDiscount : %d % \nTotal pay amount = %fRs",units,amount,discount,pay);
		
	return 0;
}
