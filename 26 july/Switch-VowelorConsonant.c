#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char ch='A';
	switch(toUpper(ch))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		/*case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':*/
			      printf("Vowel");
			      break;
		default :
			      printf("Consonant");
			      break;
	}
	return 0;
}
