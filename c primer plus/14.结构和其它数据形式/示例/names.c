#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81

struct namect
{
    char *fname;
    char *lname;
    int letter;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(struct namect *);
void clear_up(struct namect *);
char *s_gets(char *, int);

void main(void)
{
    struct namect person;

    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    clear_up(&person);
    puts("done");
}

void getinfo(struct namect *person)
{
    char temp[SLEN];
    puts("enter your first name please");
    s_gets(temp, SLEN);
    person->fname = malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(person->fname, temp);
    puts("enter your last name please");
    s_gets(temp, SLEN);
    person->lname = malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(person->lname, temp);
}

void makeinfo(struct namect *person)
{
    person->letter = strlen(person->fname) + strlen(person->lname);
}

void showinfo(struct namect *person)
{
    printf("Your name is %s %s, letter_num: %d\n", person->lname, person->fname, person->letter);
}
void clear_up(struct namect *person)
{
    free(person->fname), free(person->lname);
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