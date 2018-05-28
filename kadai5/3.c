#include "stdio.h"

int main(){
    int ganpon = 1000,year = 0,rishi;

    printf("年利5%%の利息(円未満切り捨て)が複利でかかる\n");
    printf("1000円の元本が，2000円以上になるのは何年後でいくらか\n");
    printf("-------------\n");

    while(ganpon < 2000){
        rishi = (int)(ganpon * 0.05);
        ganpon = ganpon + rishi;
        year = year + 1;

        printf("%2d年目: %5d円\n", year, ganpon);
    }

    printf("\n\n2000円位上になるのは，%d年後で%d円です",year,ganpon);

    return 0;
}
