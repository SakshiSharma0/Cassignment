#include<stdio.h>
int swap1(int a,int b);
int swap2(int a,int b);
int swap3(int a,int b);

int main()
{
	int a,b;
	printf("Enter two value a,b  : ");
	scanf("%d %d",&a,&b);
	
	swap1(a,b);
	swap2(a,b);
	swap3(a,b);
	return 0;
}

int swap1(int a,int b)
{
	printf("\n\n----- Swapped using (* /) -----");
	printf("\nValue of a : %d",a);
	printf("\nValue of b : %d",b);
	//logic2
	a=a*b;    //2*3=6   //10*20=200         //15*30=450
    b=a/b;    //6/3=2   //200/20=10         //450/30=15
    a=a/b;    //6/2=3   //200/10=20         //450/15=30   

	printf("\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
int swap2(int a,int b)
{
	printf("\n\n----- Swaping using (+ -) -----");
	printf("\nValue of a : %d",a);
	printf("\nValue of b : %d",b);
	//logic2
	a=a+b;    //2*3=6   //10*20=200         //15*30=450
    b=a-b;    //6/3=2   //200/20=10         //450/30=15
    a=a-b;    //6/2=3   //200/10=20         //450/15=30   

	printf("\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
int swap3(int a,int b)
{
	printf("\n\n----- Swapped using (third variable) -----");
	printf("\nValue of a : %d",a);
	printf("\nValue of b : %d",b);
	
    int c;
    //logic3
    c=a;
    a=b;
    b=c;

    printf("\nSwapped Value of a : %d",a);
	printf("\nSwapped Value of b : %d",b);
	return 0;
}
