#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);	
	
	if(c=='a' || c=='A'|| c=='e' || c=='E'|| c=='i'|| c=='I'|| c=='O'|| c=='o'|| c=='u'|| c=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
}
