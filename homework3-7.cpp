#include <stdio.h>
int main ()
{int a,b,f,i,j=0,k;
long int x;
scanf("%i",&x);//八位20240308
	b=x%100;//日

	i=(((x-x%100)/100)%100);//月
 	a=(x-b-100*i)/10000;//年
  // printf("%i,%i,%i\n",a,i,b);
//闰年判定段
   if(
		(a%4==0&&a%100!=0)
   ||
		(a%400==0)
	) {k=1;}
	else k=0;
//	printf("%i",k);
//月判定段
//while (f>1)
{for (f=1;f<i;f++)
	{if(f==1||f==3||f==5||f==7||f==8||f==10||f==12){j=j+31;}
	else if (f==2){
		if		(k==0) {j=j+28;}
		else if (k==1) j=j+29;//printf("%i\n",j);
		else ;
		}

	else j=j+30;
//printf("%i\n",j);
}
}
b=b+j;
printf("%li\n",b);
return 0;
}
