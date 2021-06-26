#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "head.h"

int roll_count = 0;

static int dice(int sides)
{
    int result = rand() % sides + 1;
    roll_count++;
    return result;
}

int roll_dice(int sides, int dice_count)
{
    srand((unsigned int)time(0));
    int total = 0;
    for (int d = 0; d < dice_count; d++)
    {
        total += dice(sides);
    }
    return total;
}