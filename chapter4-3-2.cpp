//���߼����ʽ
#include <stdio.h>
int main ()
{   int y;
    printf("");
	scanf("%d",&y);
    printf("%d",y);
	if ((y % 4==0 && y % 100 !=0)||(y%400==0))
    	printf("��������\n");
	else printf("�겻������\n");
	return 0;
}