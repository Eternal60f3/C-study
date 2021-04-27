#include <stdio.h>
int main(void)
{
    double num;
    double foot;
    double inch;
    scanf("%lf", &num);
    num /= 100.0;
    foot = num / 0.3048;
    inch = (foot - (int)foot) * 12;
    printf("%d %d", (int)foot, (int)inch);
    return 0;
}