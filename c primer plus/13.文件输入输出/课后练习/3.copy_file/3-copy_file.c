#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define BUFSIZE 4096
#define SLEN 81

FILE *file_open(const char *filename, char *open_type);
void file_close(const char *, FILE *);
void gettowrite(FILE *source, FILE *dest);
void main(int avgc, char *avgv[])
{
    FILE *file;
    FILE *temp;
    char filename[SLEN];
    const char *temp_name = "temp.txt";

    puts("enter your filename please.");
    scanf("%s", filename);

    file = file_open(filename, "r");
    temp = file_open(temp_name, "w+");
    
    char text;
    gettowrite(file, temp);
    
    file_close(filename, file);

    file = file_open(filename, "w+");
    rewind(temp);
    while((text = fgetc(temp)) != EOF)
        fputc(toupper(text), file);
    
    puts("file content");
    rewind(file);
    gettowrite(file, stdout);
    file_close(temp_name, temp);
    file_close(filename, file);
    puts("\ndone");
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

void gettowrite(FILE *source, FILE *dest)
{
    char text;
    while ((text = fgetc(source)) != EOF)
        fputc(text, dest);
}