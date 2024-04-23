#include <stdio.h>
int main ()
{
	int i,j,k,l;
	scanf("%i",&i);
	for(j=1;j<=i;j++)
	{	for(k=1;k<=j-1;k++){ printf(" ");}
			for(l=1;l<=i;l++)printf("*");
	
		printf("\n");
	}
	return 0;
}