#include "stdio.h"

int main(){
    int ans;

    printf("好きな季節は春(1) 夏(2) 秋(3) 冬(4)\n");
    scanf("%d",&ans);

    switch (ans) {
        case 1:
            printf("春はいいですよね\n");
            break;
        case 2:
            printf("夏はいいですよね\n");
            break;
        case 3:
            printf("秋はいいですよね\n");
            break;
        case 4:
            printf("冬はいいですよね\n");
            break;
    }

    printf("ご回答ありがとうございました\n");

    return 0;
}
