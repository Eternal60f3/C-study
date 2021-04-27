#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned int num; // 输入的数字
    int num_value; // 输入的数字每一位的值
    int num_count; // 数位
    int scale; // 进制数值
    int num_division;// 数字除十后的值
    int bit_value; // 二进制位值
    int ten_two; // 二进制对应的十进制值 
    
    scanf("%d", &num);
    for (num_count = 1, scale = 10,bit_value = 1,
    ten_two = 0, num_division = num; num_division > 0;
    num_count++, bit_value *= 2)
    {
        num_value = num_division % scale;
        num_division /= scale;
        if ((bool)(num_value % 2) == (bool)(num_count % 2))
        {
            ten_two += bit_value;
        }
    }
    printf("%d", ten_two);
}