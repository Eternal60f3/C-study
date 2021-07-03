#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SLEN 81

char show_menu(void);
void to_upper(char *);
void to_lower(char *);
void reversal(char *); // 大小写颠倒
void dummy(char *);    // 不修改字符串
void show(void (*fc)(char *), char *);
char *s_gets(char *, int);
void clear_line(void);

void main(void)
{
    char line[SLEN];
    char copy[SLEN];
    char choice;
    void (*function)(char *);

    puts("Please enter the string you need to process");
    while ((s_gets(line, SLEN) != NULL) && line[0] != '\0')
    {
        while ((choice = show_menu()) != 'n')
        {
            switch (choice)
            {
            case 'u':
                function = to_upper;
                break;
            case 'l':
                function = to_lower;
                break;
            case 'r':
                function = reversal;
                break;
            case 'o':
                function = dummy;
                break;
            }
            strcpy(copy, line);
            show(function, copy);
        }
        puts("Please enter next string you need to process");
    }
    puts("done");
}

char show_menu(void)
{
    char answer;
    puts("Enter menu choice:");
    puts("u) uppercase       l) lowercase");
    puts("r) transposed case o) original case");
    puts("n) next string");
    scanf("%c", &answer);
    clear_line();
    answer = tolower(answer);
    while (strchr("ulron", answer) == NULL)
    {
        puts("enter ulron please");
        answer = tolower(getchar());
        clear_line();
    }
    return answer;
}

void to_upper(char *text)
{
    while (*text)
    {
        *text = toupper(*text);
        text++;
    }
}

void to_lower(char *text)
{
    while (*text)
    {
        *text = tolower(*text++);
        text++;
    }
}

void reversal(char *text)
{
    while (*text)
    {
        if (isupper(*text))
        {
            *text = tolower(*text);
        }
        else if (islower(*text))
        {
            *text = toupper(*text);
        }
        text++;
    }
}

void dummy(char *text)
{
    ;
}

void show(void (*fc)(char *), char *text)
{
    fc(text);
    puts(text);
}

void clear_line(void)
{
    while (getchar() != '\n')
    {
        continue;
    }
}

char *s_gets(char *text, int size)
{
    char *temp;
    temp = fgets(text, size, stdin);
    if (temp != NULL)
    {
        char *line_break = strchr(text, '\n');
        if (line_break)
        {
            *line_break = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return temp;
}
