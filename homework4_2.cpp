#include <stdio.h>//特别注意：在循环语句中很可能用到循环变量，可以用，不能改，否则提前结束或死循环
#include <math.h>
int main ()
{int i,j,h,m=0;
//int a[10];
    for (i=2;i<=1000;i++)
	{       h=i;
			m=i;
			for (j=2;j<=sqrt(i);j++)//找因数
			{ //	k++;
			//调试行	printf("%i,%i\n",i,j);
				if(i%j==0)
				{//printf("%i,%i,%i\n",i,m,j);
				if (j!=i/j)m=m-j-i/j;
				else {m=m-j;}
				//printf("%i,%i,%i\n",i,m,j);
				}
			}
				if (m==1)
				printf("%i ",h);
/*分行计数器	if(m==k) 
		{
		     n++;
			 if(i-h>=100)
			 { printf("在%i~%i有%i个\n",h,h+100,n);n=1;h+=100;}
			 printf("素数=%i\n",i);
			}*/

	}
	printf("\n");
	return 0;
}