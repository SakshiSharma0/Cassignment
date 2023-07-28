//Return and argument
#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int div(int a,int b);
int mul(int a,int b);
int mod(int a,int b);

int main()
{
	int p,q;
     
	printf("--------------Arithmetic Operations-------------\n");
	printf("Enter a value : ");    
	scanf("%d",&p);
	printf("Enter b value : ");    
	scanf("%d",&q);
	
	int ad=add(p,q);
	printf("\nAddition of a and b : %d\n",ad);
	int subt=sub(p,q);
	printf("\nSubtraction of a and b : %d\n",subt);
	int multi=mul(p,q);
	printf("\nMultiplication of a and b : %d\n",multi);
	int rem=div(p,q);
	printf("\nDivision of a and b : %d\n",rem);
	int modd=mod(p,q);
	printf("\nModulation of a and b : %d\n",modd);

	return 0;
}
int add(int a,int b)
{
	return a+b;	
}
int sub(int a,int b)
{
	return a-b;
}
int div(int a,int b)
{
	return a/b;	
}
int mul(int a,int b)
{
	return a*b;
}
int mod(int a,int b)
{
	return a%b;
}

