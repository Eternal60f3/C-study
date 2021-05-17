#include <stdio.h>
int main()
{
    char before_ch = '0';
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (before_ch == 'e' && ch == 'i')
        {
            printf("%c%c\n", before_ch, ch);
            count++;
        }
        before_ch = ch;
    }
    printf("%d", count);
    return 0;
}
