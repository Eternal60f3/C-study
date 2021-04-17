#include <stdio.h>
int main(void)
{
    int coe; // 系数
    int power;
    int coes[1000];
    int powers[1000];
    int coe_index1 = 0;
    int power_index1 = 0;

    for (; scanf("%d %d", &power, &coe) == 2; coe_index1++, power_index1++)
    {
        powers[power_index1] = power;
        coes[coe_index1] = coe;
    }

    int p_index2 = 0, c_index2 = 0;
    int is_same[1000];
    int s_index = 0;
    for (; p_index2 <= power_index1; p_index2)
    {
        for (s_index = 0; s_index < p_index2; s_index++)
        {
        }
    }
}