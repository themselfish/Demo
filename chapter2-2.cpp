#include <stdio.h>
#include <math.h>
int main ()
{int d,p;
float r,m;
d=324500;
p=3245;
r=0.008;
m=(log10(p)-log10(p-d*r))/log10(1+r);
printf("month=%f\n",m);
printf("total=%f\n",m*p);
return 0;
}