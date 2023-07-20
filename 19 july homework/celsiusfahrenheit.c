#include<stdio.h>

int main()
{
	char a;
	float c,f;
	printf("Enter a c/f for celsius or fahrenheit: ");
	scanf("%c",&a);	
	
	
	if(a=='c')
	{
		printf("Enter temperature in celsius : ");
	    scanf("%f",&c);	
	    f=(9/5)*c+32;
	    printf("Temperature in Fahrenheit : %f",f);
	}
	else if(a=='f')
	{
		printf("Enter temperature in Fahrenheit : ");
	    scanf("%f",&f);	
	    c = (f - 32) * 5 / 9;
	    printf("Temperature in Celsius : %f",c);
	}
	else
	{
		printf("Enter valid choice!");
	}
	return 0;
}
