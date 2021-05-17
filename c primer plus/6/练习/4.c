#include <stdio.h>
int main(void)
{
    int index_in;
    int index_out;
    char letter;

    for (letter = 'A', index_out = 0; index_out < 6; index_out++)
    {
        for (letter = letter, index_in = 0; index_in <= index_out; index_in++, letter++)
            printf("%c", letter);
        printf("\n");
    }
}