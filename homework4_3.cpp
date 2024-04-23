#include <stdio.h>
int main ()
{	int m,n,j;
    scanf("%i",&m);
	scanf("%i",&n);
	for (j=2;j<=m;j++)
			{	if(m%j==0&&n%j==0)
				{printf("%i,%i\n",j,m*n/j);break;}
				else;
			}
	if (m<n)j=m;m=n;n=j;
	j=0;
/*	for(j=m;j<=100000;j++)
	{if(m%j==0&&n%j==0)
	{printf("%i\n",j);break;}}*/

	return 0;
}