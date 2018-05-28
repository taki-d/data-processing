#include "stdio.h"

int main(){
    printf("9x9\n");

    for (int y = 0; y < 9; ++y) {
        for (int x = 0; x < 9; ++x) {
            printf("%3d",(x+1)*(y+1));
        }
        printf("\n");
    }
}
