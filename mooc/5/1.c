#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int upper;
    int lower;
    int count;
    int su_count = 0;
    int su_num[200];
    int sum_su = 0;

    scanf("%d %d", &upper, &lower);
    for (count = 2; su_count <= lower; count++)
    {
        int is_su = true;
        int count_f2;
        for (count_f2 = 2; count_f2 * count_f2 <= count; count_f2++)
        {
            if (count % count_f2 == 0)
            {
                is_su = false;
                break;
            }
        }
        if (is_su)
        {
            su_num[su_count] = count;
            su_count++;
        }
    }
    int index;
    for (index = upper - 1; index <= (lower - 1); index++)
    {
        sum_su += su_num[index];
    }
    printf("%d", sum_su);
}