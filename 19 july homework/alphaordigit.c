#include<stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character: \n");
	scanf("%c",&ch);
	
	if((ch>='A' || ch>='a') && (ch<='Z' || ch<='z'))
	   printf("\nAlphabet");
	else if(ch>='0' && ch<='9')
	   printf("\nDigit");
	else
	   printf("\nEnter a valid character!");
	
	return 0;
}
