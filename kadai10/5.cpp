#include "stdio.h"

int input(int *num){
    printf("正の整数を入力してください");
    scanf("%d", num);
    return 10;
}

int factorial(int num){
    int ans = 1;
    for (int loop = num; loop > 0; --loop) {
        ans = ans * loop;
    }
    return ans;
}

int output(int ans){
    printf("階乗: %d\n",ans);
    return 0;
}

int main(){
    int num,ans;
    num = input(&num);
    ans = factorial(num);
    output(ans);

    return 0;
}
