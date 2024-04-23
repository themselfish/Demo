#include <stdio.h>
#include <math.h>
int main ()
{	int x;
	double y;
	scanf("%i",&x);
	y=pow(0.5,x);
	printf("第%i次落地时共经过%f米\n第%i次反弹%f米\n",x,100*((1-y)/0.5)*2-100,x,100*y);
	return 0;
}