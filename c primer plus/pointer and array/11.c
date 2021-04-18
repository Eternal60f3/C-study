#include <stdio.h>
void print_array(int, int, int (*)[]);
void two(int, int, int (*)[]);
void main(void)
{
    int junk[3][5] = {
        {2, 4, 6, 8, 6},
        {3, 5, 7, 9, 10},
        {12, 10, 8, 6, 9}};
    print_array(3, 5, junk);
    two(3, 5, junk);
    printf("\n");
    print_array(3, 5, junk);
}
void print_array(int out, int in, int (*array)[in])
{
    int o = 0;
    int i = 0;
    for (o = 0; o < out; o++)
    {
        for (i = 0; i < in; i++)
        {
            printf("%d ", *(*(array + o) + i));
        }
        printf("\n");
    }
}

void two(int out, int in, int (*array)[in])
{
    int o = 0;
    int i = 0;
    for (o = 0; o < out; o++)
    {
        for (i = 0; i < in; i++)
        {
            array[o][i] *= 2;
        }
    }
}