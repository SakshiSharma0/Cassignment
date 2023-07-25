#include<stdio.h>
int evenodd(int a); //parameter(function declaration)
int primenumber();
int armstrong(int a);
int reverse(int a);
int palindrome(int a);
int main()
{	
	int a;
	printf("Enter a value : ");
	scanf("%d",&a);
	
	//evenodd
	int r1=evenodd(a);     //function call(arguments)
	if(r1==1)
	    printf(" Even Number\n");
	else
	    printf(" Odd Number\n");
	
	
	//armstrong
	int r2=armstrong(a);    
	if(r2==a)
		printf("\n %d is Armstrong! \n",r2);
	else
		printf("\n%d is Not a Armstrong! \n",r2);
		
    //prime		
	int r3=primenumber(a);
	if(r3==1)
	    printf("\n %d is Prime! \n",a);
	else
	    printf("\n %d is not Prime! \n",a);
    
    //reverse
	int r4=reverse(a);
	printf("\n Reverse of a number is : %d\n",r4);
	
	//palindrome
	int r5=palindrome(a);
	if(r5==a)
		printf("\n%d is Palindrome! ",r5);
	else
		printf("\n %d is Not a Palindrome! ",r5);
		
	return 0;
}
int evenodd(int a)      //function definition
{
	if(a%2==0)
		return 1;
	else
	    return 0;
}

int armstrong(int a)      //function definition
{
	int rem,c,sum=0;
	while(a>0)   //a!=0
	{
		rem=a%10; 
		c=rem*rem*rem;                        
		sum=sum+c;            
		a=a/10;		               
	}
	return sum;
}


int primenumber(int a)
{
	int i=2,prime=1;

	while(i<=a/2)
	{
		    if(a%i==0)
		    {
		       prime=0;	
		       break;
			}   
		i++;  
	}
	 if(prime && a>1)
	      return 1;
	 else
	      return 0;
}

int reverse(int a)
{
	int rem,sum=0;
	while(a>0)
	{
		rem=a%10;                 //500%10=0           
		sum=sum*10+rem;            //0*10+0
		a=a/10;		               //500/10=50
	}
	return sum;
}

int palindrome(int a)
{
	int rem,sum=0;
	int check=a;
	while(a>0)   //a!=0
	{
		rem=a%10;                         
		sum=sum*10+rem;            
		a=a/10;		               
	}
	return sum;
}
