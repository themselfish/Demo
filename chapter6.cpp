#include <stdio.h>
int main ()
{int i;
int f[20]={1,1};
for(i=2;i<20;i++)
{f[i]=f[i-2]+f[i-1];}
for(i=0;i<19;i++)
printf("%i\n",f[i]);
return 0;
}