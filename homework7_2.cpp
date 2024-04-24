#include <stdio.h>
int main ()
{
int m,n;
int i,j;
int a[50],b[50];
int c[50]={-1};
int *p,*q;
int h=0;
int f=1;
p=a;q=b;
scanf("%d %d",&m,&n);
for(i=0;i<=m-1;i++)
scanf("%d",p+i);
for(j=0;j<=n-1;j++)
scanf("%d",q+j);
//printf("%d",*(p+1));
i=0;j=0;
	while(i<=m-1&&j<=n-1)
	{if(*(p+i)==*(p+i+1)){/*printf("::%d %d\n",*(p+i),i);*/i++;}
	else if(*(p+i)==*(q+j)){/*printf("!!");*/c[h]=*(p+i);h++;i++;j++;f=0;}
	else {if(*(p+i)<*(q+j))i++;
	else{j++;}	}
	}
	printf("%d",c[0]);
		return 0;
}
