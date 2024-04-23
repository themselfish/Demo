#include <stdio.h>
int main ()
{int a,b1,b2,b3,b4;
scanf("%d",&a);
b1=(a-a%1000)/1000;
b2=(a-(1000*b1)-(a-1000*b1)%100)/100;
b3=((a-1000*b1-100*b2)-(a-1000*b1-100*b2)%10)/10;
b4=a-1000*b1-100*b2-10*b3;

printf("%d%d%d%d\n",b4,b3,b2,b1);
return 0;
}