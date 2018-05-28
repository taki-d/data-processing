#include "stdio.h"

int main(){
    for (int loop = 0; loop < 10; ++loop) {
        printf("%d回目\n", loop);
    }

    printf("\n-----------------\n");

    for (int loop = 0; loop < 10; loop=loop+1) {
        printf("%d回目\n", loop);
    }
}
