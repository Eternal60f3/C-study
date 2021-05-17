#include <stdio.h>
int main(void)
{
    char letter_up;
    char letter_down;
    char letter;
    char index_letter;
    int index;

    scanf("%c", &letter);
    for (index_letter = 'A'; index_letter <= letter; index_letter++)
    {
        for (index = 1; index < letter - index_letter + 1; index++)
            printf(" ");

        for (letter_up = 'A'; letter_up < index_letter; letter_up++)
            printf("%c", letter_up);

        for (letter_down = index_letter; letter_down >= 'A'; letter_down--)
            printf("%c", letter_down);
        printf("\n");
    }
    return 0;
}