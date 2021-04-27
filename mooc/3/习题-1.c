#include <stdio.h>
#include <math.h>
#define TIMELAG 8
#define TIMESYSTEM 24
int main(void)
{
    int BJT;
    int BJC_h;
    int BJC_f;
    int UTC;
    int UTC_h;
    int UTC_f;

    scanf("%d", &BJT);
    BJC_h = BJT / 100;
    BJC_f = BJT - (BJC_h * 100);

    if (BJC_h < TIMELAG)
    {
        UTC_h = TIMESYSTEM - fabs(BJC_h - TIMELAG);
    }
    else
    {
        UTC_h = BJC_h - 8;
    }
    UTC_f = BJC_f;
    if (UTC_h == 0)
    {
        printf("%d", UTC_f);
    }
    else
    {
        printf("%d%02d", UTC_h, UTC_f);
    }
    return 0;
}