#include <stdio.h>
#include <math.h>
void main ()
{double x;scanf("%lf",&x);
printf("%f %f %f %f %f\n ",1.15*x,x*1.042*1.0825,1.0825*x*1.042,1.015*1.015*1.015*1.015*1.015*x,x*pow(1+0.0035/4,20));
}