#include <stdio.h>
char * get_str(int n, char * );
void main(void)
{
    char text[20];
    get_str(20, text);   
    puts(text);
}
char * get_str(int count, char * source)
{
    for (int n = 0; n < count;n++)
    {
        source[n] = getchar();
        if (source[n] == '\n' || source[n] == '\t' || source[n] == ' ')
        {
            break;
        }
    }
    return source;
}