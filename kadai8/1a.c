#include <stdio.h>

int main()
{
    char ch;
    char str[81] = "The Force will be with you.";

    ch='A';
    printf("chの文字は[%c][%d]\n",ch,ch);
    ch = ch + 1;
    printf("chの文字は[%c][%d]\n",ch,ch);
    ch = ch + 1;
    printf("chの文字は[%c][%d]\n",ch,ch);

    printf("文字列の表示[%s]",str);

    return 0;
}
