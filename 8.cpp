#include <stdio.h>
	struct date0
	{
		int year;
		int month;
		int day;
	};
int main ()
{
	struct date0 date;//*****
	scanf("%d %d %d",&date.year,&date.month,&date.day);
	int i=0;
	int y=date.year;
	int day0=0;

	    if (y%4==0) 
		{
			if (y%100==0)
			{
				if (y%400==0)
					i=1;
				else 
					i=0;
			}
			else i=1;
		}
		else i=0;
		int j;
		for(j=1;j<=date.month;j++)
		{if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)day0=day0+31;
		else if(j==4||j==6||j==9||j==11)day0+=30;
		else if(j==2)day0=day0+28+i;}
		day0+=date.day;
		printf("%d",day0-31);
		return 0;
}