#include <stdio.h>
#include <stdlib.h>
int main ()
{FILE *fp;
char sl[40];
    if ((fp=fopen("3-8.cpp","r"))==NULL)
{puts("cannot open this file\n");
exit(0);
}
fp=fopen("3-8.cpp","r");
fgets(sl,30,fp);
printf("%s",sl);
	return 0;
}
//注意：这里的“打开”指的是放进内存备用，并不是输出到外面