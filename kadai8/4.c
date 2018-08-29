#include <stdio.h>

int main()
{
    char str[81];
    printf("空白を挟んで英文を80文字位内で入力\n");
    gets(str);

    printf("Good\n");
    puts(str);
    puts("Thank you\n");

    return 0;
}
