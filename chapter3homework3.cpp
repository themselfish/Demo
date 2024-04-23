//华氏温度转为摄氏温度，有文字提示，保留2位小数
#include <stdio.h>
int main ()
{   printf("华氏温度转为℃\n");
    float a;
    scanf("%f",&a);
	printf("%5.2f℉=%5.2f℃",a,5*(a-32)/9);
	return 0;
}