#include <stdio.h>
int main ()
{
	int i,j,s,u,input;
	s=0;
	u=1; 
	scanf("%i",&input);
	for (i=1;i<=input;i++)
	{ for (j=1;j<=i;j++)
		{s=s*j;}
	u=s+u;
	s=1;
	}
	printf("sum=%i\n",u);
	return 0;
}
