#include <stdio.h>
#include <string.h>
int main(void)
{
    int count = 0;

    while (getchar() != EOF)
    {
        count++;
    }
    printf("%d", count);
    return 0;
}