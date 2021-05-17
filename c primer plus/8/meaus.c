#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 1000000
#define MIN -1000000
char get_choice(void); // 获取选择
int file_strlen(void); // 查看文件里面的字符数量
int count(void);     // 求指定范围内的平方和

int main(void)
{
    char choice;
    choice = get_choice();
    switch (choice)
    {
    case 'a':
        file_strlen();
        break;
    case 'c':
        count();
        break;
    case 'q':
        break;
    default:
        printf("ERROR!\n");
        break;
    }
    printf("bye!\n");
    return 0;
}

char get_first() // 拿取第一个字符, 并丢弃不需要的字符
{
    char ch;
    ch = getchar();
    while (getchar() != '\n')
    {
        continue;
    }
    return ch;
}

char get_choice(void)
{
    char ch;
    printf("Enter the letter of your choice:\n");
    printf("a. get file strlen           c. count\n");
    printf("q. quit\n");
    printf("Please your choice\n");
    ch = get_first();
    while (ch != 'a' && ch != 'c' && ch != 'q')
    {
        printf("Please respond with a,c,q\n");
        ch = get_first();
    }
    return ch;
}

int isin_range(int,int);

int count(void)
{
    int lower, higner;
a:
    printf("Please enter lower and higner,enter two same value if you want to quit\n");
    while (scanf("%d %d", &lower, &higner) != 2 || lower > higner)
    {
        if (lower == higner)
            return;
        printf("lower and higner must be integers, and lower must be less than higner\n");
        while (getchar() != '\n')
            continue;
    }
    if (isin_range(lower, higner))
    {
        goto a;
    }

    int num;
    long sum_power = 0;
    for (num = lower; num <= higner; num++)
    {
        sum_power += num * num;
    }
    printf("lower: %d, higner: %d , sum_power: %ld", lower, higner, sum_power);
    return sum_power;
}

int isin_range(int lower, int higner) //查看数字范围是否被允许
{
    bool not_good = false;
    if (lower < MIN || higner < MIN || lower > MAX || higner > MAX)
    {
        printf("lower must be > -1000000, hign must be < 1000000,please enter again\n");
        not_good = true;
    }
    return not_good;
}

int file_strlen(void)
{
    int strlen_file = 0;
    char filename[50];
    FILE *file;

a:
    printf("Please enter filename -- need know file_strlen,q is quit\n");
    scanf("%s", filename);
    printf("%s\n", filename);
    if (filename == "q")
        return;
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("failed open file\n");
        goto a;
    }
    while (getc(file) != EOF)
    {
        strlen_file++;
    }
    printf("%s strlen: %d", filename, strlen_file);
    return strlen_file;
}