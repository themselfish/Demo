//�ļ��Ķ�д���ļ�ָ��
#include <stdio.h>
#include <stdlib.h>
int main ()
{
	FILE *fp1;
	char c1;
	char filename[100];
	scanf("%s",filename);
	printf("��Ҫ�鿴���ļ��ǣ�%s\n",filename);
	if((fp1=fopen(filename,"r"))==NULL)
	{
	printf("�޷��鿴��\n");
	return 0;
	}
	while(c1!=-1)
	{
	c1=fgetc (fp1);
	printf("%c",c1);
	}
	if(fp1!=NULL)fclose (fp1);
	printf("\n");
//	fclose (fp2);
//	fclose (fp3);
	return 0;

}
