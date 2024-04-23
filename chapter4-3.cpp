//计算闰年(1)if-else
#include <stdio.h>
#include <time.h>
clock_t start,finsh;
double t=0;
int main ()
{  	int y;
	int i;//l=logical
	printf("请输入要查询的年份，输入四位年份值\n");
    scanf("%4d",&y);
	start=clock();
	if (y>0)
	    if (y%4==0) 
		{
			if (y%100==0)
			{
				if (y%400==0)
					i=1;
				else 
					i=0;
			}
			else i=1;
		}
		else i=0;
	else printf("错误！请输入正确数值");
	    if (i=0) printf("%d不是闰年\n",y);
	    else printf("%d是闰年\n",y);
    finsh=clock();
	printf("%d\n",start-finsh);
	return 0;
}