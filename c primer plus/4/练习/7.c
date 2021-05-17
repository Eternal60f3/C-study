#include <float.h>
#include <stdio.h>
int main(void)
{
    double double_value = 1.0 / 3.0;
    float float_value = 1.0 /3.0;

    printf("float: %d\ndouble: %d\n", FLT_DIG, DBL_DIG);
    printf("double float\n");
    printf("%6.6f %5.6f\n", double_value, float_value);
    printf("%6.12f %5.12f\n", double_value, float_value);
    printf("%6.16f %5.16f\n", double_value, float_value);
}