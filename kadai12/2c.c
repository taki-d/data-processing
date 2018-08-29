#include <stdio.h>

struct DataType{
    int num;
    double dnum;
};

int main(){
    struct DataType data[4];
    int loop;
    for(loop = 0; loop < 4; loop++){
        data[loop].num = (loop + 1) * 100;
        data[loop].dnum = 100./ (loop + 1);
    }

    for(loop = 0; loop < 4; loop++){
        printf("%d-%f\n",data[loop].num,data[loop].dnum);
    }

    return 0;
}
