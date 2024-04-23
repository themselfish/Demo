#include <stdio.h>
int main ()
{  double a[10];
   double t;
   int i,j,k;
    for (i=0;i<10;i++)//ÊäÈë
	    scanf("%lf",&a[i]);
        printf("\n");
    for (j=0;j<9;j++)
		for (i=0;i<9-j;i++)
			if(a[i]>a[i+1])
			{t=a[i+1];a[i+1]=a[i];a[i]=t;}
	puts("the sorted number is :\n");//Êä³ö
	for (i=0;i<10;i++)
	{printf("%lf",a[i]);
	printf("\n");}
	return 0;
}