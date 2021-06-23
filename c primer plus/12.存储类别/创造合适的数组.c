#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    int max;
    int number;
    double *array;

    puts("enter num for array please");
    if (scanf("%d", &max) != 1)
    {
        puts("enter error num sorry");
        exit(EXIT_FAILURE);
    }

    array = (double *)malloc(max * sizeof(double));

    if (array == NULL)
    {
        puts("appear error");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (i < max && scanf("%d", &array[i]) == 1)
    {
        i++;
    }

    for (int num = 0; num < i; num++)
    {
        printf("%d", array[num]);
        if (num % 7 == 6)
        {
            printf("\n");
        }
    }
    if (i % 7 != 0)
    {
        printf("\n");
    }
    puts("done");
    free(array);
}