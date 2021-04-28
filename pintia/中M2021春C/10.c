#include <stdio.h>
int calculate(int, int, char);
int division(int, int);
void main(void)
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    calculate(num1, num2, '+');
    calculate(num1, num2, '-');
    calculate(num1, num2, '*');
    division(num1, num2);
}
int calculate(int num1, int num2, char symbol)
{
    int result = 0;
    switch (symbol)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    }
    printf("%d %c %d = %d\n", num1, symbol, num2, result);
    return 0;
}
int division(int num1, int num2)
{
    if (num1 % num2)
    {
        printf("%d / %d = %.2f", num1, num2, (double)num1 / (double)num2);
    }
    else
    {
        printf("%d / %d = %d", num1, num2, num1 / num2);
    }
    return 0;
}