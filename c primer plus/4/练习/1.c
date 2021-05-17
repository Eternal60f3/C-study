#include <stdio.h>
int main(void)
{
    char last_name[20];
    char name[20];
    printf("get your last_name and name");
    scanf("%s %s", last_name, name);
    printf("%s %s", name, last_name);
    return 0;
}
