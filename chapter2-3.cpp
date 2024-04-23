#include <stdio.h>
#include <math.h>
int main()
{int d=324500,p=3245;
double r=0.008,m;
m=(log10(p)-log10(p-d*r))/log10(1+r);
printf("month=%f\n",m);
printf("total=%f\n",m*p);
printf("%d\n",sizeof(long double));
return 0;
}