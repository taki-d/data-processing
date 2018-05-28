#include "stdio.h"

int main(){
    int num;
    double dnum;
    float fnum;

    printf("1.整数を入力してください");
    scanf("%d",&num);
    printf("2.実数を入力してください");
    scanf("%lf",&dnum);
    printf("3.実数を入力してください");
    scanf("%f",&fnum);

    printf("入力した値のリスト\n");
    printf("1:%d\n",num);
    printf("2:%.10f\n",dnum);
    printf("3:%.10f\n",fnum);

    return 0;
}
