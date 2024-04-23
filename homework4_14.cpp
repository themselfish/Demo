#include <stdio.h>
#include <math.h>
int main ()
{
	double i,a,e;
	scanf("%lf",&i);
//	printf("i:%lf",i);
	int j,k;
	e=1.0;
	a=1.0;
	for (j=1;j<=1000;j++)
	{//printf("%f",a);
		for (k=1;k<=j;k++)
		{	a=a*k;//printf("a:%i\nj:%i\n",a,j);
		}
		if (1/a<i) break;	
		e=e+(1/a);
		//printf("e:%f\n,1/a:%f\n",e,1/a);
		a=1;
	}
	printf("%10.8lf\n",e);
	return 0;
}