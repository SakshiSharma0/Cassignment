#include<stdio.h>

int main()
{
	printf("Welcome student!\n");	
	printf("Enter your subject marks...\n");
	
	float h,e,m,s,c;
	
	printf("Enter marks in Hindi,English,Maths,Science and Computer : ");
		fflush(stdin);
	scanf(" %f %f %f %f %f",&h,&e,&m,&s,&c);
	
	
	float total= h+e+m+s+c;
	float per=(total/500)*100;
	char grade;
	
	if(per>=80)
	   grade='A';
	else if(per>=60 && per<80)
	   grade='B';
	else if(per>=50 && per<60)
	   grade='C';
	else if(per>=45 && per<50)
	   grade='D';
	else if(per>=25 && per<45)
	   grade='E';
	else
	   grade='F';
	
	printf("\nTotal marks Obtained = %f\n Grade = %c \nPercentage = %f",total,grade,per);
		
	return 0;
}
