#include<stdio.h>

int main()

{
	int a=45;
	int b=23;
	int c=2;
	int d=9;	
	int e=34;
	//2) 45+(23*2-9)/34 

	int res=a+(b*c-d)/e;
	printf("Operation res is: %d",res);
	return 0;

}
