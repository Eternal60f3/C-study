#include <stdio.h>
#include <string.h>
void main(void)
{
    int count;
    scanf("%d", &count);
    char strings[10][101];
    for (int i = 0; i < count; i++)
    {
        scanf("%s", strings[i]);
    }

    int a, b, c; // 分别指的是P前面,P和T中间,T后面的A的数目
    for (int i = 0; i < count; i++)
    {
        char text[101];
        int judge = 1;
        strcpy(text, strings[i]);
        for (int o = 0; o < strlen(text); o++)
        {
            if (text[o] != 'A' && text[o] != 'P' && text[o] != 'T')
            {
                judge = 0;
            }
        }
        if (strchr(text, 'P') && strchr(text, 'T') && judge)
        {
            a = strchr(text, 'P') - text;
            b = strchr(text, 'T') - text - a - 1;
            c = &(text[strlen(text) - 1]) - strchr(text, 'T');

            if (c == a * b && b != 0)
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {

            printf("NO");
        }

        if (i != count - 1)
        {
            printf("\n");
        }
    }
}