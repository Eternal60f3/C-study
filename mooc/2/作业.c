#include <stdio.h>
int main()
{
    int num = 0;
    scanf("%d", &num);
    int units_digit = num % 10;
    int tens_digit = ((num - units_digit) % 100) /10;
    int hundreds_digit = (num - (tens_digit * 10 + units_digit))/100;
    int reversed_num = units_digit*100 + tens_digit*10 + hundreds_digit;
    printf("%d", reversed_num);
    return 0;
}