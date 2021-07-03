#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define NUM_SIZE 100
#define SLEN 81
#define ARRAY_SIZE 1

struct names
{
    char lname[SLEN];
    char middle_name[SLEN];
    char fname[SLEN];
};

struct bank
{
    char num_bank[NUM_SIZE];
    struct names bank_name;
};

void printf_struct(struct bank);
void main(void)
{
    struct bank bank_1[ARRAY_SIZE] = {
        {"481038209",
         {"dribble", "flossie", "middle"}}};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf_struct(bank_1[i]);
    }
}

void printf_struct(struct bank struct1)
{
    printf("%s, %s ", struct1.bank_name.fname, struct1.bank_name.lname);
    if (strlen(struct1.bank_name.middle_name))
    {
        char short_name = toupper(struct1.bank_name.middle_name[0]);
        printf("%c. ", short_name);
    }
    printf("-- %s", struct1.num_bank);
}