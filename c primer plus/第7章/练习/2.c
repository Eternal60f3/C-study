#include <stdio.h>
int main(void)
{
    char ch;
    char before_ch;
    char world[1000];
    int count = 1;
    int count_for;
    while ((ch = getchar()) != '#')
    {
        world[count - 1] = ch;
        count++;
        before_ch = ch;
    }
    for (count_for = 0; count_for < count-1; count_for++)
    {
        printf("%5c ", world[count_for]);
        if ((count_for + 1) % 8 == 0)
        {
            printf("\n");

            int count_if;
            for (count_if = 0; count_if < 8; count_if++)
            {
                printf("%5d ", world[count_for - (8 - (count_if + 1))]);
            }

            printf("\n");
        }
    }
    if (before_ch != '\n')
    {
        printf("\n");

        int count_if2;
        for (count_if2 = 0; count_if2 < (count_for + 1) % 8 - 1; count_if2++)
        {
            printf("%5d ", world[((count_for + 1) - (count_for + 1) % 8) + count_if2]);
        }

        printf("\n");
    }
}