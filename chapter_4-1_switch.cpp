#include <stdio.h>
int main ()
{   int a=1;
    double b,c,d;
	char e=0;
	printf("这是一个计算器……\n请输入目标运算\n");
        while (a<=100)
		{
		scanf("%lf%c%lf",&b,&e,&c);
		switch(e)
		{case 42: {d=b*c;break;}
		case 47: {d=b/c;break;}
		case 43: d=b+c;break;
		case 45: d=b-c;break;
		case 60: d=(b<c);break;
		case 61: d=(b==c);break;
		case 62: d=(b>c);break;
		case 94: printf("We are just trying^-^……\n");break;
		default:        
		{
	    printf("sorry,we can't calculate\n");
		}
		}
		printf("The result is %7.5f\n",d);
        b=0;c=0;
		a=a+1;
		}
    return 0;
}