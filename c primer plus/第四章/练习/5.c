#include <stdio.h>
int main(void)
{
    float speed;
    float file_size;
    printf("�������ļ������ٶȺ��ļ���С");
    scanf("%f %f", &speed, &file_size);
    printf("speed: %.2fMb/s\nfile_size: %.2fMB\ntime: %.2fs", speed, file_size, file_size / speed);
    return 0;
}