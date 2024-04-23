#include <stdio.h>
int main ()
{int a,b,c,d,e,x,y;
	scanf("%i",&x);
	a=x%10;
	b=(x%100-a)/10;
	c=(x%1000-10*b-a)/100;
	d=(x%10000-100*c-10*b-a)/1000;
	e=(x-x%10000)/10000;
	y=a+2*b+4*c+8*d+16*e;
	printf("%i %o\n",y,y);
	return 0;
}