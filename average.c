#include<stdio.h>

int main()
{
	int h,e,m,s,c,total,avg;											//45,18
	printf("Enter subject marks....\n\n\n ");
	
	printf("\nEnter hindi english maths science and computer marks : ");
	scanf("%d%d%d%d%d",&h,&e,&m,&s,&c);
	
	
	if(h>=40 && e>=40 && m>=40 && s>=40 && c>=40)
	{
		total=h+e+m+s+c;
		avg=total/5;
		printf("\n Hurray!..you are pass \n Your average is %d \n ",avg);
	}
	else
	{
		printf("\n Ooops!..you are fail!\n ");
	}
	return 0;
	
}
