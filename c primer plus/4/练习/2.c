#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    int count;
    scanf("%s", name);
    count = strlen(name) + 3;
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", count, name);
}