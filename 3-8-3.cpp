#include <stdio.h>
#include <math.h>
int main ()
{ 
  double a,b,c,d,p,q;
  printf("������Ҫ���һԪ���η���ax^2+bx+c=0�Ĳ������ö��Ÿ���,��a,b,c��\n");
  scanf("%lf,%lf,%lf",&a,&b,&c);
  d=b*b-4.0*a*c;
  printf("d=%f\n",d);

  if (d>=0)
 {
	   p=-b/(2.0*a);
       q=sqrt(d)/(2.0*a);
       printf("��2��ʵ����:\n%f\n%f\n",p+q,p-q);//ע�������ͣ�����Ĵ���%d��˫���ȣ�8�ֽڣ���%f�Ǹ��㣨4�ֽڣ��������У��ھ��д���������ͬ���жϷ����������ر�������
  }
   else 
  printf("û��ʵ����\n");

  return 0;
}
