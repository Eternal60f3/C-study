#include <stdio.h>
double calc(double x, double y);
int main(void)

{
    double f1;
    double f2;
    printf("��������������\n");
    while (scanf("%lf %lf", &f1, &f2)==2)
    {
        printf("��������������\n");
        printf("%lf\n", calc(f1, f2));
    }
    return 0;
}

double calc(double x, double y)
{   
    return (x - y) / (x * y);
}