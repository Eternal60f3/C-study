#include <stdio.h>
extern int rand0(void);
extern void srand(unsigned int seed);
void main(void)
{
    int seed = 0;
    printf("please enter your choice for seed\n");
    while (scanf("%d", &seed) == 1)
    {
        srand(seed);
        for (int i = 0; i < 5; i++)
        {
            printf("%d\n", rand0());
        }
        printf("please enter your choice for seed\n");
    }
}