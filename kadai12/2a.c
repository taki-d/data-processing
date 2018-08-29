#include <stdio.h>

int main()
{
    int num0, num1, num2, num3;
    double dnum0, dnum1, dnum2, dnum3;

    num0 = 100;
    num1 = 200;
    num2 = 300;
    num3 = 400;

    dnum0 = 100./1;
    dnum1 = 100./2;
    dnum2 = 100./3;
    dnum3 = 100./4;

    printf("%d-%f\n", num0, dnum0);
    printf("%d-%f\n", num1, dnum1);
    printf("%d-%f\n", num2, dnum2);
    printf("%d-%f\n", num3, dnum3);

    return 0;
}
