#include <stdio.h>
int main ()
{
float t,p;
scanf("%f",&p);
if (p<=200000) t=0.03*p;
else if (p>200000&&p<=500000) t=0.025*(p-200000)+6000;
else if (p>500000) t=6000+300000*0.025+(p-500000)*0.02;
else ;
printf("%7.3lf\n",t);
return 0;
}