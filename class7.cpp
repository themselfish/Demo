#include <stdio.h>
int main  ()
{
	int a1,a2,a3,a4;
	char a;
	a1=a2=a3=a4=0;
	a='0';
	a4=-1;
	while (a!='\r' && a!='\n')
	{a=getchar();
	if (a<='9'&&a>='0') a1++;
	else if ((a<='z'&&a>='a')||(a<='Z'&&a>='A')) a2++;
	else if (a==' ')a3++;
	else a4++;
	}
	printf("%i %i %i %i \n",a2,a1,a3,a4);
	return 0;
}