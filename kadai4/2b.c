#include "stdio.h"

int main(){
    int ans;

    printf("注文を伺います\n");
    printf("1: ハンバーガー単品\n");
    printf("2: ハンバーガー+ドリンク\n");
    printf("3: ハンバーガー+ドリンク+ポテト\n");
    printf("1-3以外の数: スマイル\n");

    scanf("%d",&ans);

    printf("--------------\n");

    switch (ans) {
        case 3:
            printf("ポテトお待たせいたしました\n");
        case 2:
            printf("ドリンクお待たせいたしました\n");
        case 1:
            printf("ハンバーガーお待たせいたしました\n");
            break;
        default:
            printf("お決まりになったらお申し付けください");
    }

    printf("-----------------\n");

    printf("ありがとうございました");

    return 0;
}
