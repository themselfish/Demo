#include <stdio.h>//�ر�ע�⣺��ѭ������кܿ����õ�ѭ�������������ã����ܸģ�������ǰ��������ѭ��
#include <math.h>
int main ()
{int i,j,h,m=0;
//int a[10];
    for (i=2;i<=1000;i++)
	{       h=i;
			m=i;
			for (j=2;j<=sqrt(i);j++)//������
			{ //	k++;
			//������	printf("%i,%i\n",i,j);
				if(i%j==0)
				{//printf("%i,%i,%i\n",i,m,j);
				if (j!=i/j)m=m-j-i/j;
				else {m=m-j;}
				//printf("%i,%i,%i\n",i,m,j);
				}
			}
				if (m==1)
				printf("%i ",h);
/*���м�����	if(m==k) 
		{
		     n++;
			 if(i-h>=100)
			 { printf("��%i~%i��%i��\n",h,h+100,n);n=1;h+=100;}
			 printf("����=%i\n",i);
			}*/

	}
	printf("\n");
	return 0;
}