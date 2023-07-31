//Return and Argument --- user value
#include<stdio.h>                        //preprocessor including header file
int alphabet(char s);                    //function declaration

int main()                               //main function
{
	char ch;
	printf("------------  Alphabet Checker  -----------\n");
	printf("Enter a character :  ");
	scanf("%c",&ch);
	int check=alphabet(ch);              //function call
	if(check==1)
		printf("%c is Vowel",ch);
	else
        printf("%c is Consonant",ch);
	return 0;
}

int alphabet(char g)                     //function definition
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
			       return 1;
			       break;
	    default :
	    	       return 0;
				   break; 
	}
}
