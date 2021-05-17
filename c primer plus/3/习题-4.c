#include <stdio.h>
int main(void)
{
    double f1;
    scanf("%lf", &f1);
    printf("十进制: %f", f1);
    printf("指数计数:%e", f1);
    printf("十六进制: %a", f1);
    getchar();
    return 0;
}