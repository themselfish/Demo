#include <stdio.h>
#include <math.h>
int main ()
{ 
  double a,b,c,d,p,q;
  printf("请输入要解的一元二次方程ax^2+bx+c=0的参数，用逗号隔开,如a,b,c：\n");
  scanf("%lf,%lf,%lf",&a,&b,&c);
  d=b*b-4.0*a*c;
  printf("d=%f\n",d);

  if (d>=0)
 {
	   p=-b/(2.0*a);
       q=sqrt(d)/(2.0*a);
       printf("有2个实数解:\n%f\n%f\n",p+q,p-q);//注意数的型，这里的错误：%d是双精度（8字节），%f是浮点（4字节）。第七行，第九行错误类型相同。判断方法：出现特别大的数。
  }
   else 
  printf("没有实数解\n");

  return 0;
}
