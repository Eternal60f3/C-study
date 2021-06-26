#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define RANGE 10
#define ARR_SIZE 100
int rand_num(void);
void single_100num(void);

void main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        srand(i);
        
        printf("the %d time\n", i);
        single_100num();
    }
}

void single_100num(void)
{
    int num[ARR_SIZE];
    for (int i = 0; i < 100; i++)
    {
        num[i] = rand_num();
    }

    for (int i = 1; i <= 10; i++)
    {
        int count = 0;
        for (int o = 0; o < 100; o++)
        {
            if (num[o] == i)
            {
                count++;
            }
        }
        printf("%d_count: %d\n", i, count);
    }
}

int rand_num(void)
{
    int result = rand() % RANGE + 1;
    return result;
}