#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIN 10

void sort_str(char *pointer[], int num); // 对字符串进行排序
char *s_gets(char *str1, int n);       // 获取字符串

void main(void)
{
    char *pointer[LIN];
    char text[LIN][SIZE];
    int count = 0;
    printf("enter %d line number str please\n", LIN);
    while (count < LIN && s_gets(text[count], SIZE) != NULL && text[count][0] != '\0')
    {
        pointer[count] = text[count];
        count++;
    }
    sort_str(pointer, count - 1);
    printf("Here's the sorted list");
    for (int p_c = 0; p_c < count; p_c++)
    {
        puts(pointer[p_c]);
    }
}

char *s_gets(char *text, int size)
{
    char *temp = fgets(text, size, stdin);
    int n = 0;
    while (text[n] != '\n' && text[n] != '\0')
    {
        n++;
    }
    if (text[n] == '\n')
    {
        text[n] = '\0';
    }
    else
    {
        while (getchar() != '\n')
        {
            continue;
        }
    }
    return temp;
}

void sort_str(char *pointer[], int num)
{
    for (int out_c = 0; out_c < num; out_c++)
    {
        for (int in_c = out_c + 1; in_c <= num; in_c++)
        {
            if (strcmp(pointer[out_c], pointer[in_c]) > 0)
            {
                char *temp = pointer[out_c];
                pointer[out_c] = pointer[in_c];
                pointer[in_c] = temp;
            }
        }
    }
}
