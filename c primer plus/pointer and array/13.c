#include <stdio.h>
#define ROWS 3
#define COLS 5

double adv_row(double *pointer, int cols);
double adv_nums(double (*pointer)[COLS], int rows);
double max_num(double (*)[COLS], int);


void main(void)
{
    double nums[ROWS][COLS];

    int row_index = 0;
    int col_index = 0;
    printf("enter 3 X 5 nums please\n");
    for (;row_index < ROWS; row_index++)
    {
        for (col_index = 0;col_index < COLS; col_index++)
        {
            scanf("%lf", &nums[row_index][col_index]);
            printf("f: %f\n", nums[row_index][col_index]);
        }
        printf("row: %d  ", row_index+1);
        adv_row(nums[row_index], COLS);
    }
    adv_nums(nums, ROWS);
    max_num(nums, ROWS);
}

double adv_row(double *pointer, int cols)
{
    double total = 0;
    double adv;
    int index = 0;
    for (;index < cols; index++)
    {
        total += pointer[index];
    }
    adv = total / cols;
    printf("adv: %f\n", adv);
    return adv;
}

double adv_nums(double (*pointer)[COLS], int rows)
{
    double total = 0;
    int row_index = 0;
    int col_index = 0;

    for (;row_index < rows; row_index++)
    {
        for (col_index = 0;col_index < COLS; col_index++)
        {
            total += pointer[row_index][col_index];
        }
    }
    double adv = total / (rows * COLS);
    printf("adv_all: %f\n", adv);
    return adv;
}

double max_num(double (*pointer)[COLS], int rows)
{
    double max_num = 0;
    int row_index = 0;
    int col_index = 0;

    for (;row_index < rows; row_index++)
    {
        for (col_index = 0;col_index < COLS; col_index++)
        {
            if (max_num < pointer[row_index][col_index])
            {
                max_num = pointer[row_index][col_index];
            }
        }
    }
    printf("max_num: %f\n", max_num);
    return max_num;
}