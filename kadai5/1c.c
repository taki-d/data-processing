#include "stdio.h"

int main(){
    printf("奇数を順番に5個表示します\n");
    
    for (int loop = 0; loop < 5; ++loop) {
        int tmp = 1 + loop * 2;
        printf("%d: %3d\n",loop+1,tmp);
    }

    printf("\n\n------別な方法------\n\n");
    printf("奇数を順番に5個表示します\n");

    for (int loop = 0; loop < 5; ++loop) {
        printf("%d: %3d\n",loop+1,1+loop*2);
    }

    return 0;
}
