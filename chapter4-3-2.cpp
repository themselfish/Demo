//长逻辑表达式
#include <stdio.h>
int main ()
{   int y;
    printf("");
	scanf("%d",&y);
    printf("%d",y);
	if ((y % 4==0 && y % 100 !=0)||(y%400==0))
    	printf("年是闰年\n");
	else printf("年不是闰年\n");
	return 0;
}