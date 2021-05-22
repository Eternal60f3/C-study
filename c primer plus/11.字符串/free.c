#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
void main(void)
{
    char name[] = "hello word";
    char *pointer;
    pointer = name;
    puts(name);
    puts(++pointer);
    name[5] = '\0';
    puts(name);
    puts(++pointer);
}