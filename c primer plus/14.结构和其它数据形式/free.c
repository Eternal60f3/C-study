#include <stdio.h>
#include <stdlib.h>

struct data1
{
    union
    {
        char name[2];
        double value;
        struct
        {
            double f1;
            int f2;
        };
    };
    int num;
};
void main(void)
{
    struct data1 o = {{.f1 = 110}, 10};
    printf("%f, %d", o.f1, o.num);
    
}