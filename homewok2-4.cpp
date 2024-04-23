#include <stdio.h>
int main ()
{int h1,m1,s1,h2,m2,s2,s3,i;
scanf("%d:%d:%d %d",&h1,&m1,&s1,&s3);
s2=s1+s3;
m2=m1;
h2=h1;
for(i=0;i<=2;i++)
{if(s2>=60){s2=s2-60;m2=m2+1;
	if(m2==60)
	{m2=m2-60;h2=h2+1;
	if (h2>=24) h2=h2-24;
	else;
	}
	else ;}
else ;
}
printf("%02d:%02d:%02d\n",h2,m2,s2);
	return 0;
}
//编译过程中出现了奇怪的问题（赋值点）