#include <stdio.h>
#define M 100
int main(void)
{
    float high;
    char name[30];
    printf("请输入你的名字和身高,身高以厘米为单位");
    scanf("%s %f", name, &high);
    printf("%s, you are %.2f feet tall", name, high / (float)M);
    return 0;
}