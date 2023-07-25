//function with return type and argument(single variable))
//function to add two numbers
#include<stdio.h>
int add(int a,int b,int c,int d); //parameter(function declaration)

int main()
{	
    int a,b,c,d,res;
	printf("Enter 4 numbers to add them : ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
	res=add(a,b,c,d);     //function call(arguments)
	
	printf("\nAddition of 4 no's is : %d",res);
	return 0;
}
int add(int a,int b,int c,int d)      //function definition
	{
		return a+b+c+d;
	}
