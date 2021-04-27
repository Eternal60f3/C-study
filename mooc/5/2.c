#include <stdio.h>
#include <math.h>
#define MAX 1000000
#define MIN -1000000
int main(void)
{
    int num;
    int every_num;
    int every_nums[10];
    int index = 0;
    int scale = 10;

    while (scanf("%d", &num) != 1 || (num < MIN) || (num > MAX))
        goto a;
    if (num < 0)
    {
        printf("fu ");
        num *= -1;
    }
    if (num == 0) printf("ling");
    
    while (fabs(num) > 0)
    {

        every_num = num % scale;
        num /= scale;
        every_nums[index++] = every_num;
    }

    int every_num_sorted;
    for (index--; index >= 0; index--)
    {
        every_num_sorted = every_nums[index];
        switch (every_num_sorted)
        {
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        case 0:
            printf("ling");
            break;
        default:
            break;
        }
        if (index != 0)
            printf(" ");
    }
    a:
    return 0;
}