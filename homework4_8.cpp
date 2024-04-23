#include <stdio.h>
int main ()
{	int a[10][10];
	int c;
	int i,j;
	for (i=1;i<=4;i++)
	{
		for (j=1;j<=3;j++)
		{
			scanf("%i",&c);
			if (c=='/n') break;
			else if(c==' ') continue;
			else a[i][j]=c;
		}
	if (c=='/n') break;
	}
		for (i=1;i<=4;i++)
	{
		for (j=1;j<=3;j++)
		{printf("%i",a[i][j]);
		if (j!=3) printf(" ");
		else printf("\n");
		}
	}		
		printf("×ªÖÃ¾ØÕóÎª\n");
		for (j=1;j<=3;j++)
	{
		for (i=1;i<=4;i++)
		{printf("%i",a[i][j]);
		if (i!=4) printf(" ");
		else printf("\n");
		}
	}
	return 0;
}