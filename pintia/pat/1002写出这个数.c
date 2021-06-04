#include <stdio.h>
#include <string.h>
void main(void)
{
    char num[101];
    int sum = 0;
    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        sum += num[i] - '0';
    }

    char *text[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    char sum_str[4];
    sprintf(sum_str, "%d", sum);
    for (int i = 0; i < strlen(sum_str); i++)
    {
        if (i != 0 && i != strlen(sum_str))
        {
            printf(" ");
        }
        printf("%s", text[sum_str[i] - '0']);
    }
}
