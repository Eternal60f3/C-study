#include <stdio.h>
#include <string.h>
void main(void)
{
    char * string12;
    fgets(string12, 10, stdin);
    gets_s(string12, 10);// 为什么不能执行
}
