#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define RANGE 10
#define ARR_SIZE 100

void sort_num(int *, int);
int rand_num(void);

void main(void)
{   
    srand((unsigned int)time(0));

    int num[ARR_SIZE];
    for (int i = 0; i < 100; i++)
    {
        num[i] = rand_num();
    }

    sort_num(num, ARR_SIZE);

    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", num[i]);
    }
}

int rand_num(void)
{

    int result = rand() % RANGE + 1;
    printf("result: %d\n", result);
    return result;
}

void sort_num(int *array, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int o = i + 1; o < size; o++)
        {
            if (array[i] < array[o])
            {
                int temp = array[i];
                array[i] = array[o];
                array[o] = temp;
            }
        }
    }
}