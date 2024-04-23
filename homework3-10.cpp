#include <stdio.h>
int main ()
{char a[6];
int i;
scanf("%s",a);
for(i=0;i<=6;i++)
{if (a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z') a[i]=a[i]+5;
else ;}
for(i=0;i<=6;i++) {printf("%c",a[i]);}
printf("\n");
	return 0;
}