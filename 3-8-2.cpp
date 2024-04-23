#include <stdio.h>
int main ()
{printf("%c",getchar()+32);
printf("%c",getchar()+32);
printf("%c\N",getchar()+32);
putchar(getchar()+32);
putchar(getchar()+32);
putchar(getchar()+32);
return 0;
}
