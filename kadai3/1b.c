#include "stdio.h"

int main(){
    int num1, num2;
    double dnum;

    num1 = 12345;
    num2 = 12;
    dnum = 3.141592;

    printf("------------\n");
    printf("整数1=%5d\n", num1 + 1);
    printf("整数2=%5d\n", num2 - 1);
    printf("実数A=%5.2f\n", dnum);
    printf("実数B=%7.2f\n", dnum);
    printf("実数C=%5.3f\n", dnum+10000);
}
