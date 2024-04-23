#include <stdio.h>
int main ()
{
	int n,i,j,k;
	j=1;k=1;
	scanf("%i",&n);
	for (i=1;i<=n;i++)//1 2 3 4
	{	for (j=1;j<=i;j++)//Í¬ÐÐÊä³ö
			{printf("%i ",k);
			k++;}
		printf("\n");
	}
	return 0;
}
/*	for (i=1;i<=n;i++)
	{
	for (k=1;k<=j;k++){printf("%i ",i);}
	if (k>j)printf("\n");
	j++;
	}
	if (n==1)printf("1\n");
	else if (n==2||n==3){printf("1\n");for(i=2;i<=n;i++){printf("%i ",i);}}
	else if (n==4||n==5||n==6){ printf("1\n2 3\n");for(i=4;i<=n;i++){printf("%i ",i);}}
	else if (n==7||n==8||n==9||n==10){ printf("1\n2 3\n4 5 6\n");for(i=7;i<=n;i++){printf("%i ",i);}}
	else ;
	printf("\n");*/