#include<stdio.h>           //preprocessor including header file

void alphabet();            //function declaration
int main()                  //main function
{
	alphabet();             //function call
	return 0;
}

void alphabet()             //function definition
{
	char ch='B';
	switch(ch)              //switch statement(control)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':                                    //function body
		case 'U':
			      printf("Vowel");
			      break;
		default :
			      printf("Consonant");
			      break;
	}
}
