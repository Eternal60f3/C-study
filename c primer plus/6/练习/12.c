#include <stdio.h>
double add1(void);
double add_subtract(void);
int main(void)
{
    printf("总和: %f\n", add1());
    printf("总和: %f\n", add_subtract());
    return 0;
}

double add1(void)
{
    int count;
    int count_for;
    double total;

    printf("请输入计算的次数\n");
    scanf("%d", &count);
    for (total = 0, count_for = 1; count_for <= count; count_for++)
    {
        total += 1.0 / (float)count_for;
    }
    return total;
}

double add_subtract(void)
{
    int sign;
    int count;
    int count_for;
    double total;

    printf("请输入计算次数\n");
    scanf("%d", &count);
    sign = -1;
    for (total = 0, count_for = 1; count_for <= count; count_for++)
    {
        sign *= -1;
        total += sign * (1.0 / (float)count_for);
    }
    return total;
}