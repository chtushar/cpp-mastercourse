#include <stdio.h>
int main()
{
    char *s = "hello";
    char *p = s;
    printf("%p\t%p", p, s);
}