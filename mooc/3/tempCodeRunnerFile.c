#include <stdio.h>
int main(void)
{
    int students;
    int first_culumn;
    int for_count;

    printf("Please enter the total number of students\n");
    scanf("%d", &students);
    for (for_count=0;for_count <= students;for_count++)
    {
        if (for_count % 2 != 0)
        {
            printf("%d", for_count);
            if (for_count < students-1)
            {
                printf(" ");
            }
        }
    }
    return 0;
}