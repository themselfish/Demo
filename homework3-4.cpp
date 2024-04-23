#include <stdio.h>
int main ()
{int a,b,c,d,e,x;
	scanf("%i",&x);
	a=x%10;
	b=(x%100-a)/10;
	c=(x%1000-10*b-a)/100;
	d=(x%10000-100*c-10*b-a)/1000;
	e=(x-x%10000)/10000;

	if (x>=10000)	{printf("%i%i%i%i%i\n",a,b,c,d,e);}
	else if(x<10000&&x>=1000){printf("%i%i%i%i\n",a,b,c,d);	}
	else if (x<1000&&x>=100){printf("%i%i%i\n",a,b,c);}
	else if (x<100&&x>=10){printf("%i%i\n",a,b);}
	else if (x<10&&x>0){printf("%i",x);}

	return 0;
}