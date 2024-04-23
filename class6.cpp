#include <stdio.h>
int main ()
{
	int i,j,k;
	int a[11];
	scanf("%i %i",&i,&j);//printf("%i\n",j);
	a[1]=j;
	a[10]=0;
	for (k=1;k<=i;k++)
	{a[k+1]=10*a[k]+a[1];
	a[10]=a[10]+a[k];
	//	printf("%i\n",a[10]);
	}
	printf("%i\n",a[10]);
	return 0;
}
