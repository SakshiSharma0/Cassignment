#include<stdio.h>

int main()

{
	int a=67;
	int b=3;
	int c=2;
	int d=34;	
	int e=5;
	
	int res=a+b*c-(d-c*e);
	//1) 67+3*2+(34-2*5) 

	printf("Operation res is: %d",res);
	return 0;
}
