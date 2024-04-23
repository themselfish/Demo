#include <stdio.h>
#include <math.h>
int main ()
{ int i,n,m,m2,m3,k,l1,l2;
	m2=2;m3=3;
	l1=1;l2=2;
	m=0;
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{m=m+floor(m2/l1);
	k=m2+m3;
	m2=m3;
	m3=k;
	k=l1+l2;
	l1=l2;
	l2=k;
//	printf("%i,%i\n",m2,l2);
	}
	printf("sum=%d\n",m);
	return 0;
}