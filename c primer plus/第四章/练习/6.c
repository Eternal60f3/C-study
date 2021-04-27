#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    char last_name[20];
    int count_name;
    int count_last_name;

    printf("请输入你的名字和姓氏");
    scanf("%s %s", name, last_name);
    count_name = strlen(name);
    count_last_name = strlen(last_name);

    printf("%s %s\n", name, last_name);
    printf("%*d %*d\n", count_name, count_name, count_last_name, count_last_name);
    printf("%-*d %-*d\n", count_name, count_name, count_last_name, count_last_name);
    return 0;
}