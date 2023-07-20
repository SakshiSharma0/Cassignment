#include<stdio.h>
#include<process.h>
int main()
{
	char ch;
	float c,f;
	mark:
	printf("Enter a/v for AREA or VOLUME(e for exit): \n");
	fflush(stdin);
	scanf("%c",&ch);	
	
	
	if(ch=='a')
	{
		char ch1;
		float area;
		printf("____________________________________________________________\nTo calculate area press\n t for triangle\n s for square\n r for rectangle \n e for exit \n ");
		fflush(stdin);
	    scanf(" %c",&ch1);	
	    if(ch1=='t')
	    {
	    	float b,h;
	    	printf("Enter Base of Triangle : ");
	    	//fflush(stdin);
	        scanf(" %f",&b);	        
	        printf("Enter Height of Triangle : ");
	        scanf("%f",&h);
	        
	    	area=(0.5)*b*h;
	    	
	    	printf("\nArea of Triangle : %f\n",area);
	    	goto mark;
		}
		else if(ch1=='s')
	    {
	    	float a;
	    	printf("Enter Side of Square : ");
	        scanf("%f",&a);
	    	area=a*a;
	    	printf("\n\nArea of Square : %\n",area);
	    	goto mark;
		}
		else if(ch1=='r')
	    {
	    	float l,b;
	    	printf("Enter Length of Rectangle : ");
	        scanf("%f",&l);
	        printf("Enter Breadth of Rectangle : ");
	        scanf("%f",&b);
	    	area=l*b;
	    	printf("\n\nArea of Rectangle : %f\n",area);
	    	goto mark;
		}
		else if(ch1=='e')
	    {
	    	exit(0);
		}
		else 
		{
			printf("Enter valid char to calculate area");
			goto mark;
		}
	}
	else if(ch=='v')
	{
		char ch2;
		float volume;
		printf("____________________________________________________________\nTo calculate volume press\n t for Triangular pyramid\n c for Square cube\n p for Rectangular prism \n e for exit\n");
	    fflush(stdin);
		scanf("%c",&ch2);	
	    if(ch2=='t')
	    {
	    	float b,h;
	    	printf("Enter base of Triangular prism : ");
	        scanf("%f",&b);
	        printf("Enter height of Triangular prism : ");
	        scanf("%f",&h);
	    	volume=(b*h)/3;
	    	printf("\n\nVolume of Triangular prism : %f\n",volume);
	    	goto mark;
		}
		else if(ch2=='c')
	    {
	    	float a;
	    	printf("Enter side of Square Cube: ");
	        scanf("%f",&a);
	    	volume=a*a*a;
	    	printf("\n\nVolume of Square Cube: %f\n",volume);
	    	goto mark;
		}
		else if(ch2=='p')
	    {
	    	float l,b,h;
	    	printf("Enter length of Rectangular prism : ");
	        scanf("%f",&l);
	        printf("Enter breadth of Rectangular prism : ");
	        scanf("%f",&b);
	        printf("Enter height of Rectangular prism : ");
	        scanf("%f",&h);
	    	volume=l*b*h;
	    	printf("\n\nVolume of Rectangular prism : %f\n",volume);
	    	goto mark;
		}
		else if(ch2=='e')
	    {
	    	exit(0);
		}
		else 
		{
			printf("Enter valid char to calculate volume.\n");
			goto mark;
		}
	}
	else if(ch=='e')
	{
		exit(1);
	}
	else
	{
		printf("Enter valid choice!");
	}
	//getchar();
 //fflush(stdout);
	return 0;
}
