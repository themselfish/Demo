#include <stdio.h>
int main ()
{
	int x,s,j;
    scanf("%d",&x);
	int a[10]={1};
   for (j=x+1;j<0;j--)
   {a[x]=a[x-1]*x;x--;
   }
	printf("%i",a[x]);
	return 0;
}

