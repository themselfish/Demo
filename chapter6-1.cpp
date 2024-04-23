#include <stdio.h>
void main ()
{extern int max(int x,int y);
int a,b,c;
	scanf("%i%i",&a,&b);
	c=max(a,b);
printf("%i",c);
}