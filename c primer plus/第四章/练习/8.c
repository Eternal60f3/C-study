#include <stdio.h>
#define JIALUN_SHENG 3.785
#define YINGLI_KM 1.609
int main(void)
{   
    double journey;     // ·��
    double oil;    // ���ĵ�������
    scanf("%lf %lf", &journey, &oil);
    printf("ÿ����������ʻ%.1fӢ��\n", journey / oil);
    printf("ÿ��100��������%.1f����\n", (oil * JIALUN_SHENG) / (journey * YINGLI_KM) * 100);
    return 0;
}