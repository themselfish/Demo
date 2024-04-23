#include <stdio.h>
#include <stdlib.h>
int main ()
{FILE *fp;
char a[100];
int i=0;
char filename='T';

    if((fp==fopen(filename,"w"))==NULL)
	{
    puts("error\n");
    exit (0);
	}
        for (i=0;i<=100;i++)
		{scanf("%c",a[i]);//´ò´í
    if (a[i]>'_'){a[i]=a[i]-32;a[i+1]=\0;}
    else if(a[i]=='#') {break;}
    else;
       fputc(a[i],fp);
       putchar(a[i]);
		}
fclose(fp);
putchar(10);
return 0;
}