#include<stdio.h>
#include<math.h>
int main ()
{
	char * convertToBase7(int num);

	int m;
	int j;
	char *p;
	scanf("%d",&m);
	p=convertToBase7(m);
//	printf("%s",p+1);
	return 0;
}
char * convertToBase7(int num)
{
	char a[10];
	int i=1;
	int f=0;
	char *q;
	int x;
	q=a;
	a[0]=num;
	if(num==0) printf("0");

	if(num<0){
			num=-num;	while(num!=0)
						{a[i]=num%7;
						num=(num-a[i])/7;
						i++;f++;
						}
			f++;a[f]=-3;}
			//	for(i=f;i>=1;i--)a[i]=6-a[i];a[1]++;a[2]=a[2]+(a[1]-a[1]%7)/7;a[1]=a[1]%7;}
	else
	{while(num!=0)
	{a[i]=num%7;
	num=(num-a[i])/7;
	i++;f++;
	};}
	for(i=f;i>=1;i--){a[i]+=48;printf("%c",a[i]);}

	//i++;
//	a[i]='\0';
	//×ª»¯
	return (q);
	//·µ»Ø
}