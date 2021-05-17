#include <stdio.h>
int main(void)
{
    char letter;      //单个字母
    char letters[26]; //26个字母集
    int index;        //数组下标索引

    for (letter = 'A', index = 0; index < 26; letter++, index++)
        letters[index] = letter;

    for (index = 0; index < 26; index++)
        printf("%c", letters[index]);

    return 0;
}