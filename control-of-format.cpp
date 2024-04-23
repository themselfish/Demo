//此程序为3.9.2的上机实践
//%md是对数据宽度的指定，m是指定的位数，位数小于m的，右对齐，位数大于的，按原数据位数输出
//
#include <stdio.h>
int main ()
{
	int a,b;
	double c;
	long int d;
	a=123;
	b=1234567;
	c=123456.7890;
	d=1234567890;
	printf("%2c\n",a);//注意：%mc等语法也是成立的
	printf("%12d\n%12d\n",a,b);

	return 0;
}