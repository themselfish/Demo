#include <stdio.h>//
#include <math.h>
int main ()
{int i,j,k,m,n;
n=0;
    for (i=2;i<=100;i++)
	{       for (j=2;j<=sqrt(i);j++)
			{ 	k++;
			//µ÷ÊÔÐÐ	printf("%i,%i\n",i,j);
				if(i%j!=0)
				{m++;}
			}
     if (m==k)
	 {printf("%i ",i);n++;
	 if (n%5==0) printf("\n");}
	m=0;
	k=0;
	}
	return 0;
}