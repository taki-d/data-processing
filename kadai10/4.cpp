#include "stdio.h"

int input(int *num){
    printf("正の整数を入力してください");
    scanf("%d",  num);
    return 0;
}

int factorial(int num,int *ans){
    *ans = 1;
    for (int loop = num; loop > 0; --loop) {
        *ans = *ans * loop;
    }
    return 0;
}

int output(int ans){
    printf("階乗: %d\n",ans);
    return 0;
}

int main(){
    int num,ans;
    input(&num);
    factorial(num,&ans);
    output(ans);


    return 0;
}
