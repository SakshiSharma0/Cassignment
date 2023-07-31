//Return and No Argument --- static value
#include<stdio.h>           //preprocessor including header file

int alphabet();            //function declaration
char ch='G';
int main()                  //main function
{
	int check=alphabet();             //function call
	if(check==1)
		printf("%c is Vowel",ch);
	else
		printf("%c is Consonant",ch);			    
	return 0;
}

int alphabet()             //function definition
{
	printf("------------  Alphabet Checker  -----------\n");
	
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
			       return 1;
			       break;
	    default :
	    	       return 0;
				   break; 
	}
}
