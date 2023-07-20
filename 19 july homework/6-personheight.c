#include<stdio.h>

int main()
{
	int height,cm;
	printf("Enter your height in meters: ");
	scanf("%d",&height);
	
	cm=height*100;
	
	if(cm>=700)
	   printf("High height!");
	else if(cm>=400 && cm<=699)
	   printf("Medium height!");
	else if(cm<400)
	   printf("Low height!");
	else
	   printf("\nInvalid!");
	return 0;
}
