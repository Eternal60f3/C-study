#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define filename_len 40
void main(int argc, char *argv[])
{
    FILE *in, *out;
    char filename[40];

    if ((in = fopen(argv[1], "r")) == NULL)
    {
        puts("open in_file error");
        exit(EXIT_FAILURE);
    }

    strncpy(filename, argv[1], filename_len - 5);
    strcat(filename, ".red");

    if ((out = fopen(filename, "w")) == NULL)
    {
        puts("open out_file error");
        exit(EXIT_FAILURE);
    } 

    char single_text;
    int count = 0;
    while ((single_text = getc(in)) != EOF)
    {
        if (count++ % 3 == 0)
        {
            putc(single_text, out);
        }
    }
    if (fclose(in) != 0 || fclose(out) != 0)
    {
        puts("close file error");
        exit(EXIT_FAILURE);
    }
    puts("done");
}
