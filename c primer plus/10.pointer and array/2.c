#include <stdio.h>
void copy_arr(double *purpose, double *source, int);
void copy_ptr(double *, double *, int);
void copy_ptrs(double *, double *, double *);
void main(void)
{
    double data[5] = {1.23, 1.5, 1.54, 9.42, 5.98};
    double data1[5], data2[5], data3[5];
    int a = 0;
    for (; a < 5; a++)
    {
        printf("%f\n", *(data + a));
    }
    copy_arr(data1, data, 5);
    copy_ptr(data2, data, 5);
    copy_ptrs(data3, data, data + 5);
    int i = 0;
    for (; i < 5; i++)
    {
        printf("%f-%f-%f-%f\n", *(data1 + i), data2[i], data3[i], *(data + i));
    }
}

void copy_arr(double *purpose, double *source, int count)
{
    int index = 0;
    for (; index < count; index++)
    {
        purpose[index] = source[index];
    }
}

void copy_ptr(double *purpose, double *source, int count)
{
    int index = 0;
    for (; index < count; index++)
    {
        *(purpose + index) = *(source + index);
    }
}

void copy_ptrs(double *purpose, double *source, double *end)
{
    for (; source < end; source++)
    {
        *(purpose) = *(source);
        purpose++;
    }
}
