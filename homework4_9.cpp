#include <stdio.h>
int main ()
{
int i,j;
 int a[10];
 int b[10];
for (i=1;i<=10;i++)
	{scanf("%i",a[i]);
	}
for (i=1;i<=10;i++)
{if (a[i]!=' '||a[i]!='\n')

{do {b[i]=a[i]%2;a[i]=a[i]/2-a[i]%2;}
while(a[i]<2);}else continue;}
for (j=10;j>=1;j--)
printf("%i",b[j]);

return 0;
}
/*int a,b,c,d,e;
scanf("%i %i %i %i %i",&a,&b,&c,&d,&e);*/
