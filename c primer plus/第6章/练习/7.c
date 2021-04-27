#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[100];
    int index;
    int list_index;

    scanf("%s", word);
    for (list_index = strlen(word) - 1; list_index >= 0; list_index--)
        printf("%c", word[list_index]);
    return 0;
}