#include <stdio.h>
#define TIME_HOUR 1000
#define TIMEOUT 40
#define TIMEOUT_TIME 1.5
#define BEFORE_300 0.15
#define BETWEEN_300_450 0.2
#define AFTER_450 0.45

int main(void)
{
    const TAX_300 = (double)300 * BEFORE_300;
    const TAX_450 = TAX_300 + (double)150 * BETWEEN_300_450;

    double time;
    double money;
    double tax;

    scanf("%lf", &time);
    money = time <= TIMEOUT ? time * TIME_HOUR : (TIMEOUT + 1.5 * (time - TIMEOUT)) * TIME_HOUR;
    if (money <= 300)
        tax = money * BEFORE_300;
    else if (money <= 450)
        tax = TAX_300 + (money - 300) * BETWEEN_300_450;
    else
        tax = TAX_450 + (money - 450) * AFTER_450;
    printf("money: %.2f, tax: %.2f, income: %.2f", money, tax, money - tax);
    return 0;
}