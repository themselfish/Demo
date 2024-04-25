#include <stdio.h>
int main ()
{	
	int *p;
	char a[100]={77};
	scanf("%[^\n]", a);
	int i=0;
	int b[200]={-1};
	int j=0,k=0,h=0;
	int flag=0;
	if(a[0]!=' '&&a[0]!='&'){b[j]=i;j++;flag=1;}
	for(i=1;i<=99;i++)
	{if(flag==0&&(a[i]==' '||a[i]=='\0'||a[i]==77)&&(a[i]!=' '&&a[i]!=77&&a[i]=='\0')){b[j]=i;j++;flag=1;//printf("flag up\n");
	}
	 if(flag==1&&(a[i]==' '||a[i]=='\0'||a[i]==77)&&(a[i-1]!=' '&&a[i-1]!=77&&a[i]=='\0')){b[j]=i;j++;flag=0;//printf("j:%dflag down\n",j);
	 }
//	 printf("%c,%d\n",a[i],b[j-1]);
	}//首尾位置定好
	j--;
	while(j>=2)
	{for(h=b[j-2];h<=b[j-1];h++)
	printf("%c",a[h]);
	j--;//printf(" ");
	}
	return 0;
}