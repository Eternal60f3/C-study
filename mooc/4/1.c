#include <stdio.h>
int main(void)
{
    int num;
    int even_num;   // 偶数
    int uneven_num; // 奇数

    for (scanf("%d", &num), even_num = 0, uneven_num = 0; num != -1; scanf("%d", &num))
    {
        num % 2 == 0 ? even_num++ : uneven_num++;
    }
    printf("%d %d", uneven_num, even_num);
    return 0;
}