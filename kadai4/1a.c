#include "stdio.h"

int main(){
    int ans;

    printf("好きな季節は夏ですか\nYes:1 No:0\n");

    scanf("%d",&ans);

    if(ans == 0){
        printf("夏はいいですよね");
    }else {
        printf("夏は暑いですからね");
    }
}
