#include<stdio.h>

int main()
{	
    char client;
	printf("Enter c/r for customer or retailer: ");
	scanf("%c",&client);	
	
	if(client=='c')
	{
		int no,order,discount,Gpay,Npay;
	    char name[20];
		//printf("Welcome customer!\n Enter your name: ");
	    //gets(name);
	    //printf("\nEnter your contact number : ");
	    //scanf("%d",&no);
	    printf("\nEnter order pieces no : ");
	    scanf("%d",&order);
	    
	    if(order>=100 && order<=1000)
	        discount=5;
	    else if(order>=1000 && order<2000)
	        discount=10;
	    else if(order>=2000 && order<3000)
	        discount=15;
	    else if(order>=3000)
	        discount=30;
	    
	    
		Gpay=order*100;    
	    Npay=Gpay-(Gpay*discount/100);
	    printf("\nCustomer name : %s\nContact Number = %d\nOrder : %d \n",name,no,order);
		printf("Payment : %f\nDiscount : %d\nTotal payment = %fRs",Gpay,discount,Npay);
	}
	else if(client=='r')
	{
		int no,order,discount;
	    char name[20];
		//printf("Welcome retailer!\n Enter your name: ");
	    //gets(name);
	    //printf("\nEnter your contact number : ");
	    //scanf("%d",&no);
	    printf("\nEnter pieces no : ");
	    scanf("%d",&order);
	    
	    if(order>=1 && order<=15)
	        discount=15;
	    else if(order>=16 && order<=30)
	        discount=30;
	    else if(order>=31 && order<=50)
	        discount=50;
	    else 
	        discount=0;
	    
	    printf("\nRetailer name : %s\nContact Number = %d\nPieces : %d \n",name,no,order);
		printf("Discount : %d",discount);
	}	
	else
	{
		printf("Enter valid choice!");
	}	
		
	return 0;
}
