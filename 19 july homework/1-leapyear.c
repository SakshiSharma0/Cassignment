#include <stdio.h>
int main()
{
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

     if (( year % 400 == 0)|| (( year % 4 == 0 ) &&( year % 100 != 0)))
      printf("\n %d is a Leap Year. \n", year);
     else
      printf("\n %d is not a Leap Year. \n", year);
   return 0;
}
