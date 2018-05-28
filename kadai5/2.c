#include "stdio.h"

int main(){
    int input;

    do{
        printf("0を入力するまで繰り返し何度も入力します．\n");
        scanf("%d",&input);
    }while(input != 0);

    printf("0が入力されたので終了します");

    return 0;
}
