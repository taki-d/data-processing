#include <stdio.h>
#include <string.h>

int main()
{
    char str[81];

    printf("英文字列1つを入力してください:");
    scanf("%s",str);

    printf("\n文字数は,%d文字です",strlen(str));

    return 0;
}
