#include <stdio.h>
int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
    int e = 1;
    int f = 1;
    //e-- == e - 1
    //c++ == c + 1
    int first_operation = (c - d + e)/-f;
    a = b + first_operation ;
    printf("%d", a);
}