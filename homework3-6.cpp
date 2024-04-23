#include <stdio.h>
int main ()
{int a;
scanf("%i",&a);
if(
		((a%4)/25!=0)
   ||
		(a%400==0)
	) {puts("yes\n");}
else puts("no\n");
return 0;
}