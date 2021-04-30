#include <stdio.h>
void main(void)
{
    int time = 0;         // 输入的时间
    int total_minute = 0; // 输入的时间转为分钟后
    int add_minute = 0;   // 需要添加的时间
    int after_add = 0;    // total_minute加上需要添加的分钟数

    scanf("%d %d", &time, &add_minute);
    int hour = time / 100;
    int minute = time - hour * 100;
    total_minute = hour * 60 + minute;

    after_add = total_minute + add_minute;
    int hour_after_add = after_add / 60;
    int minute_after_add = after_add % 60;
    if (hour_after_add >= 24)
    {
        hour_after_add = 0 + (hour_after_add - 12);
    }
    printf("%d%02d", hour_after_add, minute_after_add);
}