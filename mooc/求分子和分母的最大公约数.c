#include <stdio.h>
int max(int, int);
void main(void)
{
    int up_num = 0;    // 分子
    int under_num = 0; // 分母
    scanf("%d/%d", &up_num, &under_num);
    int max_num = max(up_num, under_num);
    up_num = up_num / max_num;
    under_num = under_num /max_num;
    printf("max_divisor:%d\n", max_num);
    printf("%d/%d", up_num, under_num);
}
int max(int up, int under)
{
    int temp;
    while (under != 0)
    {
        temp = up % under;
        up = under;
        under = temp;
    }
    return up;
}
