#include <stdio.h>
int main(void)
{
    int year = 1;
    double capital_Da, capital_De;
    capital_Da = capital_De = 100;
    const double accrual1 = 0.1;
    const double accrual2 = 0.05;

    while (capital_Da >= capital_De)
    {
        capital_Da += (double)100 * accrual1;
        capital_De += capital_De * 0.05;
        year++;
        printf("Da: %.2f, De: %.2f, year: %d\n", capital_Da, capital_De, year);
    }
    printf("%d\n", year);
}