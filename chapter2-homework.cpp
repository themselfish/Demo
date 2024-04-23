#include <stdio.h>
int main ()
{char a,b,c,d,e;
int p;
scanf("%d\n",&p);
scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
a+=p;
b+=p;
c+=p;
d+=p;
e+=p;
printf("%c%c%c%c%c\n",a,b,c,d,e);
return 0;
}
