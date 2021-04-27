#include <stdio.h>

unsigned long long ten_two(int);
void main(void)
{
    int num;
    printf("please enter a int_num\n");
    while(scanf("%d", &num) == 1)
    {
        ten_two(num);
        printf("\nplease enter a int_num\n");
    }
}

unsigned long long ten_two(int num)
{
    const int scale = 2;
    int r;
    r = num % scale;
    if (num >= scale)
    {
        ten_two(num / 2);
    }
    printf("%d", r);
    return;
}