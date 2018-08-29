#include "stdio.h"

int func2(int a,int b){
    printf("[%d]\n", b);
    for (int loop = 0; loop < a; ++loop) {
        printf("%2d",loop);
    }
    printf("\n");
}

int func1(int a,int b){
    printf("A[%d][%d]\n",a,b);
    return 0;
}


int main(){
    int num1 = 4,num2 = 6;

    func2(num1,num2);
    func1(num1,3);

    return 0;
}
