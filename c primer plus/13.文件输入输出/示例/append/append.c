#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *, FILE *);
char *s_gets(char *);
FILE *check_fopen(char *, FILE *);
void check_fclose(char *, FILE *);
void check_error(char *, FILE *);
void main(void)
{
    FILE *fa;
    FILE *fs;
    char name_destination[SLEN];
    char name_source[SLEN];

    puts("enter destination file");
    s_gets(name_destination);

    fa = check_fopen(name_destination, fa);

    puts("enter source file");
    while (s_gets(name_source) && name_source[0] != '\0')
    {
        fs = check_fopen(name_source, fs);
        append(fa, fs);
        check_error(name_destination, fa);
        check_error(name_source, fs);
        check_fclose(name_source, fs);
        puts("enter source file next");
    }

    puts("file contect:");
    rewind(fa);
    char text;
    while ((text = getc(fa)) != EOF)
    {
        putchar(text);
    }
    check_fclose(name_destination, fa);
    puts("done");
}

FILE *check_fopen(char *filename, FILE *file)
{
    if ((file = fopen(filename, "a+")) == NULL)
    {
        fprintf(stderr, "open %s file error\n", filename);
        exit(EXIT_FAILURE);
    }
    if (setvbuf(file, NULL, _IOFBF, BUFSIZE))
    {
        fprintf(stderr, "setvbuf %s file error\n", filename);
        exit(EXIT_FAILURE);
    }
    FILE *i = file;
    return i;
}
void check_error(char *filename, FILE *file)
{
    if (ferror(file) != 0)
    {
        puts("close file error");
        exit(EXIT_FAILURE);
    }
}

void check_fclose(char *filename, FILE *file)
{
    fclose(file);
}

void append(FILE *fa, FILE *fs)
{
    size_t win_read;
    static char temp[BUFSIZE];
    while ((win_read = fread(temp, sizeof(char), BUFSIZE, fs)) > 0)
    {
        fwrite(temp, sizeof(char), win_read, fa);
    }
}

char *s_gets(char text[])
{
    char *line_break;
    char *temp = fgets(text, SLEN, stdin);
    if (temp)
    {
        line_break = strchr(text, '\n');
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