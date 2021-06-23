#include <stdio.h>
#include "head.h"

void main(void)
{
    int sides, once_count, total;
    int status;

    printf("enter dice_sides\n");
    while (scanf("%d", &sides) == 1 && sides >= 2)
    {
        printf("enter once_count\n");
        if (status = scanf("%d", &once_count) != 1 && once_count < 1)
        {
            if (status == EOF)
            {
                break;
            }
            else
            {
                printf("enter int num please\n");
                while (getchar() != '\n')
                {
                    continue;
                }
                printf("enter dice_sides\n");
                continue;
            }
        }
        total = roll_dice(sides, once_count);
        printf("sides: %d; count: %d; total: %d\n", sides, once_count, total);
        printf("enter dice_sides\n");
    }
    printf("roll_dice: %d\n", roll_count);
}