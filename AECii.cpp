#include <stdio.h>
int main ()
{char as;
as=getchar();
if (as>='A'&&as<='Z') as=as+32;
else if (as>='a'&&as<='z') ;
else ;
putchar(as);
	return 0;
}