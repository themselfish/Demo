#include <stdio.h>
int main ()
{int max(int x,int y);
int a,i,a1,a2,a3,a4,a5;

scanf("%d,%d,%d,%d,%d",&a1,&a2,&a3,&a4,&a5);

a=max(a1,a2);
a=max(a,a3);
a=max(a,a4);
a=max(a,a5);
printf("%d\n",a) ;
return 0;
}
int max (int x, int y)
{int s;
if(x>y) s=x;
else s=y;
return(s);
}