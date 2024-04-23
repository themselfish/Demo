#include <stdio.h>
#include <math.h>
int main ()
{float a,b;
double c;
scanf("%f %f",&a,&b);
c=sqrt(a*a+b*b);
printf("c=%f\n",c);
printf("c=%g\n",c);
return 0;
}