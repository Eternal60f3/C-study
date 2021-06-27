#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(void)
{
    int size;
    char **strs;

    puts("How many words do you wish to enter?");
    scanf("%d", &size);

    strs = (char **)malloc(size * sizeof(char *));

    printf("enter %d words now", size);
    for (int i = 0; i < size; i++)
    {
        char string[100];

        scanf("%s", string);
        int single_s_size = strlen(string) + 1;
        char *temp = (char *)malloc(single_s_size * sizeof(char));

        strncpy(temp, string, single_s_size + 1);
        *(strs + i) = temp;
    }
    
    puts("Here are your words:");
    for (int i = 0; i < size; i++)
    {
        puts(strs[i]);
    }
    free(strs);
}
