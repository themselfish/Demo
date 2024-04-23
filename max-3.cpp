#include <stdio.h>
int main ()
{int max(int x,int y);
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
int e;int f;
e=max(a,b);
f=max(e,c);
printf("The max number is %d\n",f) ;
return 0;
}
int max (int x, int y)
{int s;
if(x>y) s=x;
else s=y;
return(s);
}