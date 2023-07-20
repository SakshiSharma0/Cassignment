#include<stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c",&c);	

    if(c>='A' && c<='Z')
       printf("Uppercase Character");
    else if(c>=97 && c<=122)
       printf("Lowercase Character");
    else 
       printf("Enter valid character");
       
    return 0;
}
