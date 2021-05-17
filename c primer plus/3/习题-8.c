#include <stdio.h>
int main(void)
{
    double bei;
    scanf("%lf", &bei);
    printf("pintuo: %f", bei / 2);
    printf("yangsi: %2.2f", bei * 8);
    printf("datangshao: %f", bei * 8 * 2);
    printf("chahao: %f", bei * 8 * 2 * 3);
    return 0;
}