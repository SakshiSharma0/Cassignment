#include<stdio.h>

int main()
{
	int rn;
	printf("Welcome student!\n Enter your Roll no : ");	
	scanf("%d",&rn);
	printf("\nEnter your subject marks...\n");
	
	float p,c,it;
	
	printf("Enter marks of Physics, Chemistry and Computer Application : ");	
	scanf("%f %f %f",&p,&c,&it);
	
	
	float total= p+c+it;
	float per=(total/300)*100;
	char div;
	
	if(per>=60)
	   div='1';
	else if(per>=50 && per<60)
	   div='2';
	else if(per>=40 && per<50)
	   div='3';
	else
	   div='F';
	
	printf("\nTotal = %f\n Division = %c \nPercentage = %f%",total,div,per);
		
	return 0;
}
