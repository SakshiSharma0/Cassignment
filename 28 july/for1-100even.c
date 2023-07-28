#include<stdio.h>
int main()
{
	int a;
	printf("1-100 Even Numbers\n");
	for(a=1;a<=100;a++)
	{
		if(a%2==0)
	       printf("%d\t",a);
    }
	return 0;
}
