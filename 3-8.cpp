#include <stdio.h>
#include <math.h>              //使用平方，应当加头文件
void main ()
{double a,b,d,s,area;
scanf("%lf,%lf,%lf",&a,&b,&d);
s=(a+b+d)/2.0;                 //2.0也按照double
area=sqrt(s*(s-a)*(s-b)*(s-d));
printf("a=%f\nb=%f\nd=%f\n,area=%f\n",a,b,d,area);
}