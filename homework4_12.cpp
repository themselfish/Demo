#include <stdio.h>
#include <math.h>
int main ()
{	int x;
	double y;
	scanf("%i",&x);
	y=pow(0.5,x);
	printf("��%i�����ʱ������%f��\n��%i�η���%f��\n",x,100*((1-y)/0.5)*2-100,x,100*y);
	return 0;
}