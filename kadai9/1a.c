#include <stdio.h>

int main()
{
    char str[81];
    int loop;

    printf("英文字列1つを入力してください:");
    scanf("%s",str);

    loop=0;
    while (str[loop] != '\0') {
        loop++;
    }

    printf("\n文字数は,%d文字です",loop);

    return 0;
}
