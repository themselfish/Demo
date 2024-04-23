#include <stdio.h>
int main ()
{	int i,j,n;
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{	for(j=1;j<=i;j++)
			printf("%i*%i=%i ",i,j,i*j);
	printf("\n");}
	return 0;
}