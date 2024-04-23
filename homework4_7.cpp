#include <stdio.h>
int main ()
{	int a[10],b[10];
	int i,j,c;
	for (i=0;i<=9;i++)
		{
			b[i]=-1;
			a[i]=-1;
		}	//³õÊ¼»¯
	for (i=0;i<=4;i++)
		{scanf("%i",&c);
		 if (c==' ') continue;
		// else if (c=='\n') break;
		 else a[i]=c;
		 //printf("\n%i",a[i]);
		}//ÊäÈë
//	printf(":%d\n",a[1]);
	for (i=0;i<=4;i++)
		{//if (a[i]==-1) {printf("\n");break;}
		//else{
		 for (j=0;j<=9;j++)
		{	b[j]=a[i]%2;
			a[i]=(a[i]-b[j])/2;
		     //printf("%d",b[j]);
			if (a[i]==0)break;
		 }
		 for (j=9;j>=0;j--)
			{
			 if (b[j]!=-1) printf("%d",b[j]);
			}
		 printf("\n");
		//}
		for (j=0;j<=9;j++)
			b[j]=-1;
		 }
	return 0;
}