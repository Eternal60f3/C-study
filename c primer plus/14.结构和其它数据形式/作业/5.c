#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#define SLEN 81
#define SCORES 3
#define ST_NUM 4
#define SUBJECT_COUNT 3

typedef struct student *student_p;

struct name
{
    char last[SLEN];
    char first[SLEN];
};
struct score
{
    double english;
    double physics;
    double math;
};
struct student
{
    struct name person;
    struct score scores;
    double average;
};

void get_data(student_p);
void calculate_average(student_p);
void print_single(const student_p);
void print_class(const student_p);
int get_choice(void);
char *s_gets(char *, int);
void clear_line(void);
void get_scores(double *, char *);

void main(void)
{
    typedef void (*fc)(student_p);
    struct student class[ST_NUM] = {
        {"Flip", "Snide"},
        {"Clare", "Voyans"},
        {"Bingo", "Higgs"},
        {"Fawn", "Hunter"}};

    get_data(class);
    calculate_average(class);
    int choice;
    fc functions[2] = {print_single, print_class};
    while ((choice = get_choice()) && (choice >= 2 && choice <= 3))
    {
        functions[choice - 2](class);
    }
    puts("done");
}

int get_choice(void)
{
    int choice;

    printf("%-50s %-50s\n", "1.quit", "2.print_single student data");
    printf("%-50s\n", "3.print_class average and student_average");
    puts("enter your choice");

    while (scanf("%d", &choice) == 0 || choice > 3 || choice < 1)
    {
        puts("enter 1,2,3,4 to choice");
        clear_line();
    }
    clear_line();
    return choice;
}

void get_scores(double *score, char *subject)
{
    printf("enter the student %s score\n", subject);
    scanf("%lf", score);
    clear_line();
}

void get_data(student_p class)
{
    char name[SLEN];
    double score;
    puts("enter student_name(empty line to quit)");
    while (s_gets(name, SLEN) && name[0] != '\0')
    {
        bool name_error = true;
        for (int i = 0; i < ST_NUM; i++)
        {
            if (strcmp(name, class[i].person.last) == 0)
            {
                name_error = false;
                puts("enter the student scores");
                get_scores(&class[i].scores.english, "english");
                get_scores(&class[i].scores.math, "math");
                get_scores(&class[i].scores.physics, "physics");
                break;
            }
        }
        if (name_error)
        {
            puts("the person is not my student, get out");
        }
        puts("enter next student_name");
    }
}

void calculate_average(student_p class)
{
    for (int i = 0; i < ST_NUM; i++)
    {
        double total_score = class[i].scores.english + class[i].scores.math + class[i].scores.physics;
        class[i].average = total_score / SUBJECT_COUNT;
    }
}

void print_single(const student_p class)
{
    for (int i = 0; i < ST_NUM; i++)
    {
        printf("%s-%s math: %.2f; physics: %.2f; english: %.2f; average: %.2f\n", class[i].person.last,
               class[i].person.first, class[i].scores.math, class[i].scores.physics,
               class[i].scores.english, class[i].average);
    }
}

void print_class(const student_p class)
{
    double class_total = 0;
    for (int i = 0; i < ST_NUM; i++)
    {
        printf("%s-%s: %.2f\n", class[i].person.last, class[i].person.first, class[i].average);
        class_total += class[i].average;
    }
    double class_average = class_total / ST_NUM;    
    printf("class_average: %.2f\n", class_average);
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
    char *temp = fgets(text, size, stdin);
    if (temp)
    {
        char *empty_char = strchr(text, '\n');
        if (empty_char)
        {
            *empty_char = '\0';
        }
        else
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
    }
    return temp;
}