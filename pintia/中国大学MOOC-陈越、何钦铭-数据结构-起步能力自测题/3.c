#include <stdio.h>
int main(void)

{
    int amount = 0;    // 整数的个数
    int move = 0;      // 移动的位数

    scanf("%d %d", &amount, &move);
    int num_list[amount]; // 整数数组

    int num_index = 0;
    for (;num_index < amount;num_index++)
    {
        scanf("%d", &num_list[num_index]);
    }

    for (num_index = 0; num_index < amount; num_index++)
    {
        int temporary = 0;
    }   
}