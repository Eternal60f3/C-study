#include <stdio.h>
int main(void)
{
    int count = 1;
    int ch;

    while ((ch = getchar()) != EOF)
    {
        if (count == 10)
        {
            printf("\n");
            count = 1;
        }
        if (ch <= '\040')
        {
            switch (ch)
            {
            case '\t':
                printf("\\t-%d ", ch);
                break;
          
            default:
                printf("^%c-%d ", ch + 64, ch);
                break;
            }
        }
        else
        {
            printf("%c-%d ", ch, ch);
        }
        count++;
    }
    return 0;
}