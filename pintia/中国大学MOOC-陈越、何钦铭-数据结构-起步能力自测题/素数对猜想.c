#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int prime_list[100000];
    int max_num = 0;   // 需要素数的个数
    int prime_now = 0; // 现有的素数的个数
    int count = 0;     // "无穷多对相邻且差为2的素数"  满足猜想的素数对的个数
    scanf("%d", &max_num);

    int num; // 给定数字
    for (num = 1; num <= max_num; num++)
    {
        bool is_prime = true; // 判断给定数字是不是素数
        int i;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime) // 如果是素数,现有的素数个数加一, 并将素数放入列表
        {
            prime_list[prime_now] = num;
            prime_now++;
            if ((prime_list[prime_now - 1] - prime_list[prime_now - 2]) == 2)
            {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}