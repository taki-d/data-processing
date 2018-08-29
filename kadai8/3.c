#include <stdio.h>

int main()
{
    int num;
    double dnum;
    char ch0,ch1,ch2;
    char str[81];

    printf("整数を入力:");
    scanf("%d", &num);

    printf("実数を入力:");
    scanf("%lf", &dnum);

    printf("英字一文字と改行入力:");
    scanf("%c%c%c",&ch0,&ch1,&ch2);

    printf("英文字列と改行を入力:");
    scanf("%s",str);

    printf("[%d]です\n",num);
    printf("[%f]です\n",dnum);
    printf("[%c][%c][%c]です\n",ch0,ch1,ch2);
    printf("[%s]です\n",str);

    return 0;
}
