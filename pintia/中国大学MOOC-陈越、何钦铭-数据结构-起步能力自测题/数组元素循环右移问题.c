#include <stdio.h>
int main(void)
{
    int amount = 0; // 整数的个数
    int move = 0;   // 移动的位数

    scanf("%d %d", &amount, &move);
    int num_list[100]; // 整数数组

    int num_index = 0;
    for (; num_index < amount; num_index++)
    {
        scanf("%d", &num_list[num_index]);
    }

    for (int i = 0; i < move; i++)
    {
        int temporary = num_list[amount - 1];
        for (int h = amount - 1; h >= 0; h--)
        {
            
            num_list[h] = num_list[h - 1];
            if (h == 0)
            {
                num_list[h] = temporary;
            }
        }
    }
    for (int i = 0; i < amount; i++)
    {
        printf("%d", num_list[i]);
        if (i != amount - 1)
        {
            printf(" ");
        }
    }
    return 0;
}