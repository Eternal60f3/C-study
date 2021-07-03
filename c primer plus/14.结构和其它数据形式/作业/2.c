#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#define SLEN 81

char *s_gets(char *, int);
void clear_line(void);
struct month_template
{
    char name[10];
    char abbrev[4];
    int days;
    int month_num;
};

static struct month_template months[12] = {
    {"January", "Jan", 31, 1},
    {"February", "Feb", 28, 2},
    {"March", "Mar", 31, 3},
    {"April", "Apr", 30, 4},
    {"May", "May", 31, 5},
    {"June", "Jun", 30, 6},
    {"July", "Jul", 31, 7},
    {"August", "Aug", 31, 8},
    {"September", "Sep", 30, 9},
    {"October", "Oct", 31, 10},
    {"November", "Nov", 30, 11},
    {"December", "Dec", 31, 12}};

void main(void)
{
    char month[SLEN];
    int month_int;
    int total_days = 0;
    int year, days;
    puts("enter the month");
    while (s_gets(month, SLEN) != NULL && month[0] != '\0')
    {
        puts("enter the year and the days");
        scanf("%d %d", &year, &days);
        clear_line();

        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            months[2].days = 29;
        }
        else
        {
            months[2].days = 28;
        }

        bool month_error = true;
        while (month_error)
        {
            total_days = 0;
            for (int i = 0; i < 12; i++)
            {
                if (strcmp(month, months[i].abbrev) == 0 || strcmp(month, months[i].name) == 0)
                {
                    month_int = months[i].month_num;
                    total_days += days;
                    month_error = false;
                    break;
                }
                total_days += months[i].days;
            }
            puts("month input error,please again");
            s_gets(month, SLEN);
        }
        printf("%d-%s-%d day_ed: %d\n", year, month, days, total_days);
        puts("enter the next month");
    }
    puts("done");
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
