#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{long int a;
char c;
int i;
scanf("%li",&a);
int b[11111];
int d[11111];

for(i=0;1<a;i++);
{
scanf("%i",b[i]);
c=getchar();
printf("%d\n",b[i]);
}
printf("%i\n",a);
for(i=0;i<a;i++);
{if (i==a-1){d[i]=b[1]+b[2];}
else if (i==1)d[1]=b[2]+b[a-1];
else d[i]=d[i-1]+d[i+1];
printf("%d\n",b[i]);
}
  // 请在此输入您的代码
  return 0;
}