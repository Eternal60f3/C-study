#include <stdio.h>
#define MIN 1
void main(void)
{
    int num;
    int count = 0;
    scanf("%d", &num);
    while (num != 1)
    {
        if (num % 2)
        {
            num = (3 * num + 1) / 2; 
        }
        else
        {
            num /= 2;
        }
        count++;
        printf("count: %3d; num: %d\n", count, num);
    }
    // printf("%d", count);
}