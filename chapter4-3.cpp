//��������(1)if-else
#include <stdio.h>
#include <time.h>
clock_t start,finsh;
double t=0;
int main ()
{  	int y;
	int i;//l=logical
	printf("������Ҫ��ѯ����ݣ�������λ���ֵ\n");
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
	else printf("������������ȷ��ֵ");
	    if (i=0) printf("%d��������\n",y);
	    else printf("%d������\n",y);
    finsh=clock();
	printf("%d\n",start-finsh);
	return 0;
}