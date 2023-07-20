//number swap
#include<stdio.h>

int main()
{
	int a=12;
	int b=33;
	printf("Value of a : %d",a);
	printf("\nValue of b : %d",b);
	
	//logic2
	a=a*b;    //2*3=6   //10*20=200         //15*30=450
    b=a/b;    //6/3=2   //200/20=10         //450/30=15
    a=a/b;    //6/2=3   //200/10=20         //450/15=30
   
	
	printf("\n\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
