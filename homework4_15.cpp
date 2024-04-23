#include <stdio.h>
#include <math.h>
int main ()
{
	double pi,j,l,k,a;

		j=-1.0;
		pi=0;
		scanf("%lf",&a);
			for (l=1;l<=900000;l++)
				{j=-j;
					k=j/(2*l-1);//printf("k:%lf\n",k);
				if (fabs(k)<a) break;
				else ;
				pi=pi+k;
			//	printf("+1\n");
				}
	printf("%.8lf\n",4*pi);
	return 0;
}