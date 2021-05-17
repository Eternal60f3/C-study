#include <stdio.h>
#define JIALUN_SHENG 3.785
#define YINGLI_KM 1.609
int main(void)
{   
    double journey;     // 路程
    double oil;    // 消耗的汽油量
    scanf("%lf %lf", &journey, &oil);
    printf("每加仑汽油行驶%.1f英里\n", journey / oil);
    printf("每升100公里消耗%.1f升油\n", (oil * JIALUN_SHENG) / (journey * YINGLI_KM) * 100);
    return 0;
}