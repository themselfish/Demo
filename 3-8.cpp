#include <stdio.h>
#include <math.h>              //ʹ��ƽ����Ӧ����ͷ�ļ�
void main ()
{double a,b,d,s,area;
scanf("%lf,%lf,%lf",&a,&b,&d);
s=(a+b+d)/2.0;                 //2.0Ҳ����double
area=sqrt(s*(s-a)*(s-b)*(s-d));
printf("a=%f\nb=%f\nd=%f\n,area=%f\n",a,b,d,area);
}