#include <stdio.h>
double calc(double x, double y);
int main(void)

{
    double f1;
    double f2;
    printf("请输入两个数字\n");
    while (scanf("%lf %lf", &f1, &f2)==2)
    {
        printf("请输入两个数字\n");
        printf("%lf\n", calc(f1, f2));
    }
    return 0;
}

double calc(double x, double y)
{   
    return (x - y) / (x * y);
}