#include <stdio.h>
void main(void)
{
    int * pointer;
    int num[3] = {2, 2, 3};
    pointer = num;
    printf("%d\n", num[0] + 1);
    printf("%p", &pointer);
    
}