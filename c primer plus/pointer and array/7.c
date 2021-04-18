#include <stdio.h>
void copy_data(double (*)[12], const double (*)[12], int, int);
void main(void)
{
    const double rain[5][12] =
        {
            {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
            {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
            {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
            {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
            {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}};

    double data1[5][12];
    copy_data(data1, rain, 5, 12);
    int i = 0;
    int o = 0;
    for (i = 0; i < 5; i++)
    {
        for (o = 0; o < 12; o++)
        {
            printf("%10.2f ", data1[i][o]);
        }
        printf("\n");
    }
}

void copy_data(double (*purpose)[12], const double (*source)[12], int year, int month)
{
    int i = 0;
    int o = 0;
    for (i = 0; i < year; i++)
    {
        for (o = 0; o < month; o++)
        {
            *(*(purpose + i) + o) = *(*(source + i) + o);
        }
    }
}