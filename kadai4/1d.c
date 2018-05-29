#include "stdio.h"

int main(){
    int ans;

    printf("好きな季節は春(1) 夏(2) 秋(3) 冬(4)\n");
    scanf("%d",&ans);

    if(ans == 1){
        printf("春はいいですよね\n");
    }
    if(ans == 2){
        printf("夏はいいですよね\n");
    }
    if(ans == 3){
        printf("秋はいいですよね\n");
    }
    if(ans == 4){
        printf("冬はいいですよね\n");
    }

    printf("ご回答ありがとうございました\n");

    return 0;
}
