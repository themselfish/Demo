#include <stdio.h>
int main ()
{int a,i;
scanf("%i",&a);
if (a>=95)i=1;
else if (a>=90)i=2;
else if (a>=80)i=3;
else if (a>=70)i=4;
else if (a>=60)i=5;
else if (a<60)i=6;
else;
switch (i)
{case (1):
{ printf("A+\n");break;}
case (2) :{printf("A\n");break;}
case(3): {printf("B\n");break;}
case(4): {printf("C\n");break;}
case(5): {printf("D\n");break;}
case(6): {printf("E\n");break;}
default:;
}
return 0;
}