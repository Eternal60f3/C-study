#include <stdio.h>
#define MAX 100
#define MIN 10

void main(void)
{
    int nums[200];
    int small = 0, big = 0;
    int scale = 10;
    printf("enter two num please such 16/19\n");
    while (scanf("%d/%d", &small, &big) || small >= big || small >= MAX || big < MIN)
    {
        printf("two nums small/big\n");
    }
    int index = 0;
    for (; index < 200; index++)
    {
        nums[index] = (small * 10) / big;
        small = (small * 10) % big;
        if (small == 0)
            break;
    }
    printf("0.");
    for (int i = 0; i <= index; i++)
    {
        printf("%d", nums[i]);
    }
    printf("\n");
}