#include <stdio.h>
#include <stdlib.h>
#define SLEN 12
char *text();
void main(void)
{
    char o[10] = "hello";
    fgets(o, 10,stdin);
    puts(o);
}