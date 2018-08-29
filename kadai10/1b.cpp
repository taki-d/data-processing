#include "stdio.h"

int func1(){
    printf("*****\n");
    printf("***\n");
    printf("*\n");

    return 0;
}


int main(){
    func1();
    func1();
    func1();

    int num = 100;
    printf("%d\n",num);

    func1();
    func1();

    return 0;
}
