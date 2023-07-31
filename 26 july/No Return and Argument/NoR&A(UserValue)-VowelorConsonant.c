//No Return and Argument --- user value
#include<stdio.h>                        //preprocessor including header file
void alphabet(char s);                   //function declaration

int main()                               //main function
{
	char ch;
	printf("------------  Alphabet Checker  -----------\n");
	printf("Enter a character :  ");
	scanf("%c",&ch);
	alphabet(ch);                        //function call
	return 0;
}

void alphabet(char g)                    //function definition
{
	switch(g)              //switch statement(control)
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
			       printf("%c is Vowel",g);
			       break;
	    default :
	    	       printf("%c is Consonant",g);
				   break; 
	}
}
