#include <stdio.h>
int main ()
{
	int i,j;
	int a;
	scanf("%i",&a);
	printf("mon tue wed thu fri sat sun\n");
	for (i=2;i<=a;i++)
		{printf("   -");}
	for (j=1;j<=31;j++)
		{if ((j+a-2)%7==0&&j+a-2!=0)	printf("\n");
		printf("%4d",j);
		}
	printf("\n");
	return 0;
}
		