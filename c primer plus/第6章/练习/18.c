#include <stdio.h>
int main(void)
{
    int week;
    int count_judge;
    int friend_count;

    for (week = 1, friend_count = 5; (count_judge = (friend_count - week) * 2) <= 150; week++)
    {
        friend_count = count_judge;
        printf("week: %d, friend_count: %d\n", week, friend_count);
    }
    printf("%d\n", friend_count);
    return 0;
}