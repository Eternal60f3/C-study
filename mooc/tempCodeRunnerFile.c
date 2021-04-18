#include <stdio.h>
#include <stdbool.h>
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
        if (coe == 0)
            continue;
        powers[power_index1] = power;
        coes[coe_index1] = coe;
    }

    int p_index2 = 0, c_index2 = 0;
    int same_power[1000];
    int s_index = 0;
    int power_coe[100][2];

    int index_same[100];
    int index_same_index = 0;
    for (; p_index2 < power_index1; p_index2++)
    {
        bool is_not_same = true;
        int s_index1 = 0;
        for (s_index1 = 0; s_index1 < s_index; s_index1++)
        {
            if (power_coe[s_index1][0] == powers[p_index2])
            {
                is_not_same = false;
                power_coe[s_index1][1] += coes[p_index2];
            }
        }
        if (is_not_same)
        {
            power_coe[s_index][0] = powers[p_index2];
            power_coe[s_index][1] = coes[p_index2];
            s_index++;
            index_same_index++;
        }
    }
    int o = 0;
    int o1 = 0;
    for (o = 0; o < s_index - 1; o++)
    {
        bool issorted = true;
        for (o1 = 0; o1 < s_index - 1 - o; o1++)
        {
            int temp = 0;
            if (power_coe[o1][0] < power_coe[o1 + 1][0])
            {
                int p = 0;
                for (p = 0; p < 2; p++)
                {
                    temp = power_coe[o1][p];
                    power_coe[o1][p] = power_coe[o1 + 1][p];
                    power_coe[o1 + 1][p] = temp;
                }
                issorted = false;
            }
        }
        if (issorted)
            break;
    }

    int i = 0;
    for (i = 0; i < s_index; i++)
    {
        if (power_coe[i][0] == 0)
            printf("+%d", power_coe[i][1]);
        else if (power_coe[i][0] == 1)
        {
            printf("+%dx", power_coe[i][1]);
        }
        else if (power_coe[i][1] == 1)
        {
            printf("x%d", power_coe[i][0]);
        }
        else
            printf("+%dx%d", power_coe[i][1], power_coe[i][0]);

    }
    return 0;
}