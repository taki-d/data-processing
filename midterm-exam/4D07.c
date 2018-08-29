// 4D07 木下 嵩裕

//問題5
#include "stdio.h"

int main(){
    printf("問題5\n");
    printf("整数一つと文字一つを入力: ");

    char input_char;
    int input_num;

    scanf("%d %c",&input_num,&input_char);

    int count = input_num;
    while (count != 0) {

        int a = 0;
        while (a < (input_num - count)) {
            printf("*");
            ++a;
        }

        printf("%c\n",input_char);
        --count;
    }

    return 0;
}

/*
//問題4
#include "stdio.h"

int main(){
    printf("問題4\n");
    printf("整数(1~9): ");

    int input = 0;

    scanf("%d", &input);

    for (int a = 0; a < input; ++a) {
        for (int b = 0; b < input; ++b) {
            if(a + b == input){
                printf("%d + %d = %d\n", a, b, input);
            }
        }
    }

    return 0;
}

//問題3
#include "stdio.h"

int main(){
    printf("問題3\n");
    printf("偶数と奇数を判定!\n");

    printf("整数を入力してください: ");

    int input = 0;

    scanf("%d",&input);

    if(input % 2 == 0){
        printf("%dは偶数です\n", input);
    }else{
        printf("%dは奇数です\n", input);
    }

    return 0;
}

//問題2
#include "stdio.h"

int main(){
    printf("問題2\n");

    int a = 0,b = 0;

    printf("整数1: ");

    scanf("%d",&a);

    printf("整数2: ");

    scanf("%d",&b);

    if(a > b){
        printf("%d / %d + 3 = %d\n" ,a,b,a / b + 3);
    }else if (a < b) {
        printf("%d * %d + 2 = %d\n" ,a,b,a * b + 2);
    }else if(a == b){
        printf("%d + %d + 1 = %d\n" ,a,b,a + b + 1);
    }

    return 0;
}

//問題1
#include "stdio.h"

int main(){
    printf("問題1\n");
    printf("数字(1~10)を一つ入力しなさい:");

    int input = 0;

    scanf("%d",&input);

    printf("%dと私の出席番号を掛け算すると%dです!\n",input ,input * 7);

    return 0;
}
*/


