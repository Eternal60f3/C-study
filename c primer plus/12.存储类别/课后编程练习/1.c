#include <stdio.h>
#define RIGHT_NUM 56
static int count = 0;
void again(int *);
void main(void)
{
    int num = 0;
    extern int count;
    printf("enter num\n");
    scanf("%d", &num);
    while (num != RIGHT_NUM)
    {
        again(&num);
    }
    printf("count: %d\n", count);
}

void again(int *num)
{
    printf("error enter num again\n");
    scanf("%d", num);
    count++;
}