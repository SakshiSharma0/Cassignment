#include<stdio.h>

int main()
{
		
	printf("Enter 5 subject marks...\n");
	
	int a,b,c,d,e;
	
	printf("Enter marks in Hindi,English,Maths,Science and Computer : ");
	scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
	
	int total= a+b+c+d+e;
	int avg=total/5;
	char grade;
	
	if(avg>=80)
	   grade='A';
	else if(avg>=60 && avg<80)
	   grade='B';
	else if(avg>=50 && avg<60)
	   grade='C';
	else if(avg>=45 && avg<50)
	   grade='D';	
	else
	   grade='F';
	
	printf("\nAverage marks = %d\n Grade = %c",avg,grade);
		
	return 0;
}
