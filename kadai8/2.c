#include <stdio.h>

int main()
{
    char ch1,ch2;

    printf("2文字入力してEnterを押してください\n");
    scanf("%c", &ch1);
    scanf("%c", &ch2);

    printf("ch1=[%c]\nch2=[%c]\n",ch1,ch2);

    if(ch1 == ch2){
        printf("ch1とch2は等しい\n");
    }else{
        if(ch1 > ch2){
            printf("ch1の方が大きい\n");
        }else{
            printf("ch2の方が大きい\n");
        }
    }

    printf("ch1=%c=%d\n",ch1,ch1);
    printf("ch1=%c=%d\n",ch2,ch2);

    return 0;
}
