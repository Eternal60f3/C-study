#include <stdio.h>
#define M 100
int main(void)
{
    float high;
    char name[30];
    printf("������������ֺ����,���������Ϊ��λ");
    scanf("%s %f", name, &high);
    printf("%s, you are %.2f feet tall", name, high / (float)M);
    return 0;
}