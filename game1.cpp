#include <stdio.h>
int main ()
{int a[51][51];//back
int row,column;//��,��
int s=0;//�Ʒֱ���
int up=0;//������ײ����
//��ʼ��
printf("���ڳ�ʼ������ȴ�...      �Ʒ�\n");
for (row=1;row<=40;row++)
	{for (column=1;column<=40;column++)
		{a[row][column]=61;}
	}
//�ⲿ������Ļˢ��
for (row=1;row<=40;row++)
	{for (column=1;column<=40;column++)
		{printf("%c",a[row][column]);}
     printf("\033");
	}

return 0;
}
/*�������˼·��
1���������趨����
2����д��ʼ״̬��ˢ������
3������װ��
4.�Ʒ�������
5�����嶨λ��ָ��
6��WASD����
7����ײ���
8��ȫ��ѭ��
*/
