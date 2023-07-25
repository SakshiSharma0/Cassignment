#include<stdio.h>
#include<stdbool.h>
bool voter(int age); //parameter(function declaration)

int main()
{	
	bool b=voter(2);     //function call(arguments)
	
	if(b)
	    printf("Eligible Voter");
	else
	    printf("Not Eligible Voter");
	return 0;
}
bool voter(int age)      //function definition
{
	if(age>=18)
		return true;
	else
	    return false;
}
