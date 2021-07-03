#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define BUFSIZE 4096
#define SLEN 81

FILE *file_open(const char *filename, char *open_type);
void file_close(const char *, FILE *);
bool gettowrite(char *filename, FILE *source);

void main(void)
{
    FILE *first ,*second;
    char first_name[SLEN], second_name[SLEN];

    char *text[2] = {first_name, second_name};
    puts("enter first_file_name please");
    scanf("%s", first_name);
    puts("enter second_file_name next please");
    scanf("%s", second_name);
        
    first = file_open(first_name, "r");
    second = file_open(second_name, "r");

    bool first_judge = true, second_judge = true;

    while (first_judge || second_judge)
    {
        if (first_judge)
        {
            first_judge = gettowrite(first_name, first);
            putchar('\n');
        }
        if (second_judge)
        {
            second_judge = gettowrite(second_name, second);
            putchar('\n');
        }
    }
}



FILE *file_open(const char *filename, char *open_type)
{
    FILE *file;
    if ((file = fopen(filename, open_type)) == NULL)
    {
        fprintf(stderr, "open %s file error", filename);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(file, NULL, _IOFBF, BUFSIZE))
    {
        fprintf(stderr, "setvbuf %s file error", filename);
        exit(EXIT_FAILURE);
    }
    return file;
}
void file_close(const char *filename, FILE *file)
{
    if (fclose(file))
    {
        fprintf(stderr, "close %s file error", filename);
        exit(EXIT_FAILURE);
    }
}

bool gettowrite(char *filename, FILE *file)
{
    char text;
    while ((text = fgetc(file)) != '\n')
    {
        if (text == EOF)
        {
            file_close(filename, file);
            return false;
        }
        fputc(text, stdout);
    }
    
    return true;
}