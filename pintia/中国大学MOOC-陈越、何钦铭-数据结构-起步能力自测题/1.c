#include <stdio.h>
int print_sand_glass(int max_count, char symbol); // 打印沙漏形状
int main(void)
{
    char symbol = 0; // 给定的符号
    int num = 0;     // 给定的符号数目

    scanf("%d %c", &num, &symbol);

    int max_count = 1; // 可以打印的最大奇数个
    int remain = 0;    // 剩下没有用上的符号数目
    int total_now = 1; // 目前总共的符号数目
    
    if (num == 0)
    {
        return 0;
    }

    for (; num - total_now >= (max_count + 2) * 2; max_count += 2)
    {
        total_now += (max_count + 2) * 2;
    }

    remain = num - total_now;
    if (max_count == 1)
    {
        printf("%c", symbol);
        if (remain) {
            printf("\n%d", remain);
        }
        return 0;
    }
    print_sand_glass(max_count, symbol);
    if (remain) printf("\n%d", remain);

    return 0;

}
int print_sand_glass(int max_count, char symbol)
{
    int blank_count = 0; // 每一行沙漏前面的空白数目
    int sand = max_count;
    for (;sand >= 1; sand -= 2, blank_count++)
    {
        int blank = 0;      // 该行已有空白数目
        for (blank = 0; blank < blank_count; blank++)
        {
            printf(" ");
        }
        int i = 0;         // 该行已有符号数目
        for (i = 0; i < sand; i++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    int reversal_sand = 3; // 沙漏的另一半目前的最大个数
    int blank1;
    for (;reversal_sand <= max_count; reversal_sand += 2, blank_count--)
    {
        for (blank1 = blank_count - 2; blank1 > 0; blank1--)
        {
            printf(" ");
        }

        int s = 0;
        for (s = 0; s < reversal_sand; s++)
        {
            printf("%c", symbol);
        }
        if (reversal_sand != max_count) printf("\n");
    }
    return 0;
}