#include <stdio.h>
int main ()
{
	int *pointer_1;
	int a[10];
	pointer_1=&a[1];
	a[1]=0;
	a[2]=2;
	printf("%i,%i\n",a[1],*(pointer_1+1));
	return 0;
}