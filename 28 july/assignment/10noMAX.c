#include<stdio.h>

int main()
{
	printf("---------10 Number's Max--------\n\n");
	int a,b,c,d,e,l,m,n,o,p;
	printf("Enter 10 values : ");
	scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&l,&m,&n,&o,&p);
	if(a>b && a>c && a>d && a>e && a>l && a>m && a>n && a>o && a>p)
	    printf(" A Max");
	else if(b>a && b>c && b>d && b>e && b>l && b>m && b>n && b>o && b>p)
	    printf(" B Max");
	else if(c>a && c>b && c>d && c>e && c>l && c>m && c>n && c>o && c>p)
	    printf(" C Max");
	else if(d>a && d>c && d>b && d>e && d>l && d>m && d>n && d>o && d>p)
	    printf(" D Max");
	else if(e>a && e>c && e>b && e>d && e>l && e>m && e>n && e>o && e>p)
	    printf(" E Max");
	else if(l>a && l>c && l>b && l>d && l>e && l>m && l>n && l>o && l>p)
	    printf(" L Max");
	else if(m>a && m>c && m>b && m>d && m>e && m>l && m>n && m>o && m>p)
	    printf(" M Max");
	else if(n>a && n>c && n>b && n>d && n>l && n>m && n>e && n>o && n>p)
	    printf(" N Max");
	else if(o>a && o>c && o>b && o>d && o>l && o>m && o>n && o>e && o>p)
	    printf(" O Max");
	else if(p>a && p>c && p>b && p>d && p>l && p>m && p>n && p>o && p>e)
	    printf(" P Max");
	else
	    printf(" Equal");

    return 0;
}
